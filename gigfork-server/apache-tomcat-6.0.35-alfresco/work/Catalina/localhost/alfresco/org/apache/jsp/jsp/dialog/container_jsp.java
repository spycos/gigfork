package org.apache.jsp.jsp.dialog;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.app.Application;
import org.alfresco.web.ui.common.PanelGenerator;
import org.alfresco.web.app.Application;

public final class container_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(5);
    _jspx_dependants.add("/jsp/dialog/../parts/titlebar.jsp");
    _jspx_dependants.add("/jsp/dialog/../parts/shelf.jsp");
    _jspx_dependants.add("/jsp/dialog/../parts/breadcrumb.jsp");
    _jspx_dependants.add("/WEB-INF/alfresco.tld");
    _jspx_dependants.add("/WEB-INF/repo.tld");
  }

  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle;
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
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.AnnotationProcessor _jsp_annotationprocessor;

  public Object getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
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
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
    _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle.release();
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
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.release();
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.release();
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.release();
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.release();
    _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.release();
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody.release();
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

if (Application.getDialogManager().getState() == null)
{
response.sendRedirect(request.getContextPath() + "/faces/jsp/dashboards/container.jsp");
return;
}

      out.write("\r\n");
      out.write("\r\n");
      //  r:page
      org.alfresco.web.ui.repo.tag.PageTag _jspx_th_r_005fpage_005f0 = (org.alfresco.web.ui.repo.tag.PageTag) _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle.get(org.alfresco.web.ui.repo.tag.PageTag.class);
      _jspx_th_r_005fpage_005f0.setPageContext(_jspx_page_context);
      _jspx_th_r_005fpage_005f0.setParent(null);
      // /jsp/dialog/container.jsp(38,0) name = title type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_r_005fpage_005f0.setTitle(Application.getDialogManager().getTitle() );
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
              // /jsp/dialog/container.jsp(45,0) name = acceptcharset type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setAcceptcharset("UTF-8");
              // /jsp/dialog/container.jsp(45,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setId("dialog");
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
                // /jsp/dialog/../parts/shelf.jsp(28,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setId("sidebar");
                // /jsp/dialog/../parts/shelf.jsp(28,0) name = activePlugin type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setActivePlugin("#{SidebarBean.activePlugin}");
                // /jsp/dialog/../parts/shelf.jsp(28,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setRendered("#{NavigationBean.shelfExpanded}");
                int _jspx_eval_r_005fsidebar_005f0 = _jspx_th_r_005fsidebar_005f0.doStartTag();
                if (_jspx_eval_r_005fsidebar_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("\r\n");
                  //  f:subview
                  org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f0 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
                  _jspx_th_f_005fsubview_005f0.setPageContext(_jspx_page_context);
                  _jspx_th_f_005fsubview_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fsidebar_005f0);
                  // /jsp/dialog/../parts/shelf.jsp(30,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
                if (_jspx_meth_h_005fgraphicImage_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td width=\"100%\">\r\n");
                out.write("<div class=\"mainTitle\">");
                if (_jspx_meth_h_005foutputText_005f2(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</div>\r\n");
                out.write("<div class=\"mainSubTitle\">");
                if (_jspx_meth_h_005foutputText_005f3(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</div>\r\n");
                out.write("<div class=\"mainSubText\">");
                if (_jspx_meth_h_005foutputText_005f4(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("</div>\r\n");
                out.write("</td>\r\n");
                out.write("<td>\r\n");
                out.write("<table cellspacing=\"4\" cellpadding=\"1\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fpanel_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fpanel_005f1(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f2 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f2.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dialog/container.jsp(119,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f2.setId("filters-panel");
                // /jsp/dialog/container.jsp(119,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f2.setRendered("#{DialogManager.filterListVisible}");
                int _jspx_eval_a_005fpanel_005f2 = _jspx_th_a_005fpanel_005f2.doStartTag();
                if (_jspx_eval_a_005fpanel_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<td class=\"separator\" width=\"1\">\r\n");
                  out.write("<img src=\"");
                  out.print(request.getContextPath());
                  out.write("/images/parts/dotted_separator.gif\" border=\"0\" height=\"29\" width=\"1\" />\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-left: 4px\" width=\"80\" valign=\"middle\">\r\n");
                  if (_jspx_meth_a_005fmodeList_005f1(_jspx_th_a_005fpanel_005f2, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f2);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f2);
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f3 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f3.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dialog/container.jsp(134,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f3.setId("views-panel");
                // /jsp/dialog/container.jsp(134,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f3.setRendered("#{DialogManager.viewListVisible}");
                int _jspx_eval_a_005fpanel_005f3 = _jspx_th_a_005fpanel_005f3.doStartTag();
                if (_jspx_eval_a_005fpanel_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<td class=\"separator\" width=\"1\">\r\n");
                  out.write("<img src=\"");
                  out.print(request.getContextPath());
                  out.write("/images/parts/dotted_separator.gif\" border=\"0\" height=\"29\" width=\"1\" />\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-left: 4px\" width=\"80\" valign=\"middle\">\r\n");
                  if (_jspx_meth_a_005fmodeList_005f2(_jspx_th_a_005fpanel_005f3, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f3);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f3);
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f4 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f4.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dialog/container.jsp(149,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f4.setId("nav-panel");
                // /jsp/dialog/container.jsp(149,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f4.setRendered("#{DialogManager.navigationVisible}");
                int _jspx_eval_a_005fpanel_005f4 = _jspx_th_a_005fpanel_005f4.doStartTag();
                if (_jspx_eval_a_005fpanel_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<td style=\"padding-left: 10px; white-space: nowrap;\" valign=\"middle\">\r\n");
                  if (_jspx_meth_a_005factionLink_005f7(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("<img src=\"");
                  out.print(request.getContextPath());
                  out.write("/images/icons/nav_file.gif\" width=\"24\" height=\"24\" align=\"absmiddle\" />\r\n");
                  if (_jspx_meth_a_005factionLink_005f8(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f4);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f4);
                out.write("\r\n");
                out.write("\r\n");
                out.write("<td><div style=\"width: 5px;\">&nbsp;</div></td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
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
                out.write("<table cellspacing=\"0\" cellpadding=\"3\" border=\"0\" width=\"100%\">\r\n");
                out.write("<tr>\r\n");
                out.write("<td width=\"100%\" valign=\"top\">\r\n");
                out.write("\r\n");
                if (_jspx_meth_a_005ferrors_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
 PanelGenerator.generatePanelStart(out, request.getContextPath(), "white", "white"); 
                out.write('\r');
                out.write('\n');
                //  f:subview
                org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f1 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
                _jspx_th_f_005fsubview_005f1.setPageContext(_jspx_page_context);
                _jspx_th_f_005fsubview_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/dialog/container.jsp(192,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_f_005fsubview_005f1.setId("dialog-body");
                int _jspx_eval_f_005fsubview_005f1 = _jspx_th_f_005fsubview_005f1.doStartTag();
                if (_jspx_eval_f_005fsubview_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_h_005foutputText_005f5(_jspx_th_f_005fsubview_005f1, _jspx_page_context))
                    return;
                  out.write('\r');
                  out.write('\n');
                  org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDialogManager().getPage() , out, false);
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
 PanelGenerator.generatePanelEnd(out, request.getContextPath(), "white"); 
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("\r\n");
                out.write("<td valign=\"top\">\r\n");
 PanelGenerator.generatePanelStart(out, request.getContextPath(), "greyround", "#F5F5F5"); 
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_r_005fdialogButtons_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write('\r');
                out.write('\n');
 PanelGenerator.generatePanelEnd(out, request.getContextPath(), "greyround"); 
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
        _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle.reuse(_jspx_th_r_005fpage_005f0);
        return;
      }
      _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitle.reuse(_jspx_th_r_005fpage_005f0);
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
    // /jsp/dialog/container.jsp(43,0) name = var type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setId("about_alfresco");
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setImage("/images/logo/AlfrescoLogo32.png");
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setValue("#{msg.title_about}");
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = tooltip type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setTooltip("#{msg.title_about}");
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setShowLink("false");
    // /jsp/dialog/../parts/titlebar.jsp(26,31) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemSpacing("3");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setIconColumnWidth("0");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = horizontal type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setHorizontal("true");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = itemStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemStyleClass("topToolbar");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = itemLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemLinkStyleClass("topToolbarLink");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedStyleClass("topToolbar");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = selectedLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedLinkStyleClass("topToolbarLink");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setValue("#{NavigationBean.toolbarLocation}");
    // /jsp/dialog/../parts/titlebar.jsp(30,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(39,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setValue("companyhome");
    // /jsp/dialog/../parts/titlebar.jsp(39,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setLabel("#{msg.company_home}");
    // /jsp/dialog/../parts/titlebar.jsp(39,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(40,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f1.setValue("userhome");
    // /jsp/dialog/../parts/titlebar.jsp(40,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(41,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setValue("guesthome");
    // /jsp/dialog/../parts/titlebar.jsp(41,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setLabel("#{msg.guest_home}");
    // /jsp/dialog/../parts/titlebar.jsp(41,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(44,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f3.setValue("myalfresco");
    // /jsp/dialog/../parts/titlebar.jsp(44,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(58,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f0.setValue("#{NavigationBean.currentUser.admin}");
    // /jsp/dialog/../parts/titlebar.jsp(58,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(59,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setValue("#{msg.admin_console}");
    // /jsp/dialog/../parts/titlebar.jsp(59,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setImage("/images/icons/admin_console.gif");
    // /jsp/dialog/../parts/titlebar.jsp(59,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setShowLink("false");
    // /jsp/dialog/../parts/titlebar.jsp(59,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setAction("dialog:adminConsole");
    // /jsp/dialog/../parts/titlebar.jsp(59,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setValue("#{msg.user_console}");
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setImage("/images/icons/user_console.gif");
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setShowLink("false");
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setAction("dialog:userConsole");
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setActionListener("#{UsersDialog.setupUserAction}");
    // /jsp/dialog/../parts/titlebar.jsp(69,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(75,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f0.setName("id");
    // /jsp/dialog/../parts/titlebar.jsp(75,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(80,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setId("alf_toggle_shelf");
    // /jsp/dialog/../parts/titlebar.jsp(80,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setValue("#{msg.toggle_shelf}");
    // /jsp/dialog/../parts/titlebar.jsp(80,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setImage("/images/icons/shelf.gif");
    // /jsp/dialog/../parts/titlebar.jsp(80,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setShowLink("false");
    // /jsp/dialog/../parts/titlebar.jsp(80,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setId("alf_help");
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setValue("#{msg.help}");
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setImage("/images/icons/Help_icon.gif");
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setShowLink("false");
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setHref("#{NavigationBean.helpUrl}");
    // /jsp/dialog/../parts/titlebar.jsp(88,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(96,104) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setId("logout");
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setImage("/images/icons/logout.gif");
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setValue("#{msg.logout} (#{NavigationBean.currentUser.userName})");
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setRendered("#{!NavigationBean.isGuest}");
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setAction("#{LoginBean.logout}");
    // /jsp/dialog/../parts/titlebar.jsp(99,0) name = immediate type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(100,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f1.setName("outcome");
    // /jsp/dialog/../parts/titlebar.jsp(100,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(102,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setId("login");
    // /jsp/dialog/../parts/titlebar.jsp(102,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setImage("/images/icons/login.gif");
    // /jsp/dialog/../parts/titlebar.jsp(102,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setValue("#{msg.login} (#{NavigationBean.currentUser.userName})");
    // /jsp/dialog/../parts/titlebar.jsp(102,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setRendered("#{NavigationBean.isGuest}");
    // /jsp/dialog/../parts/titlebar.jsp(102,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/titlebar.jsp(114,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fsimpleSearch_005f0.setId("search");
    // /jsp/dialog/../parts/titlebar.jsp(114,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/container.jsp(65,11) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/dialog/../parts/breadcrumb.jsp(32,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setValue("#{NavigationBean.location}");
    // /jsp/dialog/../parts/breadcrumb.jsp(32,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setStyleClass("headbarLink");
    int _jspx_eval_a_005fbreadcrumb_005f0 = _jspx_th_a_005fbreadcrumb_005f0.doStartTag();
    if (_jspx_th_a_005fbreadcrumb_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f0 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(80,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setId("dialog-logo");
    // /jsp/dialog/container.jsp(80,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setUrl("#{DialogManager.icon}");
    int _jspx_eval_h_005fgraphicImage_005f0 = _jspx_th_h_005fgraphicImage_005f0.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005furl_005fid_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
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
    // /jsp/dialog/container.jsp(83,23) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setValue("#{DialogManager.title}");
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
    // /jsp/dialog/container.jsp(84,26) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setValue("#{DialogManager.subTitle}");
    int _jspx_eval_h_005foutputText_005f3 = _jspx_th_h_005foutputText_005f3.doStartTag();
    if (_jspx_th_h_005foutputText_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f4 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(85,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setValue("#{DialogManager.description}");
    int _jspx_eval_h_005foutputText_005f4 = _jspx_th_h_005foutputText_005f4.doStartTag();
    if (_jspx_th_h_005foutputText_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005fpanel_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f0 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(91,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f0.setId("main-actions-panel");
    // /jsp/dialog/container.jsp(91,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f0.setRendered("#{DialogManager.actionsId != null}");
    int _jspx_eval_a_005fpanel_005f0 = _jspx_th_a_005fpanel_005f0.doStartTag();
    if (_jspx_eval_a_005fpanel_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("<td style=\"white-space: nowrap;\">\r\n");
      if (_jspx_meth_r_005factions_005f0(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      if (_jspx_meth_a_005fmenu_005f0(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("</td>\r\n");
    }
    if (_jspx_th_a_005fpanel_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f0);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f0 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/dialog/container.jsp(93,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setId("main_actions_list");
    // /jsp/dialog/container.jsp(93,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setRendered("#{DialogManager.actionsAsMenu == false}");
    // /jsp/dialog/container.jsp(93,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setStyleClass("dialogMainActions");
    // /jsp/dialog/container.jsp(93,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setValue("#{DialogManager.actionsId}");
    // /jsp/dialog/container.jsp(93,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setContext("#{DialogManager.actionsContext}");
    int _jspx_eval_r_005factions_005f0 = _jspx_th_r_005factions_005f0.doStartTag();
    if (_jspx_th_r_005factions_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005frendered_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f0 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/dialog/container.jsp(97,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setId("main_actions_menu");
    // /jsp/dialog/container.jsp(97,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setRendered("#{DialogManager.actionsAsMenu == true}");
    // /jsp/dialog/container.jsp(97,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setItemSpacing("4");
    // /jsp/dialog/container.jsp(97,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setImage("/images/icons/menu.gif");
    // /jsp/dialog/container.jsp(97,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setMenuStyleClass("moreActionsMenu");
    // /jsp/dialog/container.jsp(97,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setStyle("white-space: nowrap");
    // /jsp/dialog/container.jsp(97,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setLabel("#{DialogManager.actionsMenuLabel}");
    int _jspx_eval_a_005fmenu_005f0 = _jspx_th_a_005fmenu_005f0.doStartTag();
    if (_jspx_eval_a_005fmenu_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f1(_jspx_th_a_005fmenu_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmenu_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f0);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmenu_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f1 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f1.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmenu_005f0);
    // /jsp/dialog/container.jsp(100,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setId("main_actions_menu_items");
    // /jsp/dialog/container.jsp(100,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setValue("#{DialogManager.actionsId}");
    // /jsp/dialog/container.jsp(100,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setContext("#{DialogManager.actionsContext}");
    int _jspx_eval_r_005factions_005f1 = _jspx_th_r_005factions_005f1.doStartTag();
    if (_jspx_th_r_005factions_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fpanel_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f1 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(107,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f1.setId("more-actions-panel");
    // /jsp/dialog/container.jsp(107,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f1.setRendered("#{DialogManager.moreActionsId != null}");
    int _jspx_eval_a_005fpanel_005f1 = _jspx_th_a_005fpanel_005f1.doStartTag();
    if (_jspx_eval_a_005fpanel_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("<td style=\"padding-left: 4px\" width=\"80\">\r\n");
      if (_jspx_meth_a_005fmenu_005f1(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("</td>\r\n");
    }
    if (_jspx_th_a_005fpanel_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f1 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/dialog/container.jsp(109,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setId("more_actions_menu");
    // /jsp/dialog/container.jsp(109,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setItemSpacing("4");
    // /jsp/dialog/container.jsp(109,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setImage("/images/icons/menu.gif");
    // /jsp/dialog/container.jsp(109,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setMenuStyleClass("moreActionsMenu");
    // /jsp/dialog/container.jsp(109,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setStyle("white-space:nowrap");
    // /jsp/dialog/container.jsp(109,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setLabel("#{DialogManager.moreActionsMenuLabel}");
    int _jspx_eval_a_005fmenu_005f1 = _jspx_th_a_005fmenu_005f1.doStartTag();
    if (_jspx_eval_a_005fmenu_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f2(_jspx_th_a_005fmenu_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmenu_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f1);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmenu_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f2 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f2.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmenu_005f1);
    // /jsp/dialog/container.jsp(112,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setId("more_actions_menu_items");
    // /jsp/dialog/container.jsp(112,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setValue("#{DialogManager.moreActionsId}");
    // /jsp/dialog/container.jsp(112,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setContext("#{DialogManager.actionsContext}");
    int _jspx_eval_r_005factions_005f2 = _jspx_th_r_005factions_005f2.doStartTag();
    if (_jspx_th_r_005factions_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005fmodeList_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:modeList
    org.alfresco.web.ui.common.tag.ModeListTag _jspx_th_a_005fmodeList_005f1 = (org.alfresco.web.ui.common.tag.ModeListTag) _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.get(org.alfresco.web.ui.common.tag.ModeListTag.class);
    _jspx_th_a_005fmodeList_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmodeList_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f2);
    // /jsp/dialog/container.jsp(124,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setItemSpacing("3");
    // /jsp/dialog/container.jsp(124,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setIconColumnWidth("20");
    // /jsp/dialog/container.jsp(124,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setSelectedStyleClass("statusListHighlight");
    // /jsp/dialog/container.jsp(124,0) name = selectedImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setSelectedImage("/images/icons/filter.gif");
    // /jsp/dialog/container.jsp(124,0) name = menu type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setMenu("true");
    // /jsp/dialog/container.jsp(124,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setStyleClass("moreActionsMenu");
    // /jsp/dialog/container.jsp(124,0) name = menuImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setMenuImage("/images/icons/menu.gif");
    // /jsp/dialog/container.jsp(124,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setValue("#{DialogManager.bean.filterMode}");
    // /jsp/dialog/container.jsp(124,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setActionListener("#{DialogManager.bean.filterModeChanged}");
    int _jspx_eval_a_005fmodeList_005f1 = _jspx_th_a_005fmodeList_005f1.doStartTag();
    if (_jspx_eval_a_005fmodeList_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItems_005f0(_jspx_th_a_005fmodeList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmodeList_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.reuse(_jspx_th_a_005fmodeList_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.reuse(_jspx_th_a_005fmodeList_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005flistItems_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItems
    org.alfresco.web.ui.common.tag.ListItemsTag _jspx_th_a_005flistItems_005f0 = (org.alfresco.web.ui.common.tag.ListItemsTag) _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemsTag.class);
    _jspx_th_a_005flistItems_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItems_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f1);
    // /jsp/dialog/container.jsp(128,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItems_005f0.setValue("#{DialogManager.bean.filterItems}");
    int _jspx_eval_a_005flistItems_005f0 = _jspx_th_a_005flistItems_005f0.doStartTag();
    if (_jspx_th_a_005flistItems_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.reuse(_jspx_th_a_005flistItems_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.reuse(_jspx_th_a_005flistItems_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fmodeList_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:modeList
    org.alfresco.web.ui.common.tag.ModeListTag _jspx_th_a_005fmodeList_005f2 = (org.alfresco.web.ui.common.tag.ModeListTag) _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.get(org.alfresco.web.ui.common.tag.ModeListTag.class);
    _jspx_th_a_005fmodeList_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmodeList_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f3);
    // /jsp/dialog/container.jsp(139,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setItemSpacing("3");
    // /jsp/dialog/container.jsp(139,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setIconColumnWidth("20");
    // /jsp/dialog/container.jsp(139,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setSelectedStyleClass("statusListHighlight");
    // /jsp/dialog/container.jsp(139,0) name = selectedImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setSelectedImage("/images/icons/Details.gif");
    // /jsp/dialog/container.jsp(139,0) name = menu type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setMenu("true");
    // /jsp/dialog/container.jsp(139,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setStyleClass("moreActionsMenu");
    // /jsp/dialog/container.jsp(139,0) name = menuImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setMenuImage("/images/icons/menu.gif");
    // /jsp/dialog/container.jsp(139,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setValue("#{DialogManager.bean.viewMode}");
    // /jsp/dialog/container.jsp(139,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f2.setActionListener("#{DialogManager.bean.viewModeChanged}");
    int _jspx_eval_a_005fmodeList_005f2 = _jspx_th_a_005fmodeList_005f2.doStartTag();
    if (_jspx_eval_a_005fmodeList_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItems_005f1(_jspx_th_a_005fmodeList_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmodeList_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.reuse(_jspx_th_a_005fmodeList_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005ficonColumnWidth_005factionListener.reuse(_jspx_th_a_005fmodeList_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005flistItems_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItems
    org.alfresco.web.ui.common.tag.ListItemsTag _jspx_th_a_005flistItems_005f1 = (org.alfresco.web.ui.common.tag.ListItemsTag) _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemsTag.class);
    _jspx_th_a_005flistItems_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItems_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f2);
    // /jsp/dialog/container.jsp(143,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItems_005f1.setValue("#{DialogManager.bean.viewItems}");
    int _jspx_eval_a_005flistItems_005f1 = _jspx_th_a_005flistItems_005f1.doStartTag();
    if (_jspx_th_a_005flistItems_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.reuse(_jspx_th_a_005flistItems_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItems_0026_005fvalue_005fnobody.reuse(_jspx_th_a_005flistItems_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f7 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    // /jsp/dialog/container.jsp(151,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setId("act-prev");
    // /jsp/dialog/container.jsp(151,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setValue("#{msg.previous_item}");
    // /jsp/dialog/container.jsp(151,0) name = verticalAlign type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setVerticalAlign("-8px");
    // /jsp/dialog/container.jsp(151,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setImage("/images/icons/nav_prev.gif");
    // /jsp/dialog/container.jsp(151,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setShowLink("false");
    // /jsp/dialog/container.jsp(151,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setActionListener("#{DialogManager.bean.previousItem}");
    // /jsp/dialog/container.jsp(151,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setAction("#{DialogManager.bean.getOutcome}");
    int _jspx_eval_a_005factionLink_005f7 = _jspx_th_a_005factionLink_005f7.doStartTag();
    if (_jspx_eval_a_005factionLink_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f2(_jspx_th_a_005factionLink_005f7, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f7);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f2 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f2.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f7);
    // /jsp/dialog/container.jsp(153,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f2.setName("id");
    // /jsp/dialog/container.jsp(153,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f2.setValue("#{DialogManager.bean.currentItemId}");
    int _jspx_eval_f_005fparam_005f2 = _jspx_th_f_005fparam_005f2.doStartTag();
    if (_jspx_th_f_005fparam_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f8 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f8.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    // /jsp/dialog/container.jsp(156,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setId("act-next");
    // /jsp/dialog/container.jsp(156,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setValue("#{msg.next_item}");
    // /jsp/dialog/container.jsp(156,0) name = verticalAlign type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setVerticalAlign("-8px");
    // /jsp/dialog/container.jsp(156,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setImage("/images/icons/nav_next.gif");
    // /jsp/dialog/container.jsp(156,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setShowLink("false");
    // /jsp/dialog/container.jsp(156,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setActionListener("#{DialogManager.bean.nextItem}");
    // /jsp/dialog/container.jsp(156,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setAction("#{DialogManager.bean.getOutcome}");
    int _jspx_eval_a_005factionLink_005f8 = _jspx_th_a_005factionLink_005f8.doStartTag();
    if (_jspx_eval_a_005factionLink_005f8 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f3(_jspx_th_a_005factionLink_005f8, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fverticalAlign_005fvalue_005fshowLink_005fimage_005fid_005factionListener_005faction.reuse(_jspx_th_a_005factionLink_005f8);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f3 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f3.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f8);
    // /jsp/dialog/container.jsp(158,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f3.setName("id");
    // /jsp/dialog/container.jsp(158,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f3.setValue("#{DialogManager.bean.currentItemId}");
    int _jspx_eval_f_005fparam_005f3 = _jspx_th_f_005fparam_005f3.doStartTag();
    if (_jspx_th_f_005fparam_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fnobody.reuse(_jspx_th_f_005fparam_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005ferrors_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:errors
    org.alfresco.web.ui.common.tag.ErrorsTag _jspx_th_a_005ferrors_005f0 = (org.alfresco.web.ui.common.tag.ErrorsTag) _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody.get(org.alfresco.web.ui.common.tag.ErrorsTag.class);
    _jspx_th_a_005ferrors_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005ferrors_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(189,0) name = message type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setMessage("#{DialogManager.errorMessage}");
    // /jsp/dialog/container.jsp(189,0) name = infoClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setInfoClass("statusWarningText");
    // /jsp/dialog/container.jsp(189,0) name = errorClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setErrorClass("statusErrorText");
    // /jsp/dialog/container.jsp(189,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setStyleClass("errorMessage");
    int _jspx_eval_a_005ferrors_005f0 = _jspx_th_a_005ferrors_005f0.doStartTag();
    if (_jspx_th_a_005ferrors_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fstyleClass_005fmessage_005finfoClass_005ferrorClass_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005fsubview_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f5 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005fsubview_005f1);
    // /jsp/dialog/container.jsp(193,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setId("validation_invalid_character");
    // /jsp/dialog/container.jsp(193,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setStyle("display:none");
    // /jsp/dialog/container.jsp(193,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setValue("#{msg.validation_invalid_character}");
    int _jspx_eval_h_005foutputText_005f5 = _jspx_th_h_005foutputText_005f5.doStartTag();
    if (_jspx_th_h_005foutputText_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
    return false;
  }

  private boolean _jspx_meth_r_005fdialogButtons_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:dialogButtons
    org.alfresco.web.ui.repo.tag.DialogButtonsTag _jspx_th_r_005fdialogButtons_005f0 = (org.alfresco.web.ui.repo.tag.DialogButtonsTag) _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody.get(org.alfresco.web.ui.repo.tag.DialogButtonsTag.class);
    _jspx_th_r_005fdialogButtons_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fdialogButtons_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/dialog/container.jsp(201,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fdialogButtons_005f0.setId("dialog-buttons");
    // /jsp/dialog/container.jsp(201,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fdialogButtons_005f0.setStyleClass("wizardButton");
    int _jspx_eval_r_005fdialogButtons_005f0 = _jspx_th_r_005fdialogButtons_005f0.doStartTag();
    if (_jspx_th_r_005fdialogButtons_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_r_005fdialogButtons_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fdialogButtons_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_r_005fdialogButtons_005f0);
    return false;
  }
}
