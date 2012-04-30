package gigfork.services;

import java.util.List;

public interface SitemapService {

	List<String> getSiteUrls(String[] controllersPackages);

}