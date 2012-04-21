package org.apache.jsp.jsp.dashboards.layouts;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.app.Application;

public final class single_002dcolumn_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(2);
    _jspx_dependants.add("/WEB-INF/alfresco.tld");
    _jspx_dependants.add("/WEB-INF/repo.tld");
  }

  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.AnnotationProcessor _jsp_annotationprocessor;

  public Object getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding.release();
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.release();
    _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.release();
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
 Application.getDashboardManager().initDashboard(); 
      out.write('\r');
      out.write('\n');
      //  h:panelGrid
      org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f0 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
      _jspx_th_h_005fpanelGrid_005f0.setPageContext(_jspx_page_context);
      _jspx_th_h_005fpanelGrid_005f0.setParent(null);
      // /jsp/dashboards/layouts/single-column.jsp(27,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_h_005fpanelGrid_005f0.setColumns("1");
      // /jsp/dashboards/layouts/single-column.jsp(27,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_h_005fpanelGrid_005f0.setCellpadding("2");
      // /jsp/dashboards/layouts/single-column.jsp(27,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_h_005fpanelGrid_005f0.setCellspacing("2");
      // /jsp/dashboards/layouts/single-column.jsp(27,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_h_005fpanelGrid_005f0.setWidth("100%");
      int _jspx_eval_h_005fpanelGrid_005f0 = _jspx_th_h_005fpanelGrid_005f0.doStartTag();
      if (_jspx_eval_h_005fpanelGrid_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
        if (_jspx_eval_h_005fpanelGrid_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.pushBody();
          _jspx_th_h_005fpanelGrid_005f0.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
          _jspx_th_h_005fpanelGrid_005f0.doInitBody();
        }
        do {
          out.write('\r');
          out.write('\n');
          //  a:panel
          org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f0 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
          _jspx_th_a_005fpanel_005f0.setPageContext(_jspx_page_context);
          _jspx_th_a_005fpanel_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setLabel("#{DashboardManager.dashletTitle[0]}");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setId("dashlet-1");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setRendered("#{DashboardManager.dashletAvailable[0]}");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setBorder("white");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setBgcolor("white");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setTitleBorder("lbgrey");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setExpandedTitleBorder("dotted");
          // /jsp/dashboards/layouts/single-column.jsp(28,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f0.setTitleBgcolor("white");
          int _jspx_eval_a_005fpanel_005f0 = _jspx_th_a_005fpanel_005f0.doStartTag();
          if (_jspx_eval_a_005fpanel_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            out.write('\r');
            out.write('\n');
            //  f:subview
            org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f0 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
            _jspx_th_f_005fsubview_005f0.setPageContext(_jspx_page_context);
            _jspx_th_f_005fsubview_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
            // /jsp/dashboards/layouts/single-column.jsp(30,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
            _jspx_th_f_005fsubview_005f0.setId("dashlet-1-view");
            int _jspx_eval_f_005fsubview_005f0 = _jspx_th_f_005fsubview_005f0.doStartTag();
            if (_jspx_eval_f_005fsubview_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
              out.write('\r');
              out.write('\n');
              org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getDashletPage(0), out, false);
              out.write('\r');
              out.write('\n');
            }
            if (_jspx_th_f_005fsubview_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
              _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f0);
              return;
            }
            _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f0);
            out.write('\r');
            out.write('\n');
          }
          if (_jspx_th_a_005fpanel_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f0);
            return;
          }
          _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f0);
          out.write('\r');
          out.write('\n');
          //  a:panel
          org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f1 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
          _jspx_th_a_005fpanel_005f1.setPageContext(_jspx_page_context);
          _jspx_th_a_005fpanel_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setLabel("#{DashboardManager.dashletTitle[1]}");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setId("dashlet-2");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setRendered("#{DashboardManager.dashletAvailable[1]}");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setBorder("white");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setBgcolor("white");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setTitleBorder("lbgrey");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setExpandedTitleBorder("dotted");
          // /jsp/dashboards/layouts/single-column.jsp(34,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f1.setTitleBgcolor("white");
          int _jspx_eval_a_005fpanel_005f1 = _jspx_th_a_005fpanel_005f1.doStartTag();
          if (_jspx_eval_a_005fpanel_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            out.write('\r');
            out.write('\n');
            //  f:subview
            org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f1 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
            _jspx_th_f_005fsubview_005f1.setPageContext(_jspx_page_context);
            _jspx_th_f_005fsubview_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
            // /jsp/dashboards/layouts/single-column.jsp(36,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
            _jspx_th_f_005fsubview_005f1.setId("dashlet-2-view");
            int _jspx_eval_f_005fsubview_005f1 = _jspx_th_f_005fsubview_005f1.doStartTag();
            if (_jspx_eval_f_005fsubview_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
              out.write('\r');
              out.write('\n');
              org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getDashletPage(1), out, false);
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
          }
          if (_jspx_th_a_005fpanel_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f1);
            return;
          }
          _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f1);
          out.write('\r');
          out.write('\n');
          //  a:panel
          org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f2 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
          _jspx_th_a_005fpanel_005f2.setPageContext(_jspx_page_context);
          _jspx_th_a_005fpanel_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setLabel("#{DashboardManager.dashletTitle[2]}");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setId("dashlet-3");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setRendered("#{DashboardManager.dashletAvailable[2]}");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setBorder("white");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setBgcolor("white");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setTitleBorder("lbgrey");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setExpandedTitleBorder("dotted");
          // /jsp/dashboards/layouts/single-column.jsp(40,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f2.setTitleBgcolor("white");
          int _jspx_eval_a_005fpanel_005f2 = _jspx_th_a_005fpanel_005f2.doStartTag();
          if (_jspx_eval_a_005fpanel_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            out.write('\r');
            out.write('\n');
            //  f:subview
            org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f2 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
            _jspx_th_f_005fsubview_005f2.setPageContext(_jspx_page_context);
            _jspx_th_f_005fsubview_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f2);
            // /jsp/dashboards/layouts/single-column.jsp(42,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
            _jspx_th_f_005fsubview_005f2.setId("dashlet-3-view");
            int _jspx_eval_f_005fsubview_005f2 = _jspx_th_f_005fsubview_005f2.doStartTag();
            if (_jspx_eval_f_005fsubview_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
              out.write('\r');
              out.write('\n');
              org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getDashletPage(2), out, false);
              out.write('\r');
              out.write('\n');
            }
            if (_jspx_th_f_005fsubview_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
              _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f2);
              return;
            }
            _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f2);
            out.write('\r');
            out.write('\n');
          }
          if (_jspx_th_a_005fpanel_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f2);
            return;
          }
          _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f2);
          out.write('\r');
          out.write('\n');
          //  a:panel
          org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f3 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
          _jspx_th_a_005fpanel_005f3.setPageContext(_jspx_page_context);
          _jspx_th_a_005fpanel_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setLabel("#{DashboardManager.dashletTitle[3]}");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setId("dashlet-4");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setRendered("#{DashboardManager.dashletAvailable[3]}");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setBorder("white");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setBgcolor("white");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setTitleBorder("lbgrey");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setExpandedTitleBorder("dotted");
          // /jsp/dashboards/layouts/single-column.jsp(46,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f3.setTitleBgcolor("white");
          int _jspx_eval_a_005fpanel_005f3 = _jspx_th_a_005fpanel_005f3.doStartTag();
          if (_jspx_eval_a_005fpanel_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            out.write('\r');
            out.write('\n');
            //  f:subview
            org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f3 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
            _jspx_th_f_005fsubview_005f3.setPageContext(_jspx_page_context);
            _jspx_th_f_005fsubview_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f3);
            // /jsp/dashboards/layouts/single-column.jsp(48,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
            _jspx_th_f_005fsubview_005f3.setId("dashlet-4-view");
            int _jspx_eval_f_005fsubview_005f3 = _jspx_th_f_005fsubview_005f3.doStartTag();
            if (_jspx_eval_f_005fsubview_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
              out.write('\r');
              out.write('\n');
              org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getDashletPage(3), out, false);
              out.write('\r');
              out.write('\n');
            }
            if (_jspx_th_f_005fsubview_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
              _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f3);
              return;
            }
            _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f3);
            out.write('\r');
            out.write('\n');
          }
          if (_jspx_th_a_005fpanel_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f3);
            return;
          }
          _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f3);
          out.write('\r');
          out.write('\n');
          //  a:panel
          org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f4 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
          _jspx_th_a_005fpanel_005f4.setPageContext(_jspx_page_context);
          _jspx_th_a_005fpanel_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setLabel("#{DashboardManager.dashletTitle[4]}");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setId("dashlet-5");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setRendered("#{DashboardManager.dashletAvailable[4]}");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setBorder("white");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setBgcolor("white");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setTitleBorder("lbgrey");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setExpandedTitleBorder("dotted");
          // /jsp/dashboards/layouts/single-column.jsp(52,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
          _jspx_th_a_005fpanel_005f4.setTitleBgcolor("white");
          int _jspx_eval_a_005fpanel_005f4 = _jspx_th_a_005fpanel_005f4.doStartTag();
          if (_jspx_eval_a_005fpanel_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
            out.write('\r');
            out.write('\n');
            //  f:subview
            org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f4 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
            _jspx_th_f_005fsubview_005f4.setPageContext(_jspx_page_context);
            _jspx_th_f_005fsubview_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
            // /jsp/dashboards/layouts/single-column.jsp(54,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
            _jspx_th_f_005fsubview_005f4.setId("dashlet-5-view");
            int _jspx_eval_f_005fsubview_005f4 = _jspx_th_f_005fsubview_005f4.doStartTag();
            if (_jspx_eval_f_005fsubview_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
              out.write('\r');
              out.write('\n');
              org.apache.jasper.runtime.JspRuntimeLibrary.include(request, response, Application.getDashboardManager().getDashletPage(4), out, false);
              out.write('\r');
              out.write('\n');
            }
            if (_jspx_th_f_005fsubview_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
              _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f4);
              return;
            }
            _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.reuse(_jspx_th_f_005fsubview_005f4);
            out.write('\r');
            out.write('\n');
          }
          if (_jspx_th_a_005fpanel_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
            _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f4);
            return;
          }
          _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005frendered_005flabel_005fid_005fexpandedTitleBorder_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f4);
          out.write('\r');
          out.write('\n');
          int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f0.doAfterBody();
          if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
            break;
        } while (true);
        if (_jspx_eval_h_005fpanelGrid_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.popBody();
        }
      }
      if (_jspx_th_h_005fpanelGrid_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
        _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding.reuse(_jspx_th_h_005fpanelGrid_005f0);
        return;
      }
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fcolumns_005fcellspacing_005fcellpadding.reuse(_jspx_th_h_005fpanelGrid_005f0);
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
