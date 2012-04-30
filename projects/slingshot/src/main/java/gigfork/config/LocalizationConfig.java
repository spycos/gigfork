/*
 * Copyright 2010-2011 the original author or authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package gigfork.config;

import gigfork.resolvers.CustomLocaleResolver;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.web.servlet.LocaleResolver;
import org.springframework.web.servlet.i18n.LocaleChangeInterceptor;

/**
 * Configuration for Greenhouse application @Components such as @Services, @Repositories, and @Controllers.
 * Loads externalized property values required to configure the various application properties.
 * Not much else here, as we rely on @Component scanning in conjunction with @Inject by-type autowiring.
 * @author Keith Donald
 */
@Configuration
public class LocalizationConfig {
	
	
	/**
	 * custom local resolver bean
	 * @return
	 */
	@Bean
	public LocaleResolver localeResolver() {
		CustomLocaleResolver localeResolver = new CustomLocaleResolver();       
		return localeResolver;
	}
	
	
	
	@Bean
	public LocaleChangeInterceptor localeChangeInterceptor() {
		
		LocaleChangeInterceptor localeChangeInterceptor = new LocaleChangeInterceptor();
		localeChangeInterceptor.setParamName("lang");
		
		return localeChangeInterceptor;
	}
	
	
	

}