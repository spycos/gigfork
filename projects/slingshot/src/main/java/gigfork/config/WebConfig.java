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

import gigfork.DeviceHandlerMethodArgumentResolver;

import java.util.List;

import javax.inject.Inject;

import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.ImportResource;
import org.springframework.core.env.Environment;
import org.springframework.mobile.device.DeviceResolverHandlerInterceptor;
import org.springframework.web.method.support.HandlerMethodArgumentResolver;
import org.springframework.web.servlet.config.annotation.InterceptorRegistry;

import org.springframework.web.servlet.config.annotation.*;



/**
 * Spring MVC Configuration.
 * Implements {@link WebMvcConfigurer}, which provides convenient callbacks that allow us to customize aspects of the Spring Web MVC framework.
 * These callbacks allow us to register custom interceptors, message converters, argument resovlers, a validator, resource handling, and other things.
 * @author Keith Donald
 * @see WebMvcConfigurer
 */
@Configuration
@EnableWebMvc
@ImportResource({
	"classpath:web-application-config.xml"
})

public class WebConfig extends WebMvcConfigurerAdapter {

	@Inject
	private Environment environment;

	// implementing WebMvcConfigurer

	public void addInterceptors(InterceptorRegistry registry) {
		/*
		registry.addInterceptor(new AccountExposingHandlerInterceptor());
		registry.addInterceptor(new DateTimeZoneHandlerInterceptor());
		registry.addInterceptor(new UserLocationHandlerInterceptor());
		*/	
		registry.addInterceptor(new DeviceResolverHandlerInterceptor());
	}

	public void addArgumentResolvers(List<HandlerMethodArgumentResolver> argumentResolvers) {
		
		/*
		argumentResolvers.add(new AccountHandlerMethodArgumentResolver());
		argumentResolvers.add(new DateTimeZoneHandlerMethodArgumentResolver());
		argumentResolvers.add(new LocationHandlerMethodArgumentResolver());
	
		argumentResolvers.add(new FacebookHandlerMethodArgumentResolver(environment.getProperty("facebook.appId"), environment.getProperty("facebook.appSecret")));
		*/
		
		argumentResolvers.add(new DeviceHandlerMethodArgumentResolver());	
			
	}
	/*
	public void addResourceHandlers(ResourceHandlerRegistry registry) {
		registry.addResourceHandler("/resources/**").addResourceLocations("/resources/");
	}
	
	public void configureMessageConverters(List<HttpMessageConverter<?>> converters) {
		converters.add(new MappingJacksonHttpMessageConverter());
	}
	
	public Validator getValidator() {
		LocalValidatorFactoryBean factory = new LocalValidatorFactoryBean();
		ReloadableResourceBundleMessageSource messageSource = new ReloadableResourceBundleMessageSource();
		messageSource.setBasename("/WEB-INF/messages/validation");
		if (environment.acceptsProfiles("embedded")) {
			messageSource.setCacheSeconds(0);
		}
		factory.setValidationMessageSource(messageSource);
		return factory;
	}
	*/
	// additional webmvc-related beans

	
	
	
	/*
	 * 
	 * <bean
		class="org.springframework.web.servlet.handler.SimpleMappingExceptionResolver">
		<property name="exceptionMappings">
			<props>
				<prop key="com.mkyong.common.exception.GenericException">
					GenericExceptionPage
		                </prop>
				<prop key="java.lang.Exception">error</prop>
			</props>
		</property>
	</bean>
	
	/**
	 * Configures Tiles at application startup.
	 */
	
	/*
	@Bean
	public SimpleMappingExceptionResolver simpleMappingExceptionResolver() {
		
		Properties props = new Properties();
		props.put("com.springsource.greenhouse.exception.exceptionresolvers.SpecialRuntimeApplicationError", "runtimeExceptionErrorPage");
		props.put("com.springsource.greenhouse.exception.exceptionresolvers.SpecialCheckedApplicationError", "checkedExceptionErrorPage");
		props.put("java.net.UnknownHostException", "runtimeExceptionErrorPage");
		props.put("javax.servlet.ServletException", "runtimeExceptionErrorPage");
		

		SimpleMappingExceptionResolver exceptionResolver = new SimpleMappingExceptionResolver();
		
		exceptionResolver.setExceptionMappings(props);
		
		props = new Properties();
		props.put("runtimeExceptionErrorPage", "500");
		props.put("checkedExceptionErrorPage", "404");

		exceptionResolver.setStatusCodes(props);

		
		exceptionResolver.setDefaultErrorView("generalErrorPage");
		exceptionResolver.setDefaultStatusCode(HttpServletResponse.SC_NOT_FOUND);
		
		return exceptionResolver;

	}
	*/
	
}

