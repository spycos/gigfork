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

import org.alfresco.repo.node.encryption.MetadataEncryptor;
import org.alfresco.repo.publishing.PublishingModel;
import org.alfresco.service.cmr.repository.NodeRef;
import org.alfresco.service.cmr.repository.NodeService;
import org.springframework.social.connect.Connection;
import org.springframework.social.github.api.GitHub;
import org.springframework.social.github.connect.GitHubConnectionFactory;
import org.springframework.social.lastfm.api.LastFm;
import org.springframework.social.lastfm.auth.LastFmAccessGrant;
import org.springframework.social.lastfm.connect.LastFmConnectionFactory;
import org.springframework.social.oauth2.AccessGrant;

/**
 * @author Brian
 * @since 4.0
 */
public class LastFmPublishingHelper
{
    private NodeService nodeService;
    private LastFmConnectionFactory connectionFactory;
    private MetadataEncryptor encryptor;

    public void setNodeService(NodeService nodeService)
    {
        this.nodeService = nodeService;
    }

    public void setConnectionFactory(LastFmConnectionFactory connectionFactory)
    {
    	
        this.connectionFactory = connectionFactory;
    }

    public LastFmConnectionFactory getConnectionFactory()
    {
        return connectionFactory;
    }

    public void setEncryptor(MetadataEncryptor encryptor)
    {
        this.encryptor = encryptor;
    }

    public Connection<LastFm> getLastFmConnectionForChannel(NodeRef channelNode)
    {
        Connection<LastFm> connection = null;
        if (nodeService.exists(channelNode)
                && nodeService.hasAspect(channelNode, LastFmPublishingModel.ASPECT_DELIVERY_CHANNEL))
        {
            String tokenValue = (String) encryptor.decrypt(PublishingModel.PROP_OAUTH2_TOKEN, nodeService.getProperty(
                    channelNode, PublishingModel.PROP_OAUTH2_TOKEN));
            Boolean danceComplete = (Boolean) nodeService.getProperty(channelNode, PublishingModel.PROP_AUTHORISATION_COMPLETE);
            
            if (danceComplete)
            {
            	//FIXME: check what is need for session ,,, now is null!!! might not work!!
            	LastFmAccessGrant token = new LastFmAccessGrant(tokenValue, null);
                connection = connectionFactory.createConnection(token);
            }
        }
        return connection;
    }

	

}
