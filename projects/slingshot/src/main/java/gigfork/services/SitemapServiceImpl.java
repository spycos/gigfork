package gigfork.services;

import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import org.springframework.beans.factory.config.BeanDefinition;
import org.springframework.context.annotation.ClassPathScanningCandidateComponentProvider;
import org.springframework.core.type.filter.AnnotationTypeFilter;
import org.springframework.stereotype.Controller;
import org.springframework.util.ClassUtils;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;



public class SitemapServiceImpl implements SitemapService {
	
	/**
	 * returns a list of urls from classes annotated with @Controller. If that evaluates to true, those classes are lookup in order
	 * to search for @RequestMapping annotations. If those annotations are found we fetch the method annotation value and params and 
	 * add them to the list to return as result of processing.
	 * 
	 * Only GET annotion attributes will be take into account, and only !!!public!!! annotated methods will be found!
	 */
	@Override
	public List<String> getSiteUrls(String[] controllersPackages) {
		
		
		Set<Class<? extends Object>> controllerClasses = new HashSet<Class<? extends Object>>();
		
		ClassPathScanningCandidateComponentProvider scanner = new ClassPathScanningCandidateComponentProvider(false);
		
		scanner.addIncludeFilter(new AnnotationTypeFilter(Controller.class));

		for (String p : controllersPackages){
			for (BeanDefinition bd : scanner.findCandidateComponents(p)){
		
				try {
					controllerClasses.add(ClassUtils.forName(bd.getBeanClassName(), ClassUtils.getDefaultClassLoader()));
				} catch (ClassNotFoundException e) {
					e.printStackTrace();
				} catch (LinkageError e) {
					e.printStackTrace();
				}
			}
		}
        List<String> urls = new ArrayList<String>();

        for (Class<? extends Object> controller : controllerClasses) {
        	
        	System.out.println("processing controller class: " + controller.getName());
        	
            String controllerRequestMapping = null;
            
            if(controller.isAnnotationPresent(RequestMapping.class)) {
            	
            	RequestMapping annotation = controller.getAnnotation(RequestMapping.class);
                controllerRequestMapping = annotation.value()[0];
                
                /*
                new RequestMappingInfo(Arrays.asList(annotation.value()),
        				RequestConditionFactory.parseMethods(annotation.method()),
        				RequestConditionFactory.parseParams(annotation.params()),
        				RequestConditionFactory.parseHeaders(annotation.headers()),
        				RequestConditionFactory.parseConsumes(annotation.consumes(), annotation.headers()),
        				RequestConditionFactory.parseProduces(annotation.produces(), annotation.headers()));
                */
               
                
                if(controllerRequestMapping.endsWith("/")) {
                    controllerRequestMapping = controllerRequestMapping.substring(0,controllerRequestMapping.length() - 1);
                }
                if(controllerRequestMapping.endsWith("/*")) {
                    controllerRequestMapping = controllerRequestMapping.substring(0,controllerRequestMapping.length() - 2);
                }
                
                System.out.println("found {class} annotation requestMapping : " + controllerRequestMapping + " = will be used as base path for method annotations ");
                
                urls.add(controllerRequestMapping);
                
              
            }
            
            
            
            for (Method method : controller.getMethods()) {
                if (method.isAnnotationPresent(RequestMapping.class)) {
                    RequestMapping requestMapping = method.getAnnotation(RequestMapping.class);
                    if(null != requestMapping.value() && requestMapping.value().length > 0) {
                    	
                    	if(null != requestMapping.method()){
                    		if(requestMapping.method().length > 0 && !requestMapping.method()[0].equals(RequestMethod.GET)){
                    			continue;
                    		}
                    	}
                    
 	
                    	controllerRequestMapping = requestMapping.value()[0];
                    	
                    	
                    	if(null != requestMapping.params()){
                    		if(requestMapping.params().length > 0){
                    			
                    			controllerRequestMapping = controllerRequestMapping + "?";
                    			
                    			for(String param : requestMapping.params()){
                    				controllerRequestMapping = (
                    							controllerRequestMapping.endsWith("}") ? 
                    									(controllerRequestMapping + "&") : controllerRequestMapping
                    				) + (param + "={" + param + "}");
                    			}
                    			
                    		}
                    	}
                    	
                    	 
                    	
                    	urls.add(controllerRequestMapping);
                    	
                    }

                    System.out.println("found {method} annotation requestMapping : " + controllerRequestMapping);

                }
            }

        }
        Collections.sort(urls);
        
        return urls;
	}

}
