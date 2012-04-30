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
package org.alfresco.repo.publishing.github;

import org.alfresco.repo.node.encryption.MetadataEncryptor;
import org.alfresco.repo.publishing.PublishingModel;
import org.alfresco.service.cmr.repository.NodeRef;
import org.alfresco.service.cmr.repository.NodeService;
import org.springframework.social.connect.Connection;
import org.springframework.social.github.api.GitHub;
import org.springframework.social.github.connect.GitHubConnectionFactory;
import org.springframework.social.oauth2.AccessGrant;

/**
 * @author Brian
 * @since 4.0
 */
public class GitHubPublishingHelper
{
    private NodeService nodeService;
    private GitHubConnectionFactory connectionFactory;
    private MetadataEncryptor encryptor;

    public void setNodeService(NodeService nodeService)
    {
        this.nodeService = nodeService;
    }

    public void setConnectionFactory(GitHubConnectionFactory connectionFactory)
    {
    	
        this.connectionFactory = connectionFactory;
    }

    public GitHubConnectionFactory getConnectionFactory()
    {
        return connectionFactory;
    }

    public void setEncryptor(MetadataEncryptor encryptor)
    {
        this.encryptor = encryptor;
    }

    public Connection<GitHub> getGithubConnectionForChannel(NodeRef channelNode)
    {
        Connection<GitHub> connection = null;
        if (nodeService.exists(channelNode)
                && nodeService.hasAspect(channelNode, GitHubPublishingModel.ASPECT_DELIVERY_CHANNEL))
        {
            String tokenValue = (String) encryptor.decrypt(PublishingModel.PROP_OAUTH2_TOKEN, nodeService.getProperty(
                    channelNode, PublishingModel.PROP_OAUTH2_TOKEN));
            Boolean danceComplete = (Boolean) nodeService.getProperty(channelNode, PublishingModel.PROP_AUTHORISATION_COMPLETE);
            
            if (danceComplete)
            {
                AccessGrant token = new AccessGrant(tokenValue);
                connection = connectionFactory.createConnection(token);
            }
        }
        return connection;
    }

	

}
