package gigfork;

import gigfork.services.SitemapService;
import gigfork.services.SitemapServiceImpl;

import java.util.List;

public class SitemapTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		

		SitemapService sitemapService = new SitemapServiceImpl();
		
		String[] packages = {"gigfork", "org.springframework.social.connect.web"} ; 
		List<String> sitemapUrlsList = sitemapService.getSiteUrls(packages);

		 for (String url : sitemapUrlsList) {
			 System.out.println(url);
         }
	}

}
