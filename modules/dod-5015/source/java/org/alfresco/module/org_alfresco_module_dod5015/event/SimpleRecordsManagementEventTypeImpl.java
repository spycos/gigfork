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
package org.alfresco.module.org_alfresco_module_dod5015.event;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.springframework.extensions.surf.util.I18NUtil;
import org.springframework.beans.factory.BeanNameAware;

/**
 * Simple records management event type implementation
 * 
 * @author Roy Wetherall
 */
public class SimpleRecordsManagementEventTypeImpl implements RecordsManagementEventType, BeanNameAware
{
	/** Logger */
    @SuppressWarnings("unused")
    private static Log logger = LogFactory.getLog(SimpleRecordsManagementEventTypeImpl.class);
	
    /** Display label lookup prefix */
    protected static final String LOOKUP_PREFIX = "rmeventservice.";
    
    /** Name */
    public static final String NAME = "rmEventType.simple";
    
    /** Records management event service */
    protected RecordsManagementEventService recordsManagementEventService;
    
    /** Name */
    protected String name;
    
    /**
     * Set the records management event service
     * 
     * @param recordsManagementEventService     records management service
     */
    public void setRecordsManagementEventService(RecordsManagementEventService recordsManagementEventService)
    {
        this.recordsManagementEventService = recordsManagementEventService;
    }
    
    /**
     * Initialisation method
     */
    public void init()
    {
        recordsManagementEventService.registerEventType(this);
    }
    
    /**
     * @see org.alfresco.module.org_alfresco_module_dod5015.event.RecordsManagementEventType#isAutomaticEvent()
     */
    public boolean isAutomaticEvent()
    {
        return false;
    }

    /**
     * @see org.alfresco.module.org_alfresco_module_dod5015.event.RecordsManagementEventType#getName()
     */
    public String getName()
    {
        return this.name;
    }

    /**
     * @see org.springframework.beans.factory.BeanNameAware#setBeanName(java.lang.String)
     */
    public void setBeanName(String name)
    {
        this.name = name;
    }
    
    /**
     * @see org.alfresco.module.org_alfresco_module_dod5015.event.RecordsManagementEventType#getDisplayLabel()
     */
    public String getDisplayLabel()
    {
        return I18NUtil.getMessage(LOOKUP_PREFIX + getName());
    }
}
