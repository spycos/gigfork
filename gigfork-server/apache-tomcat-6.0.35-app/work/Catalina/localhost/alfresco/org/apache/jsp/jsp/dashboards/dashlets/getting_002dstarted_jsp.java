package org.apache.jsp.jsp.dashboards.dashlets;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.ui.common.PanelGenerator;

public final class getting_002dstarted_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(2);
    _jspx_dependants.add("/WEB-INF/alfresco.tld");
    _jspx_dependants.add("/WEB-INF/repo.tld");
  }

  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fverbatim;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.AnnotationProcessor _jsp_annotationprocessor;

  public Object getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _005fjspx_005ftagPool_005ff_005fverbatim = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_annotationprocessor = (org.apache.AnnotationProcessor) getServletConfig().getServletContext().getAttribute(org.apache.AnnotationProcessor.class.getName());
  }

  public void _jspDestroy() {
    _005fjspx_005ftagPool_005ff_005fverbatim.release();
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.release();
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody.release();
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
      //  f:verbatim
      org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f0 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
      _jspx_th_f_005fverbatim_005f0.setPageContext(_jspx_page_context);
      _jspx_th_f_005fverbatim_005f0.setParent(null);
      int _jspx_eval_f_005fverbatim_005f0 = _jspx_th_f_005fverbatim_005f0.doStartTag();
      if (_jspx_eval_f_005fverbatim_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
        if (_jspx_eval_f_005fverbatim_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.pushBody();
          _jspx_th_f_005fverbatim_005f0.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
          _jspx_th_f_005fverbatim_005f0.doInitBody();
        }
        do {
          out.write('\r');
          out.write('\n');
 PanelGenerator.generatePanelStart(out, request.getContextPath(), "yellow", "#ffffcc"); 
          out.write('\r');
          out.write('\n');
          int evalDoAfterBody = _jspx_th_f_005fverbatim_005f0.doAfterBody();
          if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
            break;
        } while (true);
        if (_jspx_eval_f_005fverbatim_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.popBody();
        }
      }
      if (_jspx_th_f_005fverbatim_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
        _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f0);
        return;
      }
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f0);
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fpanelGrid_005f0(_jspx_page_context))
        return;
      out.write('\r');
      out.write('\n');
      //  f:verbatim
      org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f8 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
      _jspx_th_f_005fverbatim_005f8.setPageContext(_jspx_page_context);
      _jspx_th_f_005fverbatim_005f8.setParent(null);
      int _jspx_eval_f_005fverbatim_005f8 = _jspx_th_f_005fverbatim_005f8.doStartTag();
      if (_jspx_eval_f_005fverbatim_005f8 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
        if (_jspx_eval_f_005fverbatim_005f8 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.pushBody();
          _jspx_th_f_005fverbatim_005f8.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
          _jspx_th_f_005fverbatim_005f8.doInitBody();
        }
        do {
          out.write('\r');
          out.write('\n');
 PanelGenerator.generatePanelEnd(out, request.getContextPath(), "yellow"); 
          out.write('\r');
          out.write('\n');
          int evalDoAfterBody = _jspx_th_f_005fverbatim_005f8.doAfterBody();
          if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
            break;
        } while (true);
        if (_jspx_eval_f_005fverbatim_005f8 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
          out = _jspx_page_context.popBody();
        }
      }
      if (_jspx_th_f_005fverbatim_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
        _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f8);
        return;
      }
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f8);
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

  private boolean _jspx_meth_h_005fpanelGrid_005f0(PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f0 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f0.setParent(null);
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setWidth("100%");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setStyle("background-colour:##ffffcc");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = rowClasses type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setRowClasses("alignTop");
    // /jsp/dashboards/dashlets/getting-started.jsp(29,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f0.setId("outer-panel");
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
        if (_jspx_meth_h_005fpanelGrid_005f1(_jspx_th_h_005fpanelGrid_005f0, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f5(_jspx_th_h_005fpanelGrid_005f0, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f0.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fwidth_005fstyle_005frowClasses_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f1 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
    // /jsp/dashboards/dashlets/getting-started.jsp(30,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f1.setColumns("1");
    // /jsp/dashboards/dashlets/getting-started.jsp(30,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f1.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(30,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f1.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(30,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f1.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(30,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f1.setId("links-panel");
    int _jspx_eval_h_005fpanelGrid_005f1 = _jspx_th_h_005fpanelGrid_005f1.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f1.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f1.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f0(_jspx_th_h_005fpanelGrid_005f1, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f2(_jspx_th_h_005fpanelGrid_005f1, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f3(_jspx_th_h_005fpanelGrid_005f1, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f4(_jspx_th_h_005fpanelGrid_005f1, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f1.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f0 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(31,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setStyle("font-size: 11px; font-weight:bold; color:#004488");
    // /jsp/dashboards/dashlets/getting-started.jsp(31,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f0.setValue("#{msg.product_name}");
    int _jspx_eval_h_005foutputText_005f0 = _jspx_th_h_005foutputText_005f0.doStartTag();
    if (_jspx_th_h_005foutputText_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f2 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(33,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f2.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(33,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f2.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(33,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f2.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(33,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f2.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(33,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f2.setId("demo-panel");
    int _jspx_eval_h_005fpanelGrid_005f2 = _jspx_th_h_005fpanelGrid_005f2.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f2.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f2.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f0(_jspx_th_h_005fpanelGrid_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f0(_jspx_th_h_005fpanelGrid_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f2.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f0 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f2);
    // /jsp/dashboards/dashlets/getting-started.jsp(34,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setValue("/images/icons/gettingstarted_demonstration.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(34,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(34,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f0 = _jspx_th_h_005fgraphicImage_005f0.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f0 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f2);
    // /jsp/dashboards/dashlets/getting-started.jsp(35,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f0.setId("demo-link");
    int _jspx_eval_h_005fpanelGroup_005f0 = _jspx_th_h_005fpanelGroup_005f0.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f0.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f0.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f0(_jspx_th_h_005fpanelGroup_005f0, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f1(_jspx_th_h_005fpanelGroup_005f0, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f1(_jspx_th_h_005fpanelGroup_005f0, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f0.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f0 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f0);
    // /jsp/dashboards/dashlets/getting-started.jsp(36,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setHref("http://www.alfresco.com/products/ecm/demonstrations/");
    // /jsp/dashboards/dashlets/getting-started.jsp(36,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setTarget("new");
    // /jsp/dashboards/dashlets/getting-started.jsp(36,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(36,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setValue("#{msg.gettingstarted_demonstration}");
    int _jspx_eval_a_005factionLink_005f0 = _jspx_th_a_005factionLink_005f0.doStartTag();
    if (_jspx_th_a_005factionLink_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f1 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f1.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f0);
    int _jspx_eval_f_005fverbatim_005f1 = _jspx_th_f_005fverbatim_005f1.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f1.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f1.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f1.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f1 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f0);
    // /jsp/dashboards/dashlets/getting-started.jsp(38,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f1.setValue("#{msg.gettingstarted_demonstration_desc}");
    int _jspx_eval_h_005foutputText_005f1 = _jspx_th_h_005foutputText_005f1.doStartTag();
    if (_jspx_th_h_005foutputText_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f3 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(42,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f3.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(42,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f3.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(42,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f3.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(42,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f3.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(42,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f3.setId("tour-panel");
    int _jspx_eval_h_005fpanelGrid_005f3 = _jspx_th_h_005fpanelGrid_005f3.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f3.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f3.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f1(_jspx_th_h_005fpanelGrid_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f1(_jspx_th_h_005fpanelGrid_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f3.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f1 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f3);
    // /jsp/dashboards/dashlets/getting-started.jsp(43,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setValue("/images/icons/gettingstarted_featuretour.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(43,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(43,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f1 = _jspx_th_h_005fgraphicImage_005f1.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f1 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f3);
    // /jsp/dashboards/dashlets/getting-started.jsp(44,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f1.setId("tour-link");
    int _jspx_eval_h_005fpanelGroup_005f1 = _jspx_th_h_005fpanelGroup_005f1.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f1.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f1.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f1(_jspx_th_h_005fpanelGroup_005f1, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f2(_jspx_th_h_005fpanelGroup_005f1, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f2(_jspx_th_h_005fpanelGroup_005f1, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f1.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f1 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(45,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setHref("http://www.alfresco.com/products/ecm/tour/");
    // /jsp/dashboards/dashlets/getting-started.jsp(45,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setTarget("new");
    // /jsp/dashboards/dashlets/getting-started.jsp(45,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(45,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setValue("#{msg.gettingstarted_featuretour}");
    int _jspx_eval_a_005factionLink_005f1 = _jspx_th_a_005factionLink_005f1.doStartTag();
    if (_jspx_th_a_005factionLink_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f1);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f2 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f2.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f1);
    int _jspx_eval_f_005fverbatim_005f2 = _jspx_th_f_005fverbatim_005f2.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f2.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f2.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f2.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f2 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(47,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setValue("#{msg.gettingstarted_featuretour_desc}");
    int _jspx_eval_h_005foutputText_005f2 = _jspx_th_h_005foutputText_005f2.doStartTag();
    if (_jspx_th_h_005foutputText_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f4 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(51,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f4.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(51,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f4.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(51,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f4.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(51,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f4.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(51,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f4.setId("help-panel");
    int _jspx_eval_h_005fpanelGrid_005f4 = _jspx_th_h_005fpanelGrid_005f4.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f4.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f4.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f2(_jspx_th_h_005fpanelGrid_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f2(_jspx_th_h_005fpanelGrid_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f4.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f2 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(52,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setValue("/images/icons/gettingstarted_onlinehelp.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(52,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(52,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f2 = _jspx_th_h_005fgraphicImage_005f2.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f2 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(53,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f2.setId("help-link");
    int _jspx_eval_h_005fpanelGroup_005f2 = _jspx_th_h_005fpanelGroup_005f2.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f2.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f2.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f2(_jspx_th_h_005fpanelGroup_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f3(_jspx_th_h_005fpanelGroup_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f3(_jspx_th_h_005fpanelGroup_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f2.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f2 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f2);
    // /jsp/dashboards/dashlets/getting-started.jsp(54,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setHref("#{NavigationBean.helpUrl}");
    // /jsp/dashboards/dashlets/getting-started.jsp(54,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setTarget("help");
    // /jsp/dashboards/dashlets/getting-started.jsp(54,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(54,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setValue("#{msg.gettingstarted_onlinehelp}");
    int _jspx_eval_a_005factionLink_005f2 = _jspx_th_a_005factionLink_005f2.doStartTag();
    if (_jspx_th_a_005factionLink_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyle_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f2);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f3 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f3.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f2);
    int _jspx_eval_f_005fverbatim_005f3 = _jspx_th_f_005fverbatim_005f3.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f3.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f3.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f3.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f3 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f2);
    // /jsp/dashboards/dashlets/getting-started.jsp(56,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setValue("#{msg.gettingstarted_onlinehelp_desc}");
    int _jspx_eval_h_005foutputText_005f3 = _jspx_th_h_005foutputText_005f3.doStartTag();
    if (_jspx_th_h_005foutputText_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f5 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f0);
    // /jsp/dashboards/dashlets/getting-started.jsp(61,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f5.setColumns("1");
    // /jsp/dashboards/dashlets/getting-started.jsp(61,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f5.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(61,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f5.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(61,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f5.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(61,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f5.setId("tasks-panel");
    int _jspx_eval_h_005fpanelGrid_005f5 = _jspx_th_h_005fpanelGrid_005f5.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f5.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f5.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f4(_jspx_th_h_005fpanelGrid_005f5, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f6(_jspx_th_h_005fpanelGrid_005f5, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f7(_jspx_th_h_005fpanelGrid_005f5, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f8(_jspx_th_h_005fpanelGrid_005f5, _jspx_page_context))
          return true;
        out.write("\r\n");
        out.write("\r\n");
        if (_jspx_meth_h_005fpanelGrid_005f9(_jspx_th_h_005fpanelGrid_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f5.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f4 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(62,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setStyle("font-size: 11px; font-weight:bold; color:#004488");
    // /jsp/dashboards/dashlets/getting-started.jsp(62,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setValue("#{msg.gettingstarted_commontasks}");
    int _jspx_eval_h_005foutputText_005f4 = _jspx_th_h_005foutputText_005f4.doStartTag();
    if (_jspx_th_h_005foutputText_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f6 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(64,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f6.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(64,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f6.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(64,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f6.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(64,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f6.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(64,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f6.setId("browse-panel");
    int _jspx_eval_h_005fpanelGrid_005f6 = _jspx_th_h_005fpanelGrid_005f6.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f6.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f6.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f3(_jspx_th_h_005fpanelGrid_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f3(_jspx_th_h_005fpanelGrid_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f6.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f3 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f6);
    // /jsp/dashboards/dashlets/getting-started.jsp(65,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setValue("/images/icons/gettingstarted_browse.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(65,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(65,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f3 = _jspx_th_h_005fgraphicImage_005f3.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f3 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f6);
    // /jsp/dashboards/dashlets/getting-started.jsp(66,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f3.setId("browse-link");
    int _jspx_eval_h_005fpanelGroup_005f3 = _jspx_th_h_005fpanelGroup_005f3.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f3.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f3.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f3(_jspx_th_h_005fpanelGroup_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f4(_jspx_th_h_005fpanelGroup_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f5(_jspx_th_h_005fpanelGroup_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f3.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f3 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f3);
    // /jsp/dashboards/dashlets/getting-started.jsp(67,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(67,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setValue("#{msg.gettingstarted_browse}");
    // /jsp/dashboards/dashlets/getting-started.jsp(67,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setAction("#{GettingStartedBean.browseHomeSpace}");
    int _jspx_eval_a_005factionLink_005f3 = _jspx_th_a_005factionLink_005f3.doStartTag();
    if (_jspx_th_a_005factionLink_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f3);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f4 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f4.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f3);
    int _jspx_eval_f_005fverbatim_005f4 = _jspx_th_f_005fverbatim_005f4.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f4.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f4.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f4.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f5 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f3);
    // /jsp/dashboards/dashlets/getting-started.jsp(69,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setValue("#{msg.gettingstarted_browse_desc}");
    int _jspx_eval_h_005foutputText_005f5 = _jspx_th_h_005foutputText_005f5.doStartTag();
    if (_jspx_th_h_005foutputText_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f7 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f7.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(73,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f7.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(73,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f7.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(73,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f7.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(73,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f7.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(73,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f7.setId("space-panel");
    int _jspx_eval_h_005fpanelGrid_005f7 = _jspx_th_h_005fpanelGrid_005f7.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f7 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f7.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f7.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f4(_jspx_th_h_005fpanelGrid_005f7, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f4(_jspx_th_h_005fpanelGrid_005f7, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f7.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f7 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f7);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f4 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f7);
    // /jsp/dashboards/dashlets/getting-started.jsp(74,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setValue("/images/icons/create_space_large.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(74,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(74,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f4 = _jspx_th_h_005fgraphicImage_005f4.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f4 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f7);
    // /jsp/dashboards/dashlets/getting-started.jsp(75,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f4.setId("space-link");
    int _jspx_eval_h_005fpanelGroup_005f4 = _jspx_th_h_005fpanelGroup_005f4.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f4.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f4.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f0(_jspx_th_h_005fpanelGroup_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f1(_jspx_th_h_005fpanelGroup_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f5(_jspx_th_h_005fpanelGroup_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f7(_jspx_th_h_005fpanelGroup_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f4.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f4 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f0 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(76,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f0.setValue("#{NavigationBean.isGuest == false}");
    int _jspx_eval_a_005fbooleanEvaluator_005f0 = _jspx_th_a_005fbooleanEvaluator_005f0.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f4(_jspx_th_a_005fbooleanEvaluator_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f4 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f0);
    // /jsp/dashboards/dashlets/getting-started.jsp(77,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(77,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setValue("#{msg.gettingstarted_createspace}");
    // /jsp/dashboards/dashlets/getting-started.jsp(77,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setAction("#{GettingStartedBean.createSpace}");
    int _jspx_eval_a_005factionLink_005f4 = _jspx_th_a_005factionLink_005f4.doStartTag();
    if (_jspx_th_a_005factionLink_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f1 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(79,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f1.setValue("#{NavigationBean.isGuest == true}");
    int _jspx_eval_a_005fbooleanEvaluator_005f1 = _jspx_th_a_005fbooleanEvaluator_005f1.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f6(_jspx_th_a_005fbooleanEvaluator_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f6 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f1);
    // /jsp/dashboards/dashlets/getting-started.jsp(80,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f6.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(80,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f6.setValue("#{msg.gettingstarted_createspace}");
    int _jspx_eval_h_005foutputText_005f6 = _jspx_th_h_005foutputText_005f6.doStartTag();
    if (_jspx_th_h_005foutputText_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f6);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f5 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f5.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f4);
    int _jspx_eval_f_005fverbatim_005f5 = _jspx_th_f_005fverbatim_005f5.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f5.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f5.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f5.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f7 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f7.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(83,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f7.setValue("#{msg.gettingstarted_createspace_desc}");
    int _jspx_eval_h_005foutputText_005f7 = _jspx_th_h_005foutputText_005f7.doStartTag();
    if (_jspx_th_h_005foutputText_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f7);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f8 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f8.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(87,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f8.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(87,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f8.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(87,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f8.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(87,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f8.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(87,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f8.setId("add-content-panel");
    int _jspx_eval_h_005fpanelGrid_005f8 = _jspx_th_h_005fpanelGrid_005f8.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f8 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f8 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f8.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f8.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f5(_jspx_th_h_005fpanelGrid_005f8, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f5(_jspx_th_h_005fpanelGrid_005f8, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f8.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f8 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f8);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f5 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f8);
    // /jsp/dashboards/dashlets/getting-started.jsp(88,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setValue("/images/icons/add_content_large.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(88,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(88,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f5 = _jspx_th_h_005fgraphicImage_005f5.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f5 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f8);
    // /jsp/dashboards/dashlets/getting-started.jsp(89,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f5.setId("add-content-link");
    int _jspx_eval_h_005fpanelGroup_005f5 = _jspx_th_h_005fpanelGroup_005f5.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f5.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f5.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f2(_jspx_th_h_005fpanelGroup_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f3(_jspx_th_h_005fpanelGroup_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f6(_jspx_th_h_005fpanelGroup_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f9(_jspx_th_h_005fpanelGroup_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f5.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f5 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f2 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(90,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f2.setValue("#{NavigationBean.isGuest == false}");
    int _jspx_eval_a_005fbooleanEvaluator_005f2 = _jspx_th_a_005fbooleanEvaluator_005f2.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f5(_jspx_th_a_005fbooleanEvaluator_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f5 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f2);
    // /jsp/dashboards/dashlets/getting-started.jsp(91,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(91,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setValue("#{msg.gettingstarted_addcontent}");
    // /jsp/dashboards/dashlets/getting-started.jsp(91,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setAction("#{GettingStartedBean.addContent}");
    // /jsp/dashboards/dashlets/getting-started.jsp(91,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setActionListener("#{AddContentDialog.start}");
    int _jspx_eval_a_005factionLink_005f5 = _jspx_th_a_005factionLink_005f5.doStartTag();
    if (_jspx_th_a_005factionLink_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005factionListener_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f3 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(93,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f3.setValue("#{NavigationBean.isGuest == true}");
    int _jspx_eval_a_005fbooleanEvaluator_005f3 = _jspx_th_a_005fbooleanEvaluator_005f3.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f8(_jspx_th_a_005fbooleanEvaluator_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f8 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f8.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f3);
    // /jsp/dashboards/dashlets/getting-started.jsp(94,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(94,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setValue("#{msg.gettingstarted_addcontent}");
    int _jspx_eval_h_005foutputText_005f8 = _jspx_th_h_005foutputText_005f8.doStartTag();
    if (_jspx_th_h_005foutputText_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f8);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f6 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f6.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f5);
    int _jspx_eval_f_005fverbatim_005f6 = _jspx_th_f_005fverbatim_005f6.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f6.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f6.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f6.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f9 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f9.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(97,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f9.setValue("#{msg.gettingstarted_addcontent_desc}");
    int _jspx_eval_h_005foutputText_005f9 = _jspx_th_h_005foutputText_005f9.doStartTag();
    if (_jspx_th_h_005foutputText_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f9);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGrid_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGrid
    org.apache.myfaces.taglib.html.HtmlPanelGridTag _jspx_th_h_005fpanelGrid_005f9 = (org.apache.myfaces.taglib.html.HtmlPanelGridTag) _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.get(org.apache.myfaces.taglib.html.HtmlPanelGridTag.class);
    _jspx_th_h_005fpanelGrid_005f9.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGrid_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(101,0) name = columns type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f9.setColumns("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(101,0) name = cellpadding type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f9.setCellpadding("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(101,0) name = cellspacing type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f9.setCellspacing("2");
    // /jsp/dashboards/dashlets/getting-started.jsp(101,0) name = border type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f9.setBorder("0");
    // /jsp/dashboards/dashlets/getting-started.jsp(101,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGrid_005f9.setId("create-content-panel");
    int _jspx_eval_h_005fpanelGrid_005f9 = _jspx_th_h_005fpanelGrid_005f9.doStartTag();
    if (_jspx_eval_h_005fpanelGrid_005f9 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGrid_005f9 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGrid_005f9.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGrid_005f9.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fgraphicImage_005f6(_jspx_th_h_005fpanelGrid_005f9, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005fpanelGroup_005f6(_jspx_th_h_005fpanelGrid_005f9, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGrid_005f9.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGrid_005f9 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGrid_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGrid_0026_005fid_005fcolumns_005fcellspacing_005fcellpadding_005fborder.reuse(_jspx_th_h_005fpanelGrid_005f9);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f6 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f9);
    // /jsp/dashboards/dashlets/getting-started.jsp(102,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setValue("/images/icons/new_content_large.gif");
    // /jsp/dashboards/dashlets/getting-started.jsp(102,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setWidth("32");
    // /jsp/dashboards/dashlets/getting-started.jsp(102,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f6 = _jspx_th_h_005fgraphicImage_005f6.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005fvalue_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGrid_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f6 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGrid_005f9);
    // /jsp/dashboards/dashlets/getting-started.jsp(103,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f6.setId("create-content-link");
    int _jspx_eval_h_005fpanelGroup_005f6 = _jspx_th_h_005fpanelGroup_005f6.doStartTag();
    if (_jspx_eval_h_005fpanelGroup_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_h_005fpanelGroup_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_h_005fpanelGroup_005f6.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_h_005fpanelGroup_005f6.doInitBody();
      }
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f4(_jspx_th_h_005fpanelGroup_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fbooleanEvaluator_005f5(_jspx_th_h_005fpanelGroup_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_f_005fverbatim_005f7(_jspx_th_h_005fpanelGroup_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f11(_jspx_th_h_005fpanelGroup_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_h_005fpanelGroup_005f6.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_h_005fpanelGroup_005f6 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_h_005fpanelGroup_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.reuse(_jspx_th_h_005fpanelGroup_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f4 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f6);
    // /jsp/dashboards/dashlets/getting-started.jsp(104,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f4.setValue("#{NavigationBean.isGuest == false}");
    int _jspx_eval_a_005fbooleanEvaluator_005f4 = _jspx_th_a_005fbooleanEvaluator_005f4.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f6(_jspx_th_a_005fbooleanEvaluator_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f6 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f4);
    // /jsp/dashboards/dashlets/getting-started.jsp(105,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(105,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setValue("#{msg.gettingstarted_createcontent}");
    // /jsp/dashboards/dashlets/getting-started.jsp(105,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setAction("#{GettingStartedBean.createContent}");
    int _jspx_eval_a_005factionLink_005f6 = _jspx_th_a_005factionLink_005f6.doStartTag();
    if (_jspx_th_a_005factionLink_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f5 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f6);
    // /jsp/dashboards/dashlets/getting-started.jsp(107,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f5.setValue("#{NavigationBean.isGuest == true}");
    int _jspx_eval_a_005fbooleanEvaluator_005f5 = _jspx_th_a_005fbooleanEvaluator_005f5.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f10(_jspx_th_a_005fbooleanEvaluator_005f5, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue.reuse(_jspx_th_a_005fbooleanEvaluator_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f10 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f10.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f5);
    // /jsp/dashboards/dashlets/getting-started.jsp(108,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f10.setStyle("font-weight:bold");
    // /jsp/dashboards/dashlets/getting-started.jsp(108,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f10.setValue("#{msg.gettingstarted_createcontent}");
    int _jspx_eval_h_005foutputText_005f10 = _jspx_th_h_005foutputText_005f10.doStartTag();
    if (_jspx_th_h_005foutputText_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fnobody.reuse(_jspx_th_h_005foutputText_005f10);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f7 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f7.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f6);
    int _jspx_eval_f_005fverbatim_005f7 = _jspx_th_f_005fverbatim_005f7.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f7 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f7.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f7.doInitBody();
      }
      do {
        out.write("<br>");
        int evalDoAfterBody = _jspx_th_f_005fverbatim_005f7.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
      if (_jspx_eval_f_005fverbatim_005f7 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.popBody();
      }
    }
    if (_jspx_th_f_005fverbatim_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f7);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f11 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f11.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f6);
    // /jsp/dashboards/dashlets/getting-started.jsp(111,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f11.setValue("#{msg.gettingstarted_createcontent_desc}");
    int _jspx_eval_h_005foutputText_005f11 = _jspx_th_h_005foutputText_005f11.doStartTag();
    if (_jspx_th_h_005foutputText_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fnobody.reuse(_jspx_th_h_005foutputText_005f11);
    return false;
  }
}
