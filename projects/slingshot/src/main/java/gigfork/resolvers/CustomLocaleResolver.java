package gigfork.resolvers;

import java.util.Locale;
import java.util.StringTokenizer;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


import org.springframework.extensions.surf.util.I18NUtil;
import org.springframework.web.servlet.LocaleResolver;

public class CustomLocaleResolver extends org.springframework.extensions.surf.mvc.LocaleResolver implements LocaleResolver
{
	 public Locale resolveLocale(HttpServletRequest request) {
	      System.out.println("Entering mysharelocale resolveLocale");

	      Locale locale = Locale.getDefault();
	      
	      Cookie[] cookies = request.getCookies();
	      String acceptLang = null;
	      // finding the Cookie storing the locale
	      String cookieName = "alf_share_locale";
	      if(cookies != null) {
	         for (int i = 0; i < cookies.length; i++) {
	            if (cookies[i].getName().equals(cookieName)) {
	               acceptLang = cookies[i].getValue();
	               break;
	            }
	         }
	      }
	      // if cookie not found, use "Accept-Language"
	      // set language locale from browser header
	      if (acceptLang == null) {
	         acceptLang = request.getHeader("Accept-Language");
	      }

	      if (acceptLang != null && acceptLang.length() != 0) {
	         StringTokenizer t = new StringTokenizer(acceptLang, ",; ");

	         // get language and convert to java locale format
	         String language = t.nextToken().replace('-', '_');

	         // set locale onto Alfresco thread local
	         locale = I18NUtil.parseLocale(language);
	         I18NUtil.setLocale(locale);
	      }
	      return locale;
	   }

	@Override
	public void setLocale(HttpServletRequest request, HttpServletResponse response, Locale locale) {
		// TODO Auto-generated method stub
		
	}
}
