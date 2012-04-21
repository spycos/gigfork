package org.apache.jsp.jsp.dashboards;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.app.Application;
import org.alfresco.web.ui.common.PanelGenerator;
import javax.faces.context.FacesContext;
import org.alfresco.web.app.Application;

public final class container_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(5);
    _jspx_dependants.add("/jsp/dashboards/../parts/titlebar.jsp");
    _jspx_dependants.add("/jsp/dashboards/../parts/shelf.jsp");
    _jspx_dependants.add("/jsp/dashboards/../parts/breadcrumb.jsp");
    _jspx_dependants.add("/WEB-INF/alfresco.tld");
    _jspx_dependants.add("/WEB-INF/repo.tld");
  }

  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fview;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody;

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
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
    _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.release();
    _005fjspx_005ftagPool_005ff_005fview.release();
    _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener.release();
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.release();
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin.release();
    _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.release();
    _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody.release();
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
      			null, true, 32768, true);
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
      //  r:page
      org.alfresco.web.ui.repo.tag.PageTag _jspx_th_r_005fpage_005f0 = (org.alfresco.web.ui.repo.tag.PageTag) _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.get(org.alfresco.web.ui.repo.tag.PageTag.class);
      _jspx_th_r_005fpage_005f0.setPageContext(_jspx_page_context);
      _jspx_th_r_005fpage_005f0.setParent(null);
      // /jsp/dashboards/container.jsp(31,0) name = titleId type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_r_005fpage_005f0.setTitleId("title_my_alfresco");
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

