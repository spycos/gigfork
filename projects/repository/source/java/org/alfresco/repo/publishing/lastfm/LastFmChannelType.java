/*
 * Copyright (C) 2005-2011 Alfresco Software Limited.
 *
 * This file is part of Alfresco
 *
 * Alfresco is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Alfresco is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Alfresco. If not, see <http://www.gnu.org/licenses/>.
 */
package org.alfresco.repo.publishing.lastfm;

import java.io.Serializable;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.alfresco.repo.publishing.AbstractChannelType;
import org.alfresco.repo.publishing.PublishingModel;
import org.alfresco.service.cmr.publishing.channels.Channel;
import org.alfresco.service.cmr.repository.NodeRef;
import org.alfresco.service.namespace.QName;
import org.alfresco.util.ParameterCheck;
import org.springframework.social.connect.Connection;
import org.springframework.social.lastfm.api.LastFm;
import org.springframework.social.lastfm.auth.LastFmAccessGrant;
import org.springframework.social.lastfm.auth.LastFmAuthOperations;
import org.springframework.social.lastfm.auth.LastFmAuthParameters;
import org.springframework.social.oauth2.OAuth2Parameters;
import org.springframework.util.MultiValueMap;

/**
 * @author Brian
 * @since 4.0
 */
public class LastFmChannelType extends AbstractChannelType
{
    public final static String ID = "lastFm";
    public final static String DEFAULT_REDIRECT_URI = "http://alfresco.com/stand-alone-auth-return.html";

    private LastFmPublishingHelper lastFmPublishingHelper;
    private String redirectUri = DEFAULT_REDIRECT_URI;

    public void setPublishingHelper(LastFmPublishingHelper lastFmPublishingHelper)
    {
        this.lastFmPublishingHelper = lastFmPublishingHelper;
    }

    public void setRedirectUri(String redirectUri)
    {
        this.redirectUri = redirectUri;
    }

    @Override
    public boolean canPublish()
    {
        return false;
    }

    @Override
    public boolean canPublishStatusUpdates()
    {
        return true;
    }

    @Override
    public boolean canUnpublish()
    {
        return false;
    }

    @Override
    public QName getChannelNodeType()
    {
        return LastFmPublishingModel.TYPE_DELIVERY_CHANNEL;
    }

    @Override
    public String getId()
    {
        return ID;
    }

    @Override
    public void sendStatusUpdate(Channel channel, String status)
    {
        Connection<LastFm> connection = lastFmPublishingHelper.getLastFmConnectionForChannel(channel.getNodeRef());
        connection.updateStatus(status);
    }

    @Override
    public String getNodeUrl(NodeRef node)
    {
        return null;
    }

    @Override
    public AuthUrlPair getAuthorisationUrls(Channel channel, String callbackUrl)
    {
        ParameterCheck.mandatory("channel", channel);
        if (!ID.equals(channel.getChannelType().getId()))
        {
            throw new IllegalArgumentException("Invalid channel type: " + channel.getChannelType().getId());
        }

        NodeRef channelRef = channel.getNodeRef();
        StringBuilder authStateBuilder = new StringBuilder(channelRef.getStoreRef().getProtocol())
        										.append('.')
        										.append(channelRef.getStoreRef().getIdentifier())
        										.append('.').append(channelRef.getId());
        
        LastFmAuthOperations oauthOperations = lastFmPublishingHelper.getConnectionFactory().getLastFmAuthOperations();

        //TODO: check how to create this shit!!!!
        Map<String, List<String>> parameters = null;
		OAuth2Parameters params = new OAuth2Parameters(parameters);
        LastFmAuthParameters lastFmParams = new LastFmAuthParameters(parameters);

        String authRequestUrl = oauthOperations.buildAuthorizeUrl(lastFmParams); 
        
        return new AuthUrlPair(authRequestUrl, redirectUri);
    }

    @Override
    protected AuthStatus internalAcceptAuthorisation(Channel channel, Map<String, String[]> callbackHeaders,
            Map<String, String[]> callbackParams)
    {
        AuthStatus authorised = AuthStatus.UNAUTHORISED;
        
        String accessToken = null;
        if (callbackParams.containsKey("access_token"))
        {
            //We have been given the access token directly.
            accessToken = callbackParams.get("access_token")[0];
        }
        else if (callbackParams.containsKey("code"))
        {
            //We have been passed an authorisation code that needs to be exchanged for a token
            LastFmAuthOperations oauthOps = lastFmPublishingHelper.getConnectionFactory().getLastFmAuthOperations();
            MultiValueMap<String, String> valuesMap = null;
			LastFmAccessGrant grant = oauthOps.exchangeForAccess(callbackParams.get("code")[0], valuesMap);
            accessToken = grant.getToken();
        }
        if (accessToken != null)
        {
            Map<QName,Serializable> channelProps = new HashMap<QName, Serializable>();
            channelProps.put(PublishingModel.PROP_OAUTH2_TOKEN, accessToken);
            channelProps = getEncryptor().encrypt(channelProps);
            getChannelService().updateChannel(channel, channelProps);
            authorised = AuthStatus.AUTHORISED;
        }
        return authorised;
    }
}
