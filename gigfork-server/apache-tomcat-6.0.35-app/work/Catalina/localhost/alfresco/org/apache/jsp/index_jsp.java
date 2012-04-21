package org.apache.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import javax.faces.context.FacesContext;
import javax.transaction.UserTransaction;
import org.springframework.web.context.WebApplicationContext;
import org.springframework.web.context.support.WebApplicationContextUtils;
import org.alfresco.service.transaction.TransactionService;
import org.alfresco.service.cmr.security.PermissionService;
import org.alfresco.service.cmr.security.AuthenticationService;
import org.alfresco.service.cmr.security.PersonService;
import org.alfresco.service.cmr.security.PermissionService;
import org.alfresco.service.cmr.repository.NodeRef;
import org.alfresco.repo.security.authentication.AuthenticationException;
import org.springframework.extensions.config.ConfigService;
import org.alfresco.web.app.servlet.AuthenticationHelper;
import org.alfresco.web.app.servlet.FacesHelper;
import org.alfresco.web.bean.NavigationBean;
import org.alfresco.web.bean.repository.User;
import org.alfresco.web.bean.repository.PreferencesService;
import org.alfresco.web.config.ClientConfigElement;

public final class index_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.AnnotationProcessor _jsp_annotationprocessor;

  public Object getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
  }

  public void _jspService(HttpServletRequest request, HttpServletResponse response)
        throws java.io.IOException, ServletException {

    PageContext pageContext = null;
    HttpSession session = null;
    ServletContext application = null;
    ServletConfig config = null;
    JspWriter out = null;
    Object page = this;
    JspWriter _jspx_out = null;
    PageContext _jspx_page_context = null;


    try {
      response.setContentType("text/html");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 8192, true);
      _jspx_page_context = pageContext;
      application = pageContext.getServletContext();
      config = pageContext.getServletConfig();
      session = pageContext.getSession();
      out = pageContext.getOut();
      _jspx_out = out;

      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');

// get the start location as configured by the web-client config
WebApplicationContext context = WebApplicationContextUtils.getRequiredWebApplicationContext(session.getServletContext());
ConfigService configService = (ConfigService)context.getBean("webClientConfigService");
ClientConfigElement configElement = (ClientConfigElement)configService.getGlobalConfig().getConfigElement("client");
String location = configElement.getInitialLocation();

AuthenticationService authService = (AuthenticationService)context.getBean("AuthenticationService");

// override with the users preference if they have one
User user = (User)session.getAttribute(AuthenticationHelper.AUTHENTICATION_USER);
if (user != null)
{
UserTransaction tx = ((TransactionService)context.getBean("TransactionService")).getUserTransaction();;
tx.begin();
try
{
authService.validate(user.getTicket());

// ensure construction of the FacesContext before attemping a service call
FacesContext fc = FacesHelper.getFacesContext(request, response, application);
String preference = (String)PreferencesService.getPreferences(fc).getValue("start-location");
if (preference != null)
{
location = preference;
}

tx.commit();
}
catch (AuthenticationException authErr)
{
try { tx.rollback(); } catch (Throwable tex) {}

// expired ticket
AuthenticationService unpAuth = (AuthenticationService)context.getBean("authenticationService");
unpAuth.invalidateTicket(unpAuth.getCurrentTicket());
unpAuth.clearCurrentSecurityContext();
}
catch (Throwable e)
{
try { tx.rollback(); } catch (Throwable tex) {}
}
}
else
{
UserTransaction tx = ((TransactionService)context.getBean("TransactionService")).getUserTransaction();;
tx.begin();
try
{
authService.authenticateAsGuest();
PersonService personService = (PersonService)context.getBean("personService");
NodeRef guestRef = personService.getPerson(PermissionService.GUEST_AUTHORITY);
user = new User(authService.getCurrentUserName(), authService.getCurrentTicket(), guestRef);
session.setAttribute(AuthenticationHelper.AUTHENTICATION_USER, user);

// ensure construction of the FacesContext before attemping a service call
FacesContext fc = FacesHelper.getFacesContext(request, response, application);
String preference = (String)PreferencesService.getPreferences(session).getValue("start-location");
if (preference != null)
{
location = preference;
}
session.removeAttribute(AuthenticationHelper.AUTHENTICATION_USER);

tx.commit();
}
catch (Throwable e)
{
try { tx.rollback(); } catch (Throwable tex) {}
}
}

if (request.getMethod().equalsIgnoreCase("GET"))
{
if (NavigationBean.LOCATION_MYALFRESCO.equals(location))
{
// Clear previous location - Fixes the issue ADB-61
FacesContext fc = FacesHelper.getFacesContext(request, response, application);
if (fc != null)
{
NavigationBean navigationBean = (NavigationBean)FacesHelper.getManagedBean(fc, "NavigationBean");
if (navigationBean != null)
{
navigationBean.setLocation(null);
navigationBean.setToolbarLocation(null);
}
}
// Send redirect
response.sendRedirect(request.getContextPath() + "/faces/jsp/dashboards/container.jsp");
}
else
{
response.sendRedirect(request.getContextPath() + "/faces/jsp/browse/browse.jsp");
}
}
// route WebDAV requests
else if (request.getMethod().equalsIgnoreCase("PROPFIND") ||
request.getMethod().equalsIgnoreCase("OPTIONS"))
{
response.sendRedirect(request.getContextPath() + "/webdav/");
}

      out.write('\r');
      out.write('\n');
    } catch (Throwable t) {
      if (!(t instanceof SkipPageException)){
        out = _jspx_out;
        if (out != null && out.getBufferSize() != 0)
          try { out.clearBuffer(); } catch (java.io.IOException e) {}
        if (_jspx_page_context != null) _jspx_page_context.handlePageException(t);
      }
    } finally {
      _jspxFactory.releasePageContext(_jspx_page_context);
    }
  }
}
