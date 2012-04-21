package org.apache.jsp.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.app.servlet.BaseServlet;
import org.alfresco.web.app.servlet.AuthenticationHelper;
import org.alfresco.web.ui.common.PanelGenerator;
import org.alfresco.web.ui.common.Utils;
import org.alfresco.web.app.Application;
import org.alfresco.web.bean.LoginBean;
import org.springframework.extensions.surf.util.I18NUtil;
import javax.faces.context.FacesContext;
import javax.servlet.http.Cookie;
import java.util.Locale;

public final class login_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(2);
    _jspx_dependants.add("/WEB-INF/alfresco.tld");
    _jspx_dependants.add("/WEB-INF/repo.tld");
  }

  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fview;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.AnnotationProcessor _jsp_annotationprocessor;

  public Object getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fview = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
    _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.release();
    _005fjspx_005ftagPool_005ff_005fview.release();
    _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.release();
    _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid.release();
    _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody.release();
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
      response.setContentType("text/html;charset=UTF-8");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 16384, true);
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

Cookie authCookie = AuthenticationHelper.getAuthCookie(request);

// remove the username cookie value if explicit logout was requested by the user
if (session.getAttribute(AuthenticationHelper.SESSION_INVALIDATED) != null)
{
if (authCookie != null)
{
authCookie.setMaxAge(0);
response.addCookie(authCookie);
}
}
else
{
// setup value used by JSF bean state ready for login page if we find the cookie
String authCookieValue;
if (authCookie != null && (authCookieValue = AuthenticationHelper.getAuthCookieValue(authCookie)) != null)
{
session.setAttribute(AuthenticationHelper.SESSION_USERNAME, authCookieValue);
}
}


      out.write("\r\n");
      out.write("\r\n");
      out.write("<body bgcolor=\"#ffffff\" style=\"background-image: url(");
      out.print(request.getContextPath());
      out.write("/images/logo/AlfrescoFadedBG.png); background-repeat: no-repeat; background-attachment: fixed\">\r\n");
      out.write("\r\n");
      //  r:page
      org.alfresco.web.ui.repo.tag.PageTag _jspx_th_r_005fpage_005f0 = (org.alfresco.web.ui.repo.tag.PageTag) _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.get(org.alfresco.web.ui.repo.tag.PageTag.class);
      _jspx_th_r_005fpage_005f0.setPageContext(_jspx_page_context);
      _jspx_th_r_005fpage_005f0.setParent(null);
      // /jsp/login.jsp(65,0) name = titleId type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_r_005fpage_005f0.setTitleId("title_login");
      int _jspx_eval_r_005fpage_005f0 = _jspx_th_r_005fpage_005f0.doStartTag();
      if (_jspx_eval_r_005fpage_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
        do {
          out.write("\r\n");
          out.write("\r\n");
          //  f:view
          org.apache.myfaces.taglib.core.ViewTag _jspx_th_f_005fview_005f0 = (org.apache.myfaces.taglib.core.ViewTag) _005fjspx_005ftagPool_005ff_005fview.get(org.apache.myfaces.taglib.core.ViewTag.class);
          _jspx_th_f_005fview_005f0.setPageContext(_jspx_page_context);
          _jspx_th_f_005fview_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fpage_005f0);
          int _jspx_eval_f_005fview_005f0 = _jspx_th_f_005fview_005f0.doStartTag();
          if (_jspx_eval_f_005fview_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            if (_jspx_eval_f_005fview_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
              out = _jspx_page_context.pushBody();
              _jspx_th_f_005fview_005f0.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
              _jspx_th_f_005fview_005f0.doInitBody();
            }
            do {
              out.write('\r');
              out.write('\n');

FacesContext fc = FacesContext.getCurrentInstance();

// set locale for JSF framework usage (passed on by Localization Filter)
fc.getViewRoot().setLocale(I18NUtil.getLocale());

// set permissions error if applicable
if (session.getAttribute(LoginBean.LOGIN_NOPERMISSIONS) != null)
{
Utils.addErrorMessage(Application.getMessage(fc, LoginBean.MSG_ERROR_LOGIN_NOPERMISSIONS));
session.setAttribute(LoginBean.LOGIN_NOPERMISSIONS, null);
}

              out.write("\r\n");
              out.write("\r\n");
              out.write('\r');
              out.write('\n');
              if (_jspx_meth_r_005floadBundle_005f0(_jspx_th_f_005fview_005f0, _jspx_page_context))
                return;
              out.write("\r\n");
              out.write("\r\n");
              out.write("<script type=\"text/javascript\" src=\"");
              out.print(request.getContextPath());
              out.write("/scripts/validation.js\"> </script>\r\n");
              out.write("\r\n");
              //  h:form
              org.apache.myfaces.taglib.html.HtmlFormTag _jspx_th_h_005fform_005f0 = (org.apache.myfaces.taglib.html.HtmlFormTag) _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.get(org.apache.myfaces.taglib.html.HtmlFormTag.class);
              _jspx_th_h_005fform_005f0.setPageContext(_jspx_page_context);
              _jspx_th_h_005fform_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005fview_005f0);
              // /jsp/login.jsp(87,0) name = acceptcharset type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setAcceptcharset("UTF-8");
              // /jsp/login.jsp(87,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setId("loginForm");
              int _jspx_eval_h_005fform_005f0 = _jspx_th_h_005fform_005f0.doStartTag();
              if (_jspx_eval_h_005fform_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005finputHidden_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write("<table width=100% height=98% align=center>\r\n");
                out.write("<tr width=100% align=center>\r\n");
                out.write("<td valign=middle align=center width=100%>\r\n");
                out.write("\r\n");
                out.write("<table cellspacing=0 cellpadding=0 border=0>\r\n");
                out.write("<tr><td width=7><img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_01.gif' width=7 height=7 alt=''></td>\r\n");
                out.write("<td background='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_02.gif'>\r\n");
                out.write("<img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_02.gif' width=7 height=7 alt=''></td>\r\n");
                out.write("<td width=7><img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_03.gif' width=7 height=7 alt=''></td>\r\n");
                out.write("</tr>\r\n");
                out.write("<tr><td background='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_04.gif'>\r\n");
                out.write("<img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_04.gif' width=7 height=7 alt=''></td><td bgcolor='white'>\r\n");
                out.write("\r\n");
                out.write("<table border=0 cellspacing=4 cellpadding=2>\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=2>\r\n");
                out.write("<img src='");
                out.print(request.getContextPath());
                out.write("/images/logo/AlfrescoLogo200.png' width=200 height=58 alt=\"Alfresco\" title=\"Alfresco\">\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005foutputText_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=2>\r\n");
                out.write("<span class='mainSubTitle'>");
                if (_jspx_meth_h_005foutputText_005f1(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write(":</span>\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td>\r\n");
                if (_jspx_meth_h_005foutputText_005f2(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write(":\r\n");
                out.write("</td>\r\n");
                out.write("<td>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005finputText_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td>\r\n");
                if (_jspx_meth_h_005foutputText_005f3(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write(":\r\n");
                out.write("</td>\r\n");
                out.write("<td>\r\n");
                out.write('\r');
                out.write('\n');
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005finputSecret_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td>\r\n");
                if (_jspx_meth_h_005foutputText_005f4(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005fselectOneMenu_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=2 align=right>\r\n");
                if (_jspx_meth_h_005fcommandButton_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=2>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005fmessages_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
                out.write("</td><td background='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_06.gif'>\r\n");
                out.write("<img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_06.gif' width=7 height=7 alt=''></td></tr>\r\n");
                out.write("<tr><td width=7><img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_07.gif' width=7 height=7 alt=''></td>\r\n");
                out.write("<td background='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_08.gif'>\r\n");
                out.write("<img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_08.gif' width=7 height=7 alt=''></td>\r\n");
                out.write("<td width=7><img src='");
                out.print(request.getContextPath());
                out.write("/images/parts/white_09.gif' width=7 height=7 alt=''></td></tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
                out.write("<div id=\"no-cookies\" style=\"display:none\">\r\n");
                out.write("<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\" style=\"padding-top:16px;\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td>\r\n");
 PanelGenerator.generatePanelStart(out, request.getContextPath(), "yellowInner", "#ffffcc"); 
                out.write("\r\n");
                out.write("<table cellpadding=\"0\" cellspacing=\"0\" border=\"0\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td valign=top style=\"padding-top:2px\" width=20>");
                if (_jspx_meth_h_005fgraphicImage_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</td>\r\n");
                out.write("<td class=\"mainSubText\">\r\n");
                if (_jspx_meth_h_005foutputText_005f5(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
 PanelGenerator.generatePanelEnd(out, request.getContextPath(), "yellowInner"); 
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("</div>\r\n");
                out.write("<script>\r\n");
                out.write("document.cookie=\"_alfTest=_alfTest\"\r\n");
                out.write("var cookieEnabled = (document.cookie.indexOf(\"_alfTest\") != -1);\r\n");
                out.write("if (cookieEnabled == false)\r\n");
                out.write("{\r\n");
                out.write("document.getElementById(\"no-cookies\").style.display = 'inline';\r\n");
                out.write("}\r\n");
                out.write("</script>\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
              }
              if (_jspx_th_h_005fform_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.reuse(_jspx_th_h_005fform_005f0);
                return;
              }
              _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.reuse(_jspx_th_h_005fform_005f0);
              out.write('\r');
              out.write('\n');
              int evalDoAfterBody = _jspx_th_f_005fview_005f0.doAfterBody();
              if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
                break;
            } while (true);
            if (_jspx_eval_f_005fview_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
              out = _jspx_page_context.popBody();
            }
          }
          if (_jspx_th_f_005fview_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005ff_005fview.reuse(_jspx_th_f_005fview_005f0);
            return;
          }
          _005fjspx_005ftagPool_005ff_005fview.reuse(_jspx_th_f_005fview_005f0);
          out.write("\r\n");
          out.write("\r\n");
          out.write("<script>\r\n");
          out.write("\r\n");
          out.write("function validate()\r\n");
          out.write("{\r\n");
          out.write("return validateUserNameForLogin(document.getElementById(\"loginForm:user-name\"), null, false);\r\n");
          out.write("}\r\n");
          out.write("\r\n");
          out.write("function updateButtonState()\r\n");
          out.write("{\r\n");
          out.write("document.getElementById(\"loginForm:submit\").disabled = !validate();\r\n");
          out.write("}\r\n");
          out.write("\r\n");
          out.write("document.getElementById(\"loginForm\").onsubmit = validate;\r\n");
          out.write("if (document.getElementById(\"loginForm:user-name\").value.length == 0)\r\n");
          out.write("{\r\n");
          out.write("document.getElementById(\"loginForm:user-name\").focus();\r\n");
          out.write("}\r\n");
          out.write("else\r\n");
          out.write("{\r\n");
          out.write("document.getElementById(\"loginForm:user-password\").focus();\r\n");
          out.write("}\r\n");
          out.write("updateButtonState();\r\n");
          out.write("\r\n");
          out.write("</script>\r\n");
          out.write("\r\n");
          int evalDoAfterBody = _jspx_th_r_005fpage_005f0.doAfterBody();
          if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
            break;
        } while (true);
      }
      if (_jspx_th_r_005fpage_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
        _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.reuse(_jspx_th_r_005fpage_005f0);
        return;
      }
      _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.reuse(_jspx_th_r_005fpage_005f0);
      out.write("\r\n");
      out.write("\r\n");
      out.write("</body>\r\n");
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

  private boolean _jspx_meth_r_005floadBundle_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005fview_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:loadBundle
    org.alfresco.web.ui.repo.tag.LoadBundleTag _jspx_th_r_005floadBundle_005f0 = (org.alfresco.web.ui.repo.tag.LoadBundleTag) _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.get(org.alfresco.web.ui.repo.tag.LoadBundleTag.class);
    _jspx_th_r_005floadBundle_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005floadBundle_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005fview_005f0);
    // /jsp/login.jsp(83,0) name = var type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005floadBundle_005f0.setVar("msg");
    int _jspx_eval_r_005floadBundle_005f0 = _jspx_th_r_005floadBundle_005f0.doStartTag();
    if (_jspx_th_r_005floadBundle_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.reuse(_jspx_th_r_005floadBundle_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.reuse(_jspx_th_r_005floadBundle_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005finputHidden_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:inputHidden
    org.apache.myfaces.taglib.html.HtmlInputHiddenTag _jspx_th_h_005finputHidden_005f0 = (org.apache.myfaces.taglib.html.HtmlInputHiddenTag) _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlInputHiddenTag.class);
    _jspx_th_h_005finputHidden_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005finputHidden_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(90,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputHidden_005f0.setValue("#{LoginOutcomeBean.redirectURL}");
    // /jsp/login.jsp(90,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputHidden_005f0.setId("redirectURL");
    int _jspx_eval_h_005finputHidden_005f0 = _jspx_th_h_005finputHidden_005f0.doStartTag();
    if (_jspx_th_h_005finputHidden_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005finputHidden_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005finputHidden_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005finputHidden_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f0 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(113,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setId("team-login-warning");
    // /jsp/login.jsp(113,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setRendered("#{NavigationBean.teamMode}");
    // /jsp/login.jsp(113,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setValue("#{LoginBean.teamLoginWarningHTML}");
    // /jsp/login.jsp(113,0) name = escape type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setEscape("false");
    int _jspx_eval_h_005foutputText_005f0 = _jspx_th_h_005foutputText_005f0.doStartTag();
    if (_jspx_th_h_005foutputText_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f1 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(117,27) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f1.setValue("#{msg.login_details}");
    int _jspx_eval_h_005foutputText_005f1 = _jspx_th_h_005foutputText_005f1.doStartTag();
    if (_jspx_th_h_005foutputText_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f2 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(123,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setValue("#{msg.username}");
    int _jspx_eval_h_005foutputText_005f2 = _jspx_th_h_005foutputText_005f2.doStartTag();
    if (_jspx_th_h_005foutputText_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005finputText_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:inputText
    org.apache.myfaces.taglib.html.HtmlInputTextTag _jspx_th_h_005finputText_005f0 = (org.apache.myfaces.taglib.html.HtmlInputTextTag) _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlInputTextTag.class);
    _jspx_th_h_005finputText_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005finputText_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(127,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setId("user-name");
    // /jsp/login.jsp(127,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setValue("#{LoginBean.username}");
    // /jsp/login.jsp(127,0) name = validator type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setValidator("#{LoginBean.validateUsername}");
    // /jsp/login.jsp(127,0) name = onkeyup type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setOnkeyup("updateButtonState();");
    // /jsp/login.jsp(127,0) name = onchange type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setOnchange("updateButtonState();");
    // /jsp/login.jsp(127,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setStyle("width:150px");
    int _jspx_eval_h_005finputText_005f0 = _jspx_th_h_005finputText_005f0.doStartTag();
    if (_jspx_th_h_005finputText_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fvalidator_005fstyle_005fonkeyup_005fonchange_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f3 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(133,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setValue("#{msg.password}");
    int _jspx_eval_h_005foutputText_005f3 = _jspx_th_h_005foutputText_005f3.doStartTag();
    if (_jspx_th_h_005foutputText_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005finputSecret_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:inputSecret
    org.apache.myfaces.taglib.html.HtmlInputSecretTag _jspx_th_h_005finputSecret_005f0 = (org.apache.myfaces.taglib.html.HtmlInputSecretTag) _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlInputSecretTag.class);
    _jspx_th_h_005finputSecret_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005finputSecret_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(138,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputSecret_005f0.setId("user-password");
    // /jsp/login.jsp(138,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputSecret_005f0.setValue("#{LoginBean.password}");
    // /jsp/login.jsp(138,0) name = validator type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputSecret_005f0.setValidator("#{LoginBean.validatePassword}");
    // /jsp/login.jsp(138,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputSecret_005f0.setStyle("width:150px");
    int _jspx_eval_h_005finputSecret_005f0 = _jspx_th_h_005finputSecret_005f0.doStartTag();
    if (_jspx_th_h_005finputSecret_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005finputSecret_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005finputSecret_0026_005fvalue_005fvalidator_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005finputSecret_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f4 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(144,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setValue("#{msg.language}:");
    // /jsp/login.jsp(144,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setRendered("#{LoginBean.languageSelect}");
    int _jspx_eval_h_005foutputText_005f4 = _jspx_th_h_005foutputText_005f4.doStartTag();
    if (_jspx_th_h_005foutputText_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fselectOneMenu_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:selectOneMenu
    org.apache.myfaces.taglib.html.HtmlSelectOneMenuTag _jspx_th_h_005fselectOneMenu_005f0 = (org.apache.myfaces.taglib.html.HtmlSelectOneMenuTag) _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid.get(org.apache.myfaces.taglib.html.HtmlSelectOneMenuTag.class);
    _jspx_th_h_005fselectOneMenu_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fselectOneMenu_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(148,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fselectOneMenu_005f0.setId("language");
    // /jsp/login.jsp(148,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fselectOneMenu_005f0.setValue("#{UserPreferencesBean.language}");
    // /jsp/login.jsp(148,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fselectOneMenu_005f0.setStyle("width:150px");
    // /jsp/login.jsp(148,0) name = onchange type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fselectOneMenu_005f0.setOnchange("document.forms['loginForm'].submit(); return true;");
    // /jsp/login.jsp(148,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fselectOneMenu_005f0.setRendered("#{LoginBean.languageSelect}");
    int _jspx_eval_h_005fselectOneMenu_005f0 = _jspx_th_h_005fselectOneMenu_005f0.doStartTag();
    if (_jspx_eval_h_005fselectOneMenu_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fselectItems_005f0(_jspx_th_h_005fselectOneMenu_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005fselectOneMenu_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid.reuse(_jspx_th_h_005fselectOneMenu_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fselectOneMenu_0026_005fvalue_005fstyle_005frendered_005fonchange_005fid.reuse(_jspx_th_h_005fselectOneMenu_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005fselectItems_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fselectOneMenu_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:selectItems
    org.apache.myfaces.taglib.core.SelectItemsTag _jspx_th_f_005fselectItems_005f0 = (org.apache.myfaces.taglib.core.SelectItemsTag) _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.core.SelectItemsTag.class);
    _jspx_th_f_005fselectItems_005f0.setPageContext(_jspx_page_context);
    _jspx_th_f_005fselectItems_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fselectOneMenu_005f0);
    // /jsp/login.jsp(149,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fselectItems_005f0.setValue("#{UserPreferencesBean.languages}");
    int _jspx_eval_f_005fselectItems_005f0 = _jspx_th_f_005fselectItems_005f0.doStartTag();
    if (_jspx_th_f_005fselectItems_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody.reuse(_jspx_th_f_005fselectItems_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fselectItems_0026_005fvalue_005fnobody.reuse(_jspx_th_f_005fselectItems_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fcommandButton_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:commandButton
    org.apache.myfaces.taglib.html.HtmlCommandButtonTag _jspx_th_h_005fcommandButton_005f0 = (org.apache.myfaces.taglib.html.HtmlCommandButtonTag) _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody.get(org.apache.myfaces.taglib.html.HtmlCommandButtonTag.class);
    _jspx_th_h_005fcommandButton_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fcommandButton_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(156,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fcommandButton_005f0.setId("submit");
    // /jsp/login.jsp(156,0) name = action type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fcommandButton_005f0.setAction("#{LoginBean.login}");
    // /jsp/login.jsp(156,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fcommandButton_005f0.setValue("#{msg.login}");
    int _jspx_eval_h_005fcommandButton_005f0 = _jspx_th_h_005fcommandButton_005f0.doStartTag();
    if (_jspx_th_h_005fcommandButton_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody.reuse(_jspx_th_h_005fcommandButton_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fcommandButton_0026_005fvalue_005fid_005faction_005fnobody.reuse(_jspx_th_h_005fcommandButton_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fmessages_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:messages
    org.apache.myfaces.taglib.html.HtmlMessagesTag _jspx_th_h_005fmessages_005f0 = (org.apache.myfaces.taglib.html.HtmlMessagesTag) _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody.get(org.apache.myfaces.taglib.html.HtmlMessagesTag.class);
    _jspx_th_h_005fmessages_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fmessages_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(163,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fmessages_005f0.setStyle("padding-top:8px; color:red; font-size:10px");
    // /jsp/login.jsp(163,0) name = layout type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fmessages_005f0.setLayout("table");
    int _jspx_eval_h_005fmessages_005f0 = _jspx_th_h_005fmessages_005f0.doStartTag();
    if (_jspx_th_h_005fmessages_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody.reuse(_jspx_th_h_005fmessages_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fmessages_0026_005fstyle_005flayout_005fnobody.reuse(_jspx_th_h_005fmessages_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f0 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(183,48) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setUrl("/images/icons/info_icon.gif");
    // /jsp/login.jsp(183,48) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setWidth("16");
    // /jsp/login.jsp(183,48) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f0 = _jspx_th_h_005fgraphicImage_005f0.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f5 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/login.jsp(185,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setValue("#{msg.no_cookies}");
    int _jspx_eval_h_005foutputText_005f5 = _jspx_th_h_005foutputText_005f5.doStartTag();
    if (_jspx_th_h_005foutputText_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
    return false;
  }
}
