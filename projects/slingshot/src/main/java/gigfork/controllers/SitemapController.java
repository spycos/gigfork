package gigfork.controllers;


import org.springframework.oxm.jaxb.Jaxb2Marshaller;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;


@Controller
public class SitemapController {
	
	
	@RequestMapping(value="/sitemap", method=RequestMethod.GET)
	public String sitemap() {
		
		Jaxb2Marshaller m = new Jaxb2Marshaller();
		
		

		return null;
	}

}