// set locale for JSF framework usage
fc.getViewRoot().setLocale(Application.getLanguage(fc));

              out.write("\r\n");
              out.write("\r\n");
              out.write('\r');
              out.write('\n');
              if (_jspx_meth_r_005floadBundle_005f0(_jspx_th_f_005fview_005f0, _jspx_page_context))
                return;
              out.write("\r\n");
              out.write("\r\n");
              //  h:form
              org.apache.myfaces.taglib.html.HtmlFormTag _jspx_th_h_005fform_005f0 = (org.apache.myfaces.taglib.html.HtmlFormTag) _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.get(org.apache.myfaces.taglib.html.HtmlFormTag.class);
              _jspx_th_h_005fform_005f0.setPageContext(_jspx_page_context);
              _jspx_th_h_005fform_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005fview_005f0);
              // /jsp/dashboards/container.jsp(44,0) name = acceptcharset type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setAcceptcharset("UTF-8");
              // /jsp/dashboards/container.jsp(44,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setId("dashboard");
              int _jspx_eval_h_005fform_005f0 = _jspx_th_h_005fform_005f0.doStartTag();
              if (_jspx_eval_h_005fform_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                out.write("\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"2\" width=\"100%\">\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=\"2\">\r\n");
                out.write('\r');
                out.write('\n');
                out.write("\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"2\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("\r\n");
                out.write("<td style=\"width:100%;\">\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td style=\"padding-right:4px;\">");
                if (_jspx_meth_a_005factionLink_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/titlebar_begin.gif\" width=\"10\" height=\"31\" alt=\"\"/></td>\r\n");
                out.write("<td style=\"width: 100%; background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/titlebar_bg.gif); background-repeat:repeat-x\">\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fmodeList_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/titlebar_end.gif\" width=\"8\" height=\"31\" alt=\"\"/></td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("</td>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<td>\r\n");
                out.write("<table cellspacing=\"2\" cellpadding=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fbooleanEvaluator_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"width:12px;\">&nbsp;</td>\r\n");
                out.write("<td>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005factionLink_005f2(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"width:8px;\">&nbsp;</td>\r\n");
                out.write("<td>\r\n");
                if (_jspx_meth_a_005factionLink_005f3(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"width:8px;\">&nbsp;</td>\r\n");
                out.write("<td>\r\n");
                if (_jspx_meth_a_005factionLink_005f4(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"width:8px;\">&nbsp;</td>\r\n");
                out.write("<td style=\"white-space:nowrap;\"><a href=\"http://www.alfresco.com/services/support/issues/\" target=\"new\">");
                if (_jspx_meth_h_005foutputText_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</a></td>\r\n");
                out.write("<td style=\"width:8px;\">&nbsp;</td>\r\n");
                out.write("<td style=\"white-space:nowrap;\">\r\n");
                if (_jspx_meth_a_005factionLink_005f5(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005factionLink_005f6(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("</td>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<td>\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/searchbar_begin.gif\" width=\"6\" height=\"31\" alt=\"\"/></td>\r\n");
                out.write("<td style=\"width:100%; background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/searchbar_bg.gif);\">\r\n");
                if (_jspx_meth_r_005fsimpleSearch_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/searchbar_end.gif\" width=\"6\" height=\"31\" alt=\"\"/></td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr valign=\"top\">\r\n");
                out.write("\r\n");
                out.write("<td>\r\n");
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
                //  r:sidebar
                org.alfresco.web.ui.repo.tag.SidebarTag _jspx_th_r_005fsidebar_005f0 = (org.alfresco.web.ui.repo.tag.SidebarTag) _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin.get(org.alfresco.web.ui.repo.tag.SidebarTag.class);
                _jspx_th_r_005fsidebar_005f0.setPageContext(_jspx_page_context);
                _jspx_th_r_005fsidebar_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dashboards/../parts/shelf.jsp(28,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setId("sidebar");
                // /jsp/dashboards/../parts/shelf.jsp(28,0) name = activePlugin type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setActivePlugin("#{SidebarBean.activePlugin}");
                // /jsp/dashboards/../parts/shelf.jsp(28,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setRendered("#{NavigationBean.shelfExpanded}");
                int _jspx_eval_r_005fsidebar_005f0 = _jspx_th_r_005fsidebar_005f0.doStartTag();
                if (_jspx_eval_r_005fsidebar_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("\r\n");
                  //  f:subview
                  org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f0 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
                  _jspx_th_f_005fsubview_005f0.setPageContext(_jspx_page_context);
                  _jspx_th_f_005fsubview_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fsidebar_005f0);
                  // /jsp/dashboards/../parts/shelf.jsp(30,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                  _jspx_th_f_005fsubview_005f0.setId("sidebar-body");
                  int _jspx_eval_f_005fsubview_005f0 = _jspx_th_f_005fsubview_005f0.doStartTag();
                  if (_jspx_eval_f_005fsubview_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                    out.write('\r');
                    out.write('\n');
                    org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getSidebarBean().getActivePluginPage(), out, false);
                    out.write('\r');
                    out.write('\n');
                  }
                  if (_jspx_th_f_005fsubview_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                    _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f0);
                    return;
                  }
                  _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f0);
                  out.write("\r\n");
                  out.write("\r\n");
                }
                if (_jspx_th_r_005fsidebar_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin.reuse(_jspx_th_r_005fsidebar_005f0);
                  return;
                }
                _005fjspx_005ftagPool_005fr_005fsidebar_0026_005frendered_005fid_005factivePlugin.reuse(_jspx_th_r_005fsidebar_005f0);
                out.write('\r');
                out.write('\n');
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<td width=\"");
                if (_jspx_meth_h_005foutputText_005f1(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\">\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"0\" width=\"100%\">\r\n");
                out.write('\r');
                out.write('\n');
                out.write('\r');
                out.write('\n');
                out.write('\r');
                out.write('\n');
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_1.gif\" width=\"4\" height=\"7\" alt=\"\"/></td>\r\n");
                out.write("<td style=\"width:100%; background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_2.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_3.gif\" width=\"4\" height=\"7\" alt=\"\"/></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_4.gif)\"></td>\r\n");
                out.write("<td style=\"background-color: #dfe6ed;\">\r\n");
                out.write("\r\n");
                out.write("<div style=\"padding-left:8px\" class=\"headbarTitle\">\r\n");
                if (_jspx_meth_a_005fbreadcrumb_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</div>\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_6.gif)\"></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_7.gif\" width=\"4\" height=\"10\" alt=\"\"/></td>\r\n");
                out.write("<td style=\"width: 100%; background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_8.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/headbar_9.gif\" width=\"4\" height=\"10\" alt=\"\"/></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_4.gif)\" width=\"4\"></td>\r\n");
                out.write("<td bgcolor=\"#dfe6ed\">\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                out.write("\r\n");
                out.write("<table cellspacing=\"4\" cellpadding=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td width=\"32\">\r\n");
                out.write("<img src=\"");
                out.print(request.getContextPath());
                out.write("/images/icons/dashboard_large.gif\" width=32 height=32>\r\n");
                out.write("</td>\r\n");
                out.write("<td>\r\n");
                out.write("<div class=\"mainTitle\">");
                if (_jspx_meth_h_005foutputText_005f2(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</div>\r\n");
                out.write("<div class=\"mainSubText\">");
                if (_jspx_meth_h_005foutputText_005f3(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</div>\r\n");
                out.write("</td>\r\n");
                out.write("<td align=\"right\">\r\n");
                if (_jspx_meth_a_005factionLink_005f7(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_6.gif)\" width=\"4\"></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_7.gif\" width=\"4\" height=\"9\"></td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_8.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_9.gif\" width=\"4\" height=\"9\"></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr valign=top>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_4.gif)\" width=\"4\"></td>\r\n");
                out.write("<td>\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"2\" border=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td width=\"100%\" valign=\"top\">\r\n");
                //  f:subview
                org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f1 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
                _jspx_th_f_005fsubview_005f1.setPageContext(_jspx_page_context);
                _jspx_th_f_005fsubview_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dashboards/container.jsp(109,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_f_005fsubview_005f1.setId("dash-body");
                int _jspx_eval_f_005fsubview_005f1 = _jspx_th_f_005fsubview_005f1.doStartTag();
                if (_jspx_eval_f_005fsubview_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write('\r');
                  out.write('\n');
                  org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getLayoutPage(), out, false);
                  out.write('\r');
                  out.write('\n');
                }
                if (_jspx_th_f_005fsubview_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f1);
                  return;
                }
                _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f1);
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005ferrors_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_6.gif)\" width=\"4\"></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_7.gif\" width=\"4\" height=\"4\"></td>\r\n");
                out.write("<td width=\"100%\" align=\"center\" style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_8.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_9.gif\" width=\"4\" height=\"4\"></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("</table>\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
              }
              if (_jspx_th_h_005fform_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.reuse(_jspx_th_h_005fform_005f0);
                return;
              }
              _005fjspx_005ftagPool_005fh_005fform_0026_005fid_005facceptcharset.reuse(_jspx_th_h_005fform_005f0);
              out.write("\r\n");
              out.write("\r\n");
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

  private boolean _jspx_meth_r_005floadBundle_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005fview_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:loadBundle
    org.alfresco.web.ui.repo.tag.LoadBundleTag _jspx_th_r_005floadBundle_005f0 = (org.alfresco.web.ui.repo.tag.LoadBundleTag) _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.get(org.alfresco.web.ui.repo.tag.LoadBundleTag.class);
    _jspx_th_r_005floadBundle_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005floadBundle_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005fview_005f0);
    // /jsp/dashboards/container.jsp(42,0) name = var type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005floadBundle_005f0.setVar("msg");
    int _jspx_eval_r_005floadBundle_005f0 = _jspx_th_r_005floadBundle_005f0.doStartTag();
    if (_jspx_th_r_005floadBundle_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.reuse(_jspx_th_r_005floadBundle_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005floadBundle_0026_005fvar_005fnobody.reuse(_jspx_th_r_005floadBundle_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f0 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setId("about_alfresco");
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setImage("/images/logo/AlfrescoLogo32.png");
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setValue("#{msg.title_about}");
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = tooltip type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setTooltip("#{msg.title_about}");
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setShowLink("false");
    // /jsp/dashboards/../parts/titlebar.jsp(26,31) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setAction("dialog:aboutDialog");
    int _jspx_eval_a_005factionLink_005f0 = _jspx_th_a_005factionLink_005f0.doStartTag();
    if (_jspx_th_a_005factionLink_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftooltip_005fshowLink_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fmodeList_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:modeList
    org.alfresco.web.ui.common.tag.ModeListTag _jspx_th_a_005fmodeList_005f0 = (org.alfresco.web.ui.common.tag.ModeListTag) _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener.get(org.alfresco.web.ui.common.tag.ModeListTag.class);
    _jspx_th_a_005fmodeList_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmodeList_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemSpacing("3");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setIconColumnWidth("0");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = horizontal type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setHorizontal("true");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = itemStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemStyleClass("topToolbar");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = itemLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemLinkStyleClass("topToolbarLink");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedStyleClass("topToolbar");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = selectedLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedLinkStyleClass("topToolbarLink");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setValue("#{NavigationBean.toolbarLocation}");
    // /jsp/dashboards/../parts/titlebar.jsp(30,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setActionListener("#{NavigationBean.toolbarLocationChanged}");
    int _jspx_eval_a_005fmodeList_005f0 = _jspx_th_a_005fmodeList_005f0.doStartTag();
    if (_jspx_eval_a_005fmodeList_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f0(_jspx_th_a_005fmodeList_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f1(_jspx_th_a_005fmodeList_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f2(_jspx_th_a_005fmodeList_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f3(_jspx_th_a_005fmodeList_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmodeList_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener.reuse(_jspx_th_a_005fmodeList_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fselectedStyleClass_005fselectedLinkStyleClass_005fitemStyleClass_005fitemSpacing_005fitemLinkStyleClass_005ficonColumnWidth_005fhorizontal_005factionListener.reuse(_jspx_th_a_005fmodeList_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f0 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(39,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setValue("companyhome");
    // /jsp/dashboards/../parts/titlebar.jsp(39,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setLabel("#{msg.company_home}");
    // /jsp/dashboards/../parts/titlebar.jsp(39,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setRendered("#{NavigationBean.companyHomeVisible}");
    int _jspx_eval_a_005flistItem_005f0 = _jspx_th_a_005flistItem_005f0.doStartTag();
    if (_jspx_th_a_005flistItem_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f1 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(40,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f1.setValue("userhome");
    // /jsp/dashboards/../parts/titlebar.jsp(40,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f1.setLabel("#{msg.my_home}");
    int _jspx_eval_a_005flistItem_005f1 = _jspx_th_a_005flistItem_005f1.doStartTag();
    if (_jspx_th_a_005flistItem_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f2 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(41,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setValue("guesthome");
    // /jsp/dashboards/../parts/titlebar.jsp(41,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setLabel("#{msg.guest_home}");
    // /jsp/dashboards/../parts/titlebar.jsp(41,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setRendered("#{!NavigationBean.isGuest && NavigationBean.guestHomeVisible}");
    int _jspx_eval_a_005flistItem_005f2 = _jspx_th_a_005flistItem_005f2.doStartTag();
    if (_jspx_th_a_005flistItem_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005frendered_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f3 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(44,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f3.setValue("myalfresco");
    // /jsp/dashboards/../parts/titlebar.jsp(44,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f3.setLabel("#{msg.my_alfresco}");
    int _jspx_eval_a_005flistItem_005f3 = _jspx_th_a_005flistItem_005f3.doStartTag();
    if (_jspx_th_a_005flistItem_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f0 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(58,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f0.setValue("#{NavigationBean.currentUser.admin}");
    // /jsp/dashboards/../parts/titlebar.jsp(58,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f0.setId("evalA");
    int _jspx_eval_a_005fbooleanEvaluator_005f0 = _jspx_th_a_005fbooleanEvaluator_005f0.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f1(_jspx_th_a_005fbooleanEvaluator_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f1 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(59,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setValue("#{msg.admin_console}");
    // /jsp/dashboards/../parts/titlebar.jsp(59,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setImage("/images/icons/admin_console.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(59,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setShowLink("false");
    // /jsp/dashboards/../parts/titlebar.jsp(59,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setAction("dialog:adminConsole");
    // /jsp/dashboards/../parts/titlebar.jsp(59,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setId("alf_admin_console");
    int _jspx_eval_a_005factionLink_005f1 = _jspx_th_a_005factionLink_005f1.doStartTag();
    if (_jspx_th_a_005factionLink_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f2 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setValue("#{msg.user_console}");
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setImage("/images/icons/user_console.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setShowLink("false");
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setAction("dialog:userConsole");
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setActionListener("#{UsersDialog.setupUserAction}");
    // /jsp/dashboards/../parts/titlebar.jsp(69,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setId("alf_user_console");
    int _jspx_eval_a_005factionLink_005f2 = _jspx_th_a_005factionLink_005f2.doStartTag();
    if (_jspx_eval_a_005factionLink_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f0(_jspx_th_a_005factionLink_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f2);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f0 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f0.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f2);
    // /jsp/dashboards/../parts/titlebar.jsp(75,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f0.setName("id");
    // /jsp/dashboards/../parts/titlebar.jsp(75,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f0.setValue("#{NavigationBean.currentUser.person.id}");
    int _jspx_eval_f_005fparam_005f0 = _jspx_th_f_005fparam_005f0.doStartTag();
    if (_jspx_th_f_005fparam_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f3 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(80,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setId("alf_toggle_shelf");
    // /jsp/dashboards/../parts/titlebar.jsp(80,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setValue("#{msg.toggle_shelf}");
    // /jsp/dashboards/../parts/titlebar.jsp(80,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setImage("/images/icons/shelf.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(80,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setShowLink("false");
    // /jsp/dashboards/../parts/titlebar.jsp(80,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setActionListener("#{NavigationBean.toggleShelf}");
    int _jspx_eval_a_005factionLink_005f3 = _jspx_th_a_005factionLink_005f3.doStartTag();
    if (_jspx_th_a_005factionLink_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f4 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setId("alf_help");
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setValue("#{msg.help}");
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setImage("/images/icons/Help_icon.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setShowLink("false");
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setHref("#{NavigationBean.helpUrl}");
    // /jsp/dashboards/../parts/titlebar.jsp(88,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setTarget("help");
    int _jspx_eval_a_005factionLink_005f4 = _jspx_th_a_005factionLink_005f4.doStartTag();
    if (_jspx_th_a_005factionLink_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f0 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(96,104) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setValue("#{msg.raise_issue}");
    int _jspx_eval_h_005foutputText_005f0 = _jspx_th_h_005foutputText_005f0.doStartTag();
    if (_jspx_th_h_005foutputText_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f5 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setId("logout");
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setImage("/images/icons/logout.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setValue("#{msg.logout} (#{NavigationBean.currentUser.userName})");
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setRendered("#{!NavigationBean.isGuest}");
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setAction("#{LoginBean.logout}");
    // /jsp/dashboards/../parts/titlebar.jsp(99,0) name = immediate type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setImmediate("true");
    int _jspx_eval_a_005factionLink_005f5 = _jspx_th_a_005factionLink_005f5.doStartTag();
    if (_jspx_eval_a_005factionLink_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f1(_jspx_th_a_005factionLink_005f5, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction.reuse(_jspx_th_a_005factionLink_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimmediate_005fimage_005fid_005faction.reuse(_jspx_th_a_005factionLink_005f5);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f1 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f1.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f5);
    // /jsp/dashboards/../parts/titlebar.jsp(100,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f1.setName("outcome");
    // /jsp/dashboards/../parts/titlebar.jsp(100,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f1.setValue("#{LoginBean.logoutOutcome}");
    int _jspx_eval_f_005fparam_005f1 = _jspx_th_f_005fparam_005f1.doStartTag();
    if (_jspx_th_f_005fparam_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f6 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(102,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setId("login");
    // /jsp/dashboards/../parts/titlebar.jsp(102,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setImage("/images/icons/login.gif");
    // /jsp/dashboards/../parts/titlebar.jsp(102,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setValue("#{msg.login} (#{NavigationBean.currentUser.userName})");
    // /jsp/dashboards/../parts/titlebar.jsp(102,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setRendered("#{NavigationBean.isGuest}");
    // /jsp/dashboards/../parts/titlebar.jsp(102,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setAction("#{LoginBean.logout}");
    int _jspx_eval_a_005factionLink_005f6 = _jspx_th_a_005factionLink_005f6.doStartTag();
    if (_jspx_th_a_005factionLink_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f6);
    return false;
  }

  private boolean _jspx_meth_r_005fsimpleSearch_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:simpleSearch
    org.alfresco.web.ui.repo.tag.SimpleSearchTag _jspx_th_r_005fsimpleSearch_005f0 = (org.alfresco.web.ui.repo.tag.SimpleSearchTag) _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.repo.tag.SimpleSearchTag.class);
    _jspx_th_r_005fsimpleSearch_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fsimpleSearch_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/titlebar.jsp(114,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fsimpleSearch_005f0.setId("search");
    // /jsp/dashboards/../parts/titlebar.jsp(114,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fsimpleSearch_005f0.setActionListener("#{BrowseBean.search}");
    int _jspx_eval_r_005fsimpleSearch_005f0 = _jspx_th_r_005fsimpleSearch_005f0.doStartTag();
    if (_jspx_th_r_005fsimpleSearch_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fsimpleSearch_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fsimpleSearch_0026_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fsimpleSearch_005f0);
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
    // /jsp/dashboards/container.jsp(64,11) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f1.setValue("#{NavigationBean.workAreaWidth}");
    int _jspx_eval_h_005foutputText_005f1 = _jspx_th_h_005foutputText_005f1.doStartTag();
    if (_jspx_th_h_005foutputText_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fbreadcrumb_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:breadcrumb
    org.alfresco.web.ui.common.tag.BreadcrumbTag _jspx_th_a_005fbreadcrumb_005f0 = (org.alfresco.web.ui.common.tag.BreadcrumbTag) _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.get(org.alfresco.web.ui.common.tag.BreadcrumbTag.class);
    _jspx_th_a_005fbreadcrumb_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbreadcrumb_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/../parts/breadcrumb.jsp(32,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setValue("#{NavigationBean.location}");
    // /jsp/dashboards/../parts/breadcrumb.jsp(32,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setStyleClass("headbarLink");
    int _jspx_eval_a_005fbreadcrumb_005f0 = _jspx_th_a_005fbreadcrumb_005f0.doStartTag();
    if (_jspx_th_a_005fbreadcrumb_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
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
    // /jsp/dashboards/container.jsp(82,23) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setValue("#{msg.dashboard_info}");
    int _jspx_eval_h_005foutputText_005f2 = _jspx_th_h_005foutputText_005f2.doStartTag();
    if (_jspx_th_h_005foutputText_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
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
    // /jsp/dashboards/container.jsp(83,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setValue("#{msg.dashboard_description}");
    int _jspx_eval_h_005foutputText_005f3 = _jspx_th_h_005foutputText_005f3.doStartTag();
    if (_jspx_th_h_005foutputText_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f7 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/container.jsp(86,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setValue("#{msg.configure}");
    // /jsp/dashboards/container.jsp(86,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setImage("/images/icons/configure_dashboard.gif");
    // /jsp/dashboards/container.jsp(86,0) name = padding type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setPadding("2");
    // /jsp/dashboards/container.jsp(86,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setAction("wizard:configureDashboard");
    // /jsp/dashboards/container.jsp(86,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setRendered("#{NavigationBean.isGuest == false || DashboardWizard.allowGuestConfig}");
    int _jspx_eval_a_005factionLink_005f7 = _jspx_th_a_005factionLink_005f7.doStartTag();
    if (_jspx_th_a_005factionLink_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005frendered_005fpadding_005fimage_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005ferrors_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:errors
    org.alfresco.web.ui.common.tag.ErrorsTag _jspx_th_a_005ferrors_005f0 = (org.alfresco.web.ui.common.tag.ErrorsTag) _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody.get(org.alfresco.web.ui.common.tag.ErrorsTag.class);
    _jspx_th_a_005ferrors_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005ferrors_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dashboards/container.jsp(112,0) name = message type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setMessage("#{msg.error_dashboard}");
    // /jsp/dashboards/container.jsp(112,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setStyleClass("errorMessage");
    int _jspx_eval_a_005ferrors_005f0 = _jspx_th_a_005ferrors_005f0.doStartTag();
    if (_jspx_th_a_005ferrors_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
    return false;
  }
}
