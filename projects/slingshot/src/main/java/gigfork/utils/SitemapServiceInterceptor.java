package gigfork.utils;

import java.lang.reflect.Method;

import org.aopalliance.intercept.MethodInterceptor;
import org.aopalliance.intercept.MethodInvocation;

public class SitemapServiceInterceptor implements MethodInterceptor {

	@Override
	public Object invoke(MethodInvocation methodInvocation) throws Throwable {
		
		long startTime = System.currentTimeMillis();
	   
		Object result = methodInvocation.proceed();
	    
		long duration = System.currentTimeMillis() - startTime;
	    
		Method method = methodInvocation.getMethod();
	    
		String methodName = method.getDeclaringClass().getName() + "." + method.getName();
	    
		System.out.println("Method '" + methodName + "' took " + duration + " milliseconds to run");
	    
	    return result;
	}
}