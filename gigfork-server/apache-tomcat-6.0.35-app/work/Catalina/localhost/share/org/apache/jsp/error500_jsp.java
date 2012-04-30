package org.apache.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import java.io.*;
import org.springframework.extensions.webscripts.ui.common.StringUtils;
import org.apache.commons.logging.LogFactory;

public final class error500_jsp extends org.apache.jasper.runtime.HttpJspBase
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
    Throwable exception = org.apache.jasper.runtime.JspRuntimeLibrary.getThrowable(request);
    if (exception != null) {
      response.setStatus(HttpServletResponse.SC_INTERNAL_SERVER_ERROR);
    }
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

      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n");
      out.write("<html xmlns=\"http://www.w3.org/1999/xhtml\">\n");
      out.write("<head>\n");
      out.write("   <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n");
      out.write("   <style type=\"text/css\">\n");
      out.write("body\n");
      out.write("{\n");
      out.write("   font: 13px/1.231 arial,helvetica,clean,sans-serif;\n");
      out.write("   color: #000000;\n");
      out.write("}\n");
      out.write("\n");
      out.write("body,div,p\n");
      out.write("{\n");
      out.write("   margin: 0;\n");
      out.write("   padding: 0;\n");
      out.write("}\n");
      out.write("\n");
      out.write("div\n");
      out.write("{\n");
      out.write("\ttext-align: center;\n");
      out.write("}\n");
      out.write("\n");
      out.write("ul\n");
      out.write("{\n");
      out.write("   text-align: left;\n");
      out.write("}\n");
      out.write("\n");
      out.write("li\n");
      out.write("{\n");
      out.write("   padding: 0.2em;\n");
      out.write("}\n");
      out.write("\n");
      out.write("div.panel\n");
      out.write("{\n");
      out.write("   display: inline-block;\n");
      out.write("}\n");
      out.write("   </style>\n");
      out.write("   <title>Alfresco Share &raquo; System Error</title>\n");
      out.write("</head>\n");
      out.write("<body>\n");
      out.write("   <div>\n");
      out.write("      <br/>\n");
      out.write("      <img src=\"");
      out.write((java.lang.String) org.apache.jasper.runtime.PageContextImpl.proprietaryEvaluate("${pageContext.request.contextPath}", java.lang.String.class, (PageContext)_jspx_page_context, null, false));
      out.write("/themes/default/images/app-logo.png\">\n");
      out.write("      <br/>\n");
      out.write("      <br/>\n");
      out.write("      <p style=\"font-size:150%\">A server error has occured.</p>\n");
      out.write("      <br/>\n");
      out.write("      <p>There are a number of reasons why this could have happened:</p>\n");
      out.write("      <div class=\"panel\">\n");
      out.write("         <ul>\n");
      out.write("            <li>You have attempted to access a page that does not exist - check the URL in the address bar.</li>\n");
      out.write("            <li>You have attempted to access a page that is not accessable to you, such as a private Site dashboard.</li>\n");
      out.write("            <li>A valid page has been requested but the server was unable to render it due to an internal error - contact your administrator.</li>\n");
      out.write("         <ul>\n");
      out.write("      </div>\n");
      out.write("      <br/>\n");
      out.write("      <a href=\"");
      out.write((java.lang.String) org.apache.jasper.runtime.PageContextImpl.proprietaryEvaluate("${pageContext.request.contextPath}", java.lang.String.class, (PageContext)_jspx_page_context, null, false));
      out.write("\">Return to your dashboard page</a>\n");
      out.write("      <br/>\n");
      out.write("      <br/>\n");
      out.write("      <br/>\n");
      out.write("      <a href=\"http://www.alfresco.com\">Alfresco Software</a> Inc. &copy; 2005-2012 All rights reserved.\n");
      out.write("   </div>\n");
      out.write("   <div>\n");

out.println("<!--");
StringWriter sw = new StringWriter();
PrintWriter pw = new PrintWriter(sw);
exception.printStackTrace(pw);
out.print(StringUtils.encode(sw.toString()));
sw.close();
pw.close();
out.println("-->");
LogFactory.getLog("org.alfresco.web.site").error(exception, exception.getCause());

      out.write("\n");
      out.write("   </div>\n");
      out.write("</div>\n");
      out.write("</body>\n");
      out.write("</html>");
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
