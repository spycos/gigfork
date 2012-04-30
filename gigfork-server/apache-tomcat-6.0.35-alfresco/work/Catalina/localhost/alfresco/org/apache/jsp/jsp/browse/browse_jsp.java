package org.apache.jsp.jsp.browse;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.alfresco.web.app.Application;
import javax.faces.context.FacesContext;
import org.alfresco.web.ui.common.PanelGenerator;
import org.alfresco.web.app.Application;

public final class browse_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final JspFactory _jspxFactory = JspFactory.getDefaultFactory();

  private static java.util.List _jspx_dependants;

  static {
    _jspx_dependants = new java.util.ArrayList(5);
    _jspx_dependants.add("/jsp/browse/../parts/titlebar.jsp");
    _jspx_dependants.add("/jsp/browse/../parts/shelf.jsp");
    _jspx_dependants.add("/jsp/browse/../parts/breadcrumb.jsp");
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
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fverbatim;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody;
  private org.apache.jasper.runtime.TagHandlerPool _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody;

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
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fverbatim = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody = org.apache.jasper.runtime.TagHandlerPool.getTagHandlerPool(getServletConfig());
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
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.release();
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005frendered_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.release();
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.release();
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid.release();
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener.release();
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.release();
    _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.release();
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.release();
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.release();
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005ff_005fverbatim.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.release();
    _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.release();
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.release();
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.release();
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.release();
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener.release();
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.release();
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.release();
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.release();
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.release();
    _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.release();
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.release();
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.release();
    _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.release();
    _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody.release();
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody.release();
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
      			null, true, 102400, true);
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
      //  r:page
      org.alfresco.web.ui.repo.tag.PageTag _jspx_th_r_005fpage_005f0 = (org.alfresco.web.ui.repo.tag.PageTag) _005fjspx_005ftagPool_005fr_005fpage_0026_005ftitleId.get(org.alfresco.web.ui.repo.tag.PageTag.class);
      _jspx_th_r_005fpage_005f0.setPageContext(_jspx_page_context);
      _jspx_th_r_005fpage_005f0.setParent(null);
      // /jsp/browse/browse.jsp(34,0) name = titleId type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
      _jspx_th_r_005fpage_005f0.setTitleId("title_browse");
      int _jspx_eval_r_005fpage_005f0 = _jspx_th_r_005fpage_005f0.doStartTag();
      if (_jspx_eval_r_005fpage_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
        do {
          out.write("\r\n");
          out.write("\r\n");
          out.write("<script type=\"text/javascript\">\r\n");
          out.write("function applySizeSpaces(e)\r\n");
          out.write("{\r\n");
          out.write("return applySize(e, 'spaces-apply');\r\n");
          out.write("}\r\n");
          out.write("\r\n");
          out.write("function applySizeContent(e)\r\n");
          out.write("{\r\n");
          out.write("return applySize(e, 'content-apply');\r\n");
          out.write("}\r\n");
          out.write("\r\n");
          out.write("function applySize(e, field)\r\n");
          out.write("{\r\n");
          out.write("var keycode;\r\n");
          out.write("if (window.event) keycode = window.event.keyCode;\r\n");
          out.write("else if (e) keycode = e.which;\r\n");
          out.write("if (keycode == 13)\r\n");
          out.write("{\r\n");
          out.write("document.forms['browse']['browse:act'].value='browse:' + field;\r\n");
          out.write("document.forms['browse'].submit();\r\n");
          out.write("return false;\r\n");
          out.write("}\r\n");
          out.write("return true;\r\n");
          out.write("}\r\n");
          out.write("</script>\r\n");
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
              // /jsp/browse/browse.jsp(73,0) name = acceptcharset type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setAcceptcharset("UTF-8");
              // /jsp/browse/browse.jsp(73,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
              _jspx_th_h_005fform_005f0.setId("browse");
              int _jspx_eval_h_005fform_005f0 = _jspx_th_h_005fform_005f0.doStartTag();
              if (_jspx_eval_h_005fform_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                out.write("\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<table cellspacing=\"0\" cellpadding=\"2\" width=\"100%\">\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td colspan=2>\r\n");
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
                out.write("<td style=\"white-space: nowrap;\">\r\n");
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
                // /jsp/browse/../parts/shelf.jsp(28,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setId("sidebar");
                // /jsp/browse/../parts/shelf.jsp(28,0) name = activePlugin type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setActivePlugin("#{SidebarBean.activePlugin}");
                // /jsp/browse/../parts/shelf.jsp(28,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_r_005fsidebar_005f0.setRendered("#{NavigationBean.shelfExpanded}");
                int _jspx_eval_r_005fsidebar_005f0 = _jspx_th_r_005fsidebar_005f0.doStartTag();
                if (_jspx_eval_r_005fsidebar_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("\r\n");
                  //  f:subview
                  org.apache.myfaces.taglib.core.SubviewTag _jspx_th_f_005fsubview_005f0 = (org.apache.myfaces.taglib.core.SubviewTag) _005fjspx_005ftagPool_005ff_005fsubview_0026_005fid.get(org.apache.myfaces.taglib.core.SubviewTag.class);
                  _jspx_th_f_005fsubview_005f0.setPageContext(_jspx_page_context);
                  _jspx_th_f_005fsubview_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fsidebar_005f0);
                  // /jsp/browse/../parts/shelf.jsp(30,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
                out.write("<table cellspacing=0 cellpadding=0 width='100%'>\r\n");
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
                out.write("/images/parts/statuspanel_4.gif)\" width=4></td>\r\n");
                out.write("<td bgcolor=\"#dfe6ed\">\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                out.write("\r\n");
                out.write("<table cellspacing=4 cellpadding=0 width='100%'>\r\n");
                out.write("<tr>\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f0 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f0.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/browse/browse.jsp(109,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f0.setId("browse-actions");
                // /jsp/browse/browse.jsp(109,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f0.setRendered("#{NavigationBean.searchContext == null}");
                int _jspx_eval_a_005fpanel_005f0 = _jspx_th_a_005fpanel_005f0.doStartTag();
                if (_jspx_eval_a_005fpanel_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<td width=32>\r\n");
                  if (_jspx_meth_h_005fgraphicImage_005f0(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                  out.write("<td>\r\n");
                  out.write("\r\n");
                  out.write("<div class=\"mainTitle\">\r\n");
                  if (_jspx_meth_h_005foutputText_005f2(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("&nbsp;\r\n");
                  if (_jspx_meth_a_005factionLink_005f7(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("&nbsp;\r\n");
                  if (_jspx_meth_a_005factionLink_005f8(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</div>\r\n");
                  out.write("<div class=\"mainSubText\">");
                  if (_jspx_meth_h_005foutputText_005f3(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("</div>\r\n");
                  out.write("<div class=\"mainSubText\">");
                  if (_jspx_meth_h_005foutputText_005f4(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("</div>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-right:4px\" align=right>\r\n");
                  out.write("<nobr>\r\n");
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_h_005fgraphicImage_005f1(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write(' ');
                  if (_jspx_meth_h_005foutputText_005f5(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</nobr>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td class=\"separator\" width=1><img src=\"");
                  out.print(request.getContextPath());
                  out.write("/images/parts/dotted_separator.gif\" border=0 height=29 width=1></td>\r\n");
                  out.write("<td style=\"padding-left:4px; white-space:nowrap\" align=\"right\">\r\n");
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_r_005factions_005f0(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-left:4px\" width=52>\r\n");
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_a_005fmenu_005f0(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-left:4px\" width=80>\r\n");
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_a_005fmenu_005f1(_jspx_th_a_005fpanel_005f0, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f0);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f0);
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f1 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f1.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/browse/browse.jsp(149,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f1.setId("search-actions");
                // /jsp/browse/browse.jsp(149,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f1.setRendered("#{NavigationBean.searchContext != null}");
                int _jspx_eval_a_005fpanel_005f1 = _jspx_th_a_005fpanel_005f1.doStartTag();
                if (_jspx_eval_a_005fpanel_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<td width=32>\r\n");
                  out.write("<img src=\"");
                  out.print(request.getContextPath());
                  out.write("/images/icons/search_results_large.gif\" width=32 height=32>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td>\r\n");
                  out.write("\r\n");
                  out.write("<div class=\"mainTitle\">");
                  if (_jspx_meth_h_005foutputText_005f6(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("</div>\r\n");
                  out.write("<div class=\"mainSubText\">");
                  if (_jspx_meth_h_005foutputFormat_005f0(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("</div>\r\n");
                  out.write("<div class=\"mainSubText\">");
                  if (_jspx_meth_h_005foutputText_005f7(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("</div>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-right:4px\" align=right>\r\n");
                  out.write("\r\n");
                  out.write("<nobr>");
                  if (_jspx_meth_a_005factionLink_005f9(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("</nobr>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-right:4px\" width=80>\r\n");
                  out.write("\r\n");
                  out.write("<nobr>");
                  if (_jspx_meth_a_005factionLink_005f10(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("</nobr>\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"padding-left:4px\" width=90>\r\n");
                  out.write('\r');
                  out.write('\n');
                  if (_jspx_meth_a_005fmenu_005f2(_jspx_th_a_005fpanel_005f1, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f1);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f1);
                out.write("\r\n");
                out.write("\r\n");
                out.write("<td class=\"separator\" width=1><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/dotted_separator.gif\" border=0 height=29 width=1></td>\r\n");
                out.write("<td width=118 valign=middle>\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fmodeList_005f1(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("</tr>\r\n");
                out.write("</table>\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_6.gif)\" width=4></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_7.gif\" width=4 height=9></td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_8.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/statuspanel_9.gif\" width=4 height=9></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005foutputText_005f8(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                //  a:panel
                org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f2 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
                _jspx_th_a_005fpanel_005f2.setPageContext(_jspx_page_context);
                _jspx_th_a_005fpanel_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
                // /jsp/browse/browse.jsp(209,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f2.setId("custom-wrapper-panel");
                // /jsp/browse/browse.jsp(209,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
                _jspx_th_a_005fpanel_005f2.setRendered("#{NavigationBean.hasCustomView && NavigationBean.searchContext == null}");
                int _jspx_eval_a_005fpanel_005f2 = _jspx_th_a_005fpanel_005f2.doStartTag();
                if (_jspx_eval_a_005fpanel_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
                  out.write("\r\n");
                  out.write("<tr valign=\"top\">\r\n");
                  out.write("<td style=\"background-image: url(");
                  out.print(request.getContextPath());
                  out.write("/images/parts/whitepanel_4.gif)\" width=4></td>\r\n");
                  out.write("<td style=\"padding:4px\">\r\n");
                  if (_jspx_meth_a_005fpanel_005f3(_jspx_th_a_005fpanel_005f2, _jspx_page_context))
                    return;
                  out.write("\r\n");
                  out.write("</td>\r\n");
                  out.write("<td style=\"background-image: url(");
                  out.print(request.getContextPath());
                  out.write("/images/parts/whitepanel_6.gif)\" width=4></td>\r\n");
                  out.write("</tr>\r\n");
                }
                if (_jspx_th_a_005fpanel_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
                  _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f2);
                  return;
                }
                _005fjspx_005ftagPool_005fa_005fpanel_0026_005frendered_005fid.reuse(_jspx_th_a_005fpanel_005f2);
                out.write("\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr valign=\"top\">\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_4.gif)\" width=4></td>\r\n");
                out.write("<td style=\"padding:4px\">\r\n");
                out.write("\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_h_005fpanelGroup_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fpanel_005f5(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_6.gif)\" width=4></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr valign=\"top\">\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_4.gif)\" width=4></td>\r\n");
                out.write("<td style=\"padding:4px\">\r\n");
                out.write("\r\n");
                if (_jspx_meth_h_005fpanelGroup_005f1(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005fpanel_005f7(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_6.gif)\" width=4></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr valign=\"top\">\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_4.gif)\" width=4></td>\r\n");
                out.write("<td style=\"padding:4px\">\r\n");
                out.write('\r');
                out.write('\n');
                if (_jspx_meth_a_005ferrors_005f0(_jspx_th_h_005fform_005f0, _jspx_page_context))
                  return;
                out.write("\r\n");
                out.write("</td>\r\n");
                out.write("<td style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_6.gif)\" width=4></td>\r\n");
                out.write("</tr>\r\n");
                out.write("\r\n");
                out.write("\r\n");
                out.write("<tr>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_7.gif\" width=4 height=4></td>\r\n");
                out.write("<td width='100%' align=center style=\"background-image: url(");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_8.gif)\"></td>\r\n");
                out.write("<td><img src=\"");
                out.print(request.getContextPath());
                out.write("/images/parts/whitepanel_9.gif\" width=4 height=4></td>\r\n");
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
    // /jsp/browse/browse.jsp(71,0) name = var type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setId("about_alfresco");
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setImage("/images/logo/AlfrescoLogo32.png");
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setValue("#{msg.title_about}");
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = tooltip type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setTooltip("#{msg.title_about}");
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f0.setShowLink("false");
    // /jsp/browse/../parts/titlebar.jsp(26,31) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemSpacing("3");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setIconColumnWidth("0");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = horizontal type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setHorizontal("true");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = itemStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemStyleClass("topToolbar");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = itemLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setItemLinkStyleClass("topToolbarLink");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedStyleClass("topToolbar");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = selectedLinkStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setSelectedLinkStyleClass("topToolbarLink");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f0.setValue("#{NavigationBean.toolbarLocation}");
    // /jsp/browse/../parts/titlebar.jsp(30,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(39,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setValue("companyhome");
    // /jsp/browse/../parts/titlebar.jsp(39,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f0.setLabel("#{msg.company_home}");
    // /jsp/browse/../parts/titlebar.jsp(39,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(40,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f1.setValue("userhome");
    // /jsp/browse/../parts/titlebar.jsp(40,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(41,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setValue("guesthome");
    // /jsp/browse/../parts/titlebar.jsp(41,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f2.setLabel("#{msg.guest_home}");
    // /jsp/browse/../parts/titlebar.jsp(41,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(44,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f3.setValue("myalfresco");
    // /jsp/browse/../parts/titlebar.jsp(44,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(58,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f0.setValue("#{NavigationBean.currentUser.admin}");
    // /jsp/browse/../parts/titlebar.jsp(58,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(59,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setValue("#{msg.admin_console}");
    // /jsp/browse/../parts/titlebar.jsp(59,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setImage("/images/icons/admin_console.gif");
    // /jsp/browse/../parts/titlebar.jsp(59,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setShowLink("false");
    // /jsp/browse/../parts/titlebar.jsp(59,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f1.setAction("dialog:adminConsole");
    // /jsp/browse/../parts/titlebar.jsp(59,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setValue("#{msg.user_console}");
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setImage("/images/icons/user_console.gif");
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setShowLink("false");
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setAction("dialog:userConsole");
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f2.setActionListener("#{UsersDialog.setupUserAction}");
    // /jsp/browse/../parts/titlebar.jsp(69,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(75,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f0.setName("id");
    // /jsp/browse/../parts/titlebar.jsp(75,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(80,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setId("alf_toggle_shelf");
    // /jsp/browse/../parts/titlebar.jsp(80,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setValue("#{msg.toggle_shelf}");
    // /jsp/browse/../parts/titlebar.jsp(80,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setImage("/images/icons/shelf.gif");
    // /jsp/browse/../parts/titlebar.jsp(80,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f3.setShowLink("false");
    // /jsp/browse/../parts/titlebar.jsp(80,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setId("alf_help");
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setValue("#{msg.help}");
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setImage("/images/icons/Help_icon.gif");
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setShowLink("false");
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f4.setHref("#{NavigationBean.helpUrl}");
    // /jsp/browse/../parts/titlebar.jsp(88,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(96,104) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setId("logout");
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setImage("/images/icons/logout.gif");
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setValue("#{msg.logout} (#{NavigationBean.currentUser.userName})");
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setRendered("#{!NavigationBean.isGuest}");
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f5.setAction("#{LoginBean.logout}");
    // /jsp/browse/../parts/titlebar.jsp(99,0) name = immediate type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(100,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f1.setName("outcome");
    // /jsp/browse/../parts/titlebar.jsp(100,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(102,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setId("login");
    // /jsp/browse/../parts/titlebar.jsp(102,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setImage("/images/icons/login.gif");
    // /jsp/browse/../parts/titlebar.jsp(102,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setValue("#{msg.login} (#{NavigationBean.currentUser.userName})");
    // /jsp/browse/../parts/titlebar.jsp(102,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f6.setRendered("#{NavigationBean.isGuest}");
    // /jsp/browse/../parts/titlebar.jsp(102,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/titlebar.jsp(114,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fsimpleSearch_005f0.setId("search");
    // /jsp/browse/../parts/titlebar.jsp(114,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/browse.jsp(93,11) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
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
    // /jsp/browse/../parts/breadcrumb.jsp(32,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setValue("#{NavigationBean.location}");
    // /jsp/browse/../parts/breadcrumb.jsp(32,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbreadcrumb_005f0.setStyleClass("headbarLink");
    int _jspx_eval_a_005fbreadcrumb_005f0 = _jspx_th_a_005fbreadcrumb_005f0.doStartTag();
    if (_jspx_th_a_005fbreadcrumb_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbreadcrumb_0026_005fvalue_005fstyleClass_005fnobody.reuse(_jspx_th_a_005fbreadcrumb_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f0 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(111,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setId("space-logo");
    // /jsp/browse/browse.jsp(111,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setUrl("/images/icons/#{NavigationBean.nodeProperties.icon}.gif");
    // /jsp/browse/browse.jsp(111,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setWidth("32");
    // /jsp/browse/browse.jsp(111,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f0.setHeight("32");
    int _jspx_eval_h_005fgraphicImage_005f0 = _jspx_th_h_005fgraphicImage_005f0.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f2 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(116,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setValue("#{NavigationBean.nodeProperties.name}");
    // /jsp/browse/browse.jsp(116,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f2.setId("msg2");
    int _jspx_eval_h_005foutputText_005f2 = _jspx_th_h_005foutputText_005f2.doStartTag();
    if (_jspx_th_h_005foutputText_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f7 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(117,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setImage("/images/icons/opennetwork.gif");
    // /jsp/browse/browse.jsp(117,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setValue("#{msg.network_folder} #{NavigationBean.nodeProperties.cifsPathLabel}");
    // /jsp/browse/browse.jsp(117,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setShowLink("false");
    // /jsp/browse/browse.jsp(117,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setHref("#{NavigationBean.nodeProperties.cifsPath}");
    // /jsp/browse/browse.jsp(117,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setRendered("#{NavigationBean.nodeProperties.cifsPath != null}");
    // /jsp/browse/browse.jsp(117,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setTarget("new");
    // /jsp/browse/browse.jsp(117,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f7.setId("cifs");
    int _jspx_eval_a_005factionLink_005f7 = _jspx_th_a_005factionLink_005f7.doStartTag();
    if (_jspx_th_a_005factionLink_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f8 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f8.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(118,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setId("actRSS");
    // /jsp/browse/browse.jsp(118,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setValue("#{msg.rss_feed_link}");
    // /jsp/browse/browse.jsp(118,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setShowLink("false");
    // /jsp/browse/browse.jsp(118,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setImage("/images/icons/rss.gif");
    // /jsp/browse/browse.jsp(118,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setHref("#{NavigationBean.RSSFeedURL}");
    // /jsp/browse/browse.jsp(118,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f8.setRendered("#{NavigationBean.RSSFeed == true}");
    int _jspx_eval_a_005factionLink_005f8 = _jspx_th_a_005factionLink_005f8.doStartTag();
    if (_jspx_th_a_005factionLink_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005frendered_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f8);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f3 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(120,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setValue("#{msg.view_description}");
    // /jsp/browse/browse.jsp(120,25) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f3.setId("msg3");
    int _jspx_eval_h_005foutputText_005f3 = _jspx_th_h_005foutputText_005f3.doStartTag();
    if (_jspx_th_h_005foutputText_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f4 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(121,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setValue("#{NavigationBean.nodeProperties.description}");
    // /jsp/browse/browse.jsp(121,25) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f4.setId("msg4");
    int _jspx_eval_h_005foutputText_005f4 = _jspx_th_h_005foutputText_005f4.doStartTag();
    if (_jspx_th_h_005foutputText_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f1 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(126,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setId("img-rule");
    // /jsp/browse/browse.jsp(126,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setUrl("/images/icons/rule.gif");
    // /jsp/browse/browse.jsp(126,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setWidth("16");
    // /jsp/browse/browse.jsp(126,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setHeight("16");
    // /jsp/browse/browse.jsp(126,0) name = title type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f1.setTitle("#{msg.rules_count}");
    int _jspx_eval_h_005fgraphicImage_005f1 = _jspx_th_h_005fgraphicImage_005f1.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005ftitle_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f5 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(126,112) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setValue("(#{NavigationBean.ruleCount})");
    // /jsp/browse/browse.jsp(126,112) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setId("rulemsg1");
    // /jsp/browse/browse.jsp(126,112) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f5.setStyle("vertical-align:20%");
    int _jspx_eval_h_005foutputText_005f5 = _jspx_th_h_005foutputText_005f5.doStartTag();
    if (_jspx_th_h_005foutputText_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fstyle_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f5);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f0 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(132,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setId("acts_add_content");
    // /jsp/browse/browse.jsp(132,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setValue("add_content_menu");
    // /jsp/browse/browse.jsp(132,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setContext("#{NavigationBean.currentNode}");
    // /jsp/browse/browse.jsp(132,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f0.setShowLink("true");
    int _jspx_eval_r_005factions_005f0 = _jspx_th_r_005factions_005f0.doStartTag();
    if (_jspx_th_r_005factions_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f0);
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
    // /jsp/browse/browse.jsp(136,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setId("createMenu");
    // /jsp/browse/browse.jsp(136,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setItemSpacing("4");
    // /jsp/browse/browse.jsp(136,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setLabel("#{msg.create_options}");
    // /jsp/browse/browse.jsp(136,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setImage("/images/icons/menu.gif");
    // /jsp/browse/browse.jsp(136,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setMenuStyleClass("moreActionsMenu");
    // /jsp/browse/browse.jsp(136,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setStyle("white-space:nowrap");
    // /jsp/browse/browse.jsp(136,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f0.setRendered("#{NavigationBean.createChildrenPermissionEnabled}");
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
    // /jsp/browse/browse.jsp(137,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setId("acts_create");
    // /jsp/browse/browse.jsp(137,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setValue("browse_create_menu");
    // /jsp/browse/browse.jsp(137,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f1.setContext("#{NavigationBean.currentNode}");
    int _jspx_eval_r_005factions_005f1 = _jspx_th_r_005factions_005f1.doStartTag();
    if (_jspx_th_r_005factions_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f1 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f0);
    // /jsp/browse/browse.jsp(142,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setId("actionsMenu");
    // /jsp/browse/browse.jsp(142,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setItemSpacing("4");
    // /jsp/browse/browse.jsp(142,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setLabel("#{msg.more_actions}");
    // /jsp/browse/browse.jsp(142,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setImage("/images/icons/menu.gif");
    // /jsp/browse/browse.jsp(142,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setMenuStyleClass("moreActionsMenu");
    // /jsp/browse/browse.jsp(142,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f1.setStyle("white-space:nowrap");
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
    // /jsp/browse/browse.jsp(143,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setId("acts_browse");
    // /jsp/browse/browse.jsp(143,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setValue("browse_actions_menu");
    // /jsp/browse/browse.jsp(143,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f2.setContext("#{NavigationBean.currentNode}");
    int _jspx_eval_r_005factions_005f2 = _jspx_th_r_005factions_005f2.doStartTag();
    if (_jspx_th_r_005factions_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f6 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(155,23) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f6.setValue("#{msg.search_results}");
    // /jsp/browse/browse.jsp(155,23) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f6.setId("msg11");
    int _jspx_eval_h_005foutputText_005f6 = _jspx_th_h_005foutputText_005f6.doStartTag();
    if (_jspx_th_h_005foutputText_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005foutputFormat_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputFormat
    org.apache.myfaces.taglib.html.HtmlOutputFormatTag _jspx_th_h_005foutputFormat_005f0 = (org.apache.myfaces.taglib.html.HtmlOutputFormatTag) _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputFormatTag.class);
    _jspx_th_h_005foutputFormat_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputFormat_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(156,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f0.setValue("#{msg.search_detail}");
    // /jsp/browse/browse.jsp(156,25) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f0.setId("msg12");
    int _jspx_eval_h_005foutputFormat_005f0 = _jspx_th_h_005foutputFormat_005f0.doStartTag();
    if (_jspx_eval_h_005foutputFormat_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_meth_f_005fparam_005f2(_jspx_th_h_005foutputFormat_005f0, _jspx_page_context))
        return true;
    }
    if (_jspx_th_h_005foutputFormat_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputFormat_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputFormat_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputFormat_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f2 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f2.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputFormat_005f0);
    // /jsp/browse/browse.jsp(156,81) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f2.setValue("#{NavigationBean.searchContext.text}");
    // /jsp/browse/browse.jsp(156,81) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f2.setId("param2");
    int _jspx_eval_f_005fparam_005f2 = _jspx_th_f_005fparam_005f2.doStartTag();
    if (_jspx_th_f_005fparam_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f7 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f7.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(157,25) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f7.setValue("#{msg.search_description}");
    // /jsp/browse/browse.jsp(157,25) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f7.setId("msg13");
    int _jspx_eval_h_005foutputText_005f7 = _jspx_th_h_005foutputText_005f7.doStartTag();
    if (_jspx_th_h_005foutputText_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f9 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f9.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(161,6) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f9.setValue("#{msg.close_search}");
    // /jsp/browse/browse.jsp(161,6) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f9.setImage("/images/icons/action.gif");
    // /jsp/browse/browse.jsp(161,6) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f9.setStyle("white-space:nowrap");
    // /jsp/browse/browse.jsp(161,6) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f9.setActionListener("#{BrowseBean.closeSearch}");
    // /jsp/browse/browse.jsp(161,6) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f9.setId("link21");
    int _jspx_eval_a_005factionLink_005f9 = _jspx_th_a_005factionLink_005f9.doStartTag();
    if (_jspx_th_a_005factionLink_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f9);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f10 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f10.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(165,6) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f10.setValue("#{msg.new_search}");
    // /jsp/browse/browse.jsp(165,6) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f10.setImage("/images/icons/search_icon.gif");
    // /jsp/browse/browse.jsp(165,6) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f10.setStyle("white-space:nowrap");
    // /jsp/browse/browse.jsp(165,6) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f10.setAction("advSearch");
    // /jsp/browse/browse.jsp(165,6) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f10.setId("link20");
    int _jspx_eval_a_005factionLink_005f10 = _jspx_th_a_005factionLink_005f10.doStartTag();
    if (_jspx_th_a_005factionLink_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyle_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f10);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f2 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f1);
    // /jsp/browse/browse.jsp(169,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setId("searchMenu");
    // /jsp/browse/browse.jsp(169,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setItemSpacing("4");
    // /jsp/browse/browse.jsp(169,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setLabel("#{msg.more_actions}");
    // /jsp/browse/browse.jsp(169,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setImage("/images/icons/menu.gif");
    // /jsp/browse/browse.jsp(169,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setMenuStyleClass("moreActionsMenu");
    // /jsp/browse/browse.jsp(169,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f2.setStyle("white-space:nowrap");
    int _jspx_eval_a_005fmenu_005f2 = _jspx_th_a_005fmenu_005f2.doStartTag();
    if (_jspx_eval_a_005fmenu_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fbooleanEvaluator_005f1(_jspx_th_a_005fmenu_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmenu_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005fstyle_005fmenuStyleClass_005flabel_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmenu_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f1 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmenu_005f2);
    // /jsp/browse/browse.jsp(170,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f1.setValue("#{NavigationBean.isGuest == false}");
    // /jsp/browse/browse.jsp(170,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f1.setId("eval0");
    int _jspx_eval_a_005fbooleanEvaluator_005f1 = _jspx_th_a_005fbooleanEvaluator_005f1.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f11(_jspx_th_a_005fbooleanEvaluator_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fbooleanEvaluator_005f2(_jspx_th_a_005fbooleanEvaluator_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f11 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f11.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f1);
    // /jsp/browse/browse.jsp(171,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f11.setValue("#{msg.save_new_search}");
    // /jsp/browse/browse.jsp(171,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f11.setImage("/images/icons/save_search.gif");
    // /jsp/browse/browse.jsp(171,0) name = padding type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f11.setPadding("4");
    // /jsp/browse/browse.jsp(171,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f11.setAction("#{AdvancedSearchDialog.saveNewSearch}");
    // /jsp/browse/browse.jsp(171,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f11.setId("link20_1");
    int _jspx_eval_a_005factionLink_005f11 = _jspx_th_a_005factionLink_005f11.doStartTag();
    if (_jspx_th_a_005factionLink_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f11);
    return false;
  }

  private boolean _jspx_meth_a_005fbooleanEvaluator_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:booleanEvaluator
    org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag _jspx_th_a_005fbooleanEvaluator_005f2 = (org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag) _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.get(org.alfresco.web.ui.common.tag.evaluator.BooleanEvaluatorTag.class);
    _jspx_th_a_005fbooleanEvaluator_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fbooleanEvaluator_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f1);
    // /jsp/browse/browse.jsp(172,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f2.setValue("#{AdvancedSearchDialog.allowEdit == true}");
    // /jsp/browse/browse.jsp(172,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fbooleanEvaluator_005f2.setId("eval0_1");
    int _jspx_eval_a_005fbooleanEvaluator_005f2 = _jspx_th_a_005fbooleanEvaluator_005f2.doStartTag();
    if (_jspx_eval_a_005fbooleanEvaluator_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f12(_jspx_th_a_005fbooleanEvaluator_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fbooleanEvaluator_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fbooleanEvaluator_0026_005fvalue_005fid.reuse(_jspx_th_a_005fbooleanEvaluator_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f12(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fbooleanEvaluator_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f12 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f12.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f12.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fbooleanEvaluator_005f2);
    // /jsp/browse/browse.jsp(173,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f12.setValue("#{msg.save_edit_search}");
    // /jsp/browse/browse.jsp(173,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f12.setImage("/images/icons/edit_search.gif");
    // /jsp/browse/browse.jsp(173,0) name = padding type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f12.setPadding("4");
    // /jsp/browse/browse.jsp(173,0) name = action type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f12.setAction("#{AdvancedSearchDialog.saveEditSearch}");
    // /jsp/browse/browse.jsp(173,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f12.setId("link20_2");
    int _jspx_eval_a_005factionLink_005f12 = _jspx_th_a_005factionLink_005f12.doStartTag();
    if (_jspx_th_a_005factionLink_005f12.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f12);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fpadding_005fimage_005fid_005faction_005fnobody.reuse(_jspx_th_a_005factionLink_005f12);
    return false;
  }

  private boolean _jspx_meth_a_005fmodeList_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:modeList
    org.alfresco.web.ui.common.tag.ModeListTag _jspx_th_a_005fmodeList_005f1 = (org.alfresco.web.ui.common.tag.ModeListTag) _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener.get(org.alfresco.web.ui.common.tag.ModeListTag.class);
    _jspx_th_a_005fmodeList_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmodeList_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(183,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setId("viewMode");
    // /jsp/browse/browse.jsp(183,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setItemSpacing("4");
    // /jsp/browse/browse.jsp(183,0) name = iconColumnWidth type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setIconColumnWidth("20");
    // /jsp/browse/browse.jsp(183,0) name = selectedStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setSelectedStyleClass("statusListHighlight");
    // /jsp/browse/browse.jsp(183,0) name = disabledStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setDisabledStyleClass("statusListDisabled");
    // /jsp/browse/browse.jsp(183,0) name = selectedImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setSelectedImage("/images/icons/Details.gif");
    // /jsp/browse/browse.jsp(183,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setValue("#{BrowseBean.browseViewMode}");
    // /jsp/browse/browse.jsp(183,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setActionListener("#{BrowseBean.viewModeChanged}");
    // /jsp/browse/browse.jsp(183,0) name = menu type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setMenu("true");
    // /jsp/browse/browse.jsp(183,0) name = menuImage type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setMenuImage("/images/icons/menu.gif");
    // /jsp/browse/browse.jsp(183,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmodeList_005f1.setStyleClass("moreActionsMenu");
    int _jspx_eval_a_005fmodeList_005f1 = _jspx_th_a_005fmodeList_005f1.doStartTag();
    if (_jspx_eval_a_005fmodeList_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f4(_jspx_th_a_005fmodeList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f5(_jspx_th_a_005fmodeList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f6(_jspx_th_a_005fmodeList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005flistItem_005f7(_jspx_th_a_005fmodeList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmodeList_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener.reuse(_jspx_th_a_005fmodeList_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmodeList_0026_005fvalue_005fstyleClass_005fselectedStyleClass_005fselectedImage_005fmenuImage_005fmenu_005fitemSpacing_005fid_005ficonColumnWidth_005fdisabledStyleClass_005factionListener.reuse(_jspx_th_a_005fmodeList_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f4 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f1);
    // /jsp/browse/browse.jsp(185,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f4.setValue("details");
    // /jsp/browse/browse.jsp(185,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f4.setLabel("#{msg.details_view}");
    int _jspx_eval_a_005flistItem_005f4 = _jspx_th_a_005flistItem_005f4.doStartTag();
    if (_jspx_th_a_005flistItem_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f5 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f1);
    // /jsp/browse/browse.jsp(186,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f5.setValue("icons");
    // /jsp/browse/browse.jsp(186,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f5.setLabel("#{msg.view_icon}");
    int _jspx_eval_a_005flistItem_005f5 = _jspx_th_a_005flistItem_005f5.doStartTag();
    if (_jspx_th_a_005flistItem_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f6 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f1);
    // /jsp/browse/browse.jsp(187,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f6.setValue("list");
    // /jsp/browse/browse.jsp(187,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f6.setLabel("#{msg.view_browse}");
    int _jspx_eval_a_005flistItem_005f6 = _jspx_th_a_005flistItem_005f6.doStartTag();
    if (_jspx_th_a_005flistItem_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fnobody.reuse(_jspx_th_a_005flistItem_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005flistItem_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmodeList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:listItem
    org.alfresco.web.ui.common.tag.ListItemTag _jspx_th_a_005flistItem_005f7 = (org.alfresco.web.ui.common.tag.ListItemTag) _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody.get(org.alfresco.web.ui.common.tag.ListItemTag.class);
    _jspx_th_a_005flistItem_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005flistItem_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmodeList_005f1);
    // /jsp/browse/browse.jsp(188,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f7.setValue("dashboard");
    // /jsp/browse/browse.jsp(188,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f7.setLabel("#{msg.custom_view}");
    // /jsp/browse/browse.jsp(188,0) name = disabled type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005flistItem_005f7.setDisabled("#{!NavigationBean.hasCustomView}");
    int _jspx_eval_a_005flistItem_005f7 = _jspx_th_a_005flistItem_005f7.doStartTag();
    if (_jspx_th_a_005flistItem_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody.reuse(_jspx_th_a_005flistItem_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005flistItem_0026_005fvalue_005flabel_005fdisabled_005fnobody.reuse(_jspx_th_a_005flistItem_005f7);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f8 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f8.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(206,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setId("sites-space-warning");
    // /jsp/browse/browse.jsp(206,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setRendered("#{BrowseBean.sitesSpace}");
    // /jsp/browse/browse.jsp(206,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setValue("#{BrowseBean.sitesSpaceWarningHTML}");
    // /jsp/browse/browse.jsp(206,0) name = escape type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f8.setEscape("false");
    int _jspx_eval_h_005foutputText_005f8 = _jspx_th_h_005foutputText_005f8.doStartTag();
    if (_jspx_th_h_005foutputText_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.reuse(_jspx_th_h_005foutputText_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005frendered_005fid_005fescape_005fnobody.reuse(_jspx_th_h_005foutputText_005f8);
    return false;
  }

  private boolean _jspx_meth_a_005fpanel_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f3 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f2);
    // /jsp/browse/browse.jsp(213,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setId("custom-panel");
    // /jsp/browse/browse.jsp(213,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setBorder("white");
    // /jsp/browse/browse.jsp(213,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setBgcolor("white");
    // /jsp/browse/browse.jsp(213,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setTitleBorder("lbgrey");
    // /jsp/browse/browse.jsp(213,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setExpandedTitleBorder("dotted");
    // /jsp/browse/browse.jsp(213,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setTitleBgcolor("white");
    // /jsp/browse/browse.jsp(213,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setStyleClass("mainSubTitle");
    // /jsp/browse/browse.jsp(213,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setLabel("#{msg.custom_view}");
    // /jsp/browse/browse.jsp(213,0) name = progressive type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setProgressive("true");
    // /jsp/browse/browse.jsp(213,0) name = expanded type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setExpanded("#{BrowseBean.panels[\"custom-panel\"]}");
    // /jsp/browse/browse.jsp(213,0) name = expandedActionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f3.setExpandedActionListener("#{BrowseBean.expandPanel}");
    int _jspx_eval_a_005fpanel_005f3 = _jspx_th_a_005fpanel_005f3.doStartTag();
    if (_jspx_eval_a_005fpanel_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fwebScript_005f0(_jspx_th_a_005fpanel_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005ftemplate_005f0(_jspx_th_a_005fpanel_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fpanel_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f3);
    return false;
  }

  private boolean _jspx_meth_r_005fwebScript_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:webScript
    org.springframework.extensions.webscripts.jsf.WebScriptTag _jspx_th_r_005fwebScript_005f0 = (org.springframework.extensions.webscripts.jsf.WebScriptTag) _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody.get(org.springframework.extensions.webscripts.jsf.WebScriptTag.class);
    _jspx_th_r_005fwebScript_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fwebScript_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f3);
    // /jsp/browse/browse.jsp(216,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fwebScript_005f0.setId("webscript");
    // /jsp/browse/browse.jsp(216,0) name = scriptUrl type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fwebScript_005f0.setScriptUrl("#{NavigationBean.currentNodeWebscript}");
    // /jsp/browse/browse.jsp(216,0) name = context type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fwebScript_005f0.setContext("#{NavigationBean.currentNode.nodeRef}");
    // /jsp/browse/browse.jsp(216,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fwebScript_005f0.setRendered("#{NavigationBean.hasWebscriptView}");
    int _jspx_eval_r_005fwebScript_005f0 = _jspx_th_r_005fwebScript_005f0.doStartTag();
    if (_jspx_th_r_005fwebScript_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005fwebScript_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fwebScript_0026_005fscriptUrl_005frendered_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005fwebScript_005f0);
    return false;
  }

  private boolean _jspx_meth_r_005ftemplate_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:template
    org.alfresco.web.ui.repo.tag.TemplateTag _jspx_th_r_005ftemplate_005f0 = (org.alfresco.web.ui.repo.tag.TemplateTag) _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody.get(org.alfresco.web.ui.repo.tag.TemplateTag.class);
    _jspx_th_r_005ftemplate_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005ftemplate_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f3);
    // /jsp/browse/browse.jsp(217,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005ftemplate_005f0.setId("template");
    // /jsp/browse/browse.jsp(217,0) name = template type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005ftemplate_005f0.setTemplate("#{NavigationBean.currentNodeTemplate}");
    // /jsp/browse/browse.jsp(217,0) name = model type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005ftemplate_005f0.setModel("#{NavigationBean.templateModel}");
    // /jsp/browse/browse.jsp(217,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005ftemplate_005f0.setRendered("#{!NavigationBean.hasWebscriptView && NavigationBean.hasTemplateView}");
    int _jspx_eval_r_005ftemplate_005f0 = _jspx_th_r_005ftemplate_005f0.doStartTag();
    if (_jspx_th_r_005ftemplate_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody.reuse(_jspx_th_r_005ftemplate_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005ftemplate_0026_005ftemplate_005frendered_005fmodel_005fid_005fnobody.reuse(_jspx_th_r_005ftemplate_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f0 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(230,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f0.setId("spaces-panel-facets");
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
        if (_jspx_meth_f_005ffacet_005f0(_jspx_th_h_005fpanelGroup_005f0, _jspx_page_context))
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

  private boolean _jspx_meth_f_005ffacet_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f0 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f0.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f0);
    // /jsp/browse/browse.jsp(231,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f0.setName("title");
    int _jspx_eval_f_005ffacet_005f0 = _jspx_th_f_005ffacet_005f0.doStartTag();
    if (_jspx_eval_f_005ffacet_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fpanel_005f4(_jspx_th_f_005ffacet_005f0, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f0.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fpanel_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f4 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f0);
    // /jsp/browse/browse.jsp(232,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f4.setId("page-controls1");
    // /jsp/browse/browse.jsp(232,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f4.setStyle("font-size:9px");
    int _jspx_eval_a_005fpanel_005f4 = _jspx_th_a_005fpanel_005f4.doStartTag();
    if (_jspx_eval_a_005fpanel_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f9(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005finputText_005f0(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fverbatim_005f0(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f13(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fverbatim_005f1(_jspx_th_a_005fpanel_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fpanel_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.reuse(_jspx_th_a_005fpanel_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.reuse(_jspx_th_a_005fpanel_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f9 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f9.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    // /jsp/browse/browse.jsp(233,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f9.setValue("#{msg.items_per_page}");
    // /jsp/browse/browse.jsp(233,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f9.setId("items-txt1");
    int _jspx_eval_h_005foutputText_005f9 = _jspx_th_h_005foutputText_005f9.doStartTag();
    if (_jspx_th_h_005foutputText_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f9);
    return false;
  }

  private boolean _jspx_meth_h_005finputText_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:inputText
    org.apache.myfaces.taglib.html.HtmlInputTextTag _jspx_th_h_005finputText_005f0 = (org.apache.myfaces.taglib.html.HtmlInputTextTag) _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlInputTextTag.class);
    _jspx_th_h_005finputText_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005finputText_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    // /jsp/browse/browse.jsp(234,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setId("spaces-pages");
    // /jsp/browse/browse.jsp(234,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setValue("#{BrowseBean.pageSizeSpacesStr}");
    // /jsp/browse/browse.jsp(234,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setStyle("width:24px;margin-left:4px");
    // /jsp/browse/browse.jsp(234,0) name = maxlength type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setMaxlength("3");
    // /jsp/browse/browse.jsp(234,0) name = onkeyup type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f0.setOnkeyup("return applySizeSpaces(event);");
    int _jspx_eval_h_005finputText_005f0 = _jspx_th_h_005finputText_005f0.doStartTag();
    if (_jspx_th_h_005finputText_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f0 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f0.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    int _jspx_eval_f_005fverbatim_005f0 = _jspx_th_f_005fverbatim_005f0.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f0 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f0.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f0.doInitBody();
      }
      do {
        out.write("<div style=\"display:none\">");
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
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fverbatim.reuse(_jspx_th_f_005fverbatim_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f13(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f13 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f13.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f13.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    // /jsp/browse/browse.jsp(236,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f13.setId("spaces-apply");
    // /jsp/browse/browse.jsp(236,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f13.setValue("");
    // /jsp/browse/browse.jsp(236,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f13.setActionListener("#{BrowseBean.updateSpacesPageSize}");
    int _jspx_eval_a_005factionLink_005f13 = _jspx_th_a_005factionLink_005f13.doStartTag();
    if (_jspx_th_a_005factionLink_005f13.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f13);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f13);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f1 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f1.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f4);
    int _jspx_eval_f_005fverbatim_005f1 = _jspx_th_f_005fverbatim_005f1.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f1 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f1.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f1.doInitBody();
      }
      do {
        out.write("</div>");
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

  private boolean _jspx_meth_a_005fpanel_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f5 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(241,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setId("spaces-panel");
    // /jsp/browse/browse.jsp(241,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setBorder("white");
    // /jsp/browse/browse.jsp(241,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setBgcolor("white");
    // /jsp/browse/browse.jsp(241,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setTitleBorder("lbgrey");
    // /jsp/browse/browse.jsp(241,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setExpandedTitleBorder("dotted");
    // /jsp/browse/browse.jsp(241,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setTitleBgcolor("white");
    // /jsp/browse/browse.jsp(241,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setStyleClass("mainSubTitle");
    // /jsp/browse/browse.jsp(241,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setLabel("#{msg.browse_spaces}");
    // /jsp/browse/browse.jsp(241,0) name = progressive type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setProgressive("true");
    // /jsp/browse/browse.jsp(241,0) name = facetsId type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setFacetsId("spaces-panel-facets");
    // /jsp/browse/browse.jsp(241,0) name = expanded type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setExpanded("#{BrowseBean.panels[\"spaces-panel\"]}");
    // /jsp/browse/browse.jsp(241,0) name = expandedActionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f5.setExpandedActionListener("#{BrowseBean.expandPanel}");
    int _jspx_eval_a_005fpanel_005f5 = _jspx_th_a_005fpanel_005f5.doStartTag();
    if (_jspx_eval_a_005fpanel_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005frichList_005f0(_jspx_th_a_005fpanel_005f5, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
    }
    if (_jspx_th_a_005fpanel_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005frichList_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:richList
    org.alfresco.web.ui.common.tag.data.RichListTag _jspx_th_a_005frichList_005f0 = (org.alfresco.web.ui.common.tag.data.RichListTag) _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.get(org.alfresco.web.ui.common.tag.data.RichListTag.class);
    _jspx_th_a_005frichList_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005frichList_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f5);
    // /jsp/browse/browse.jsp(246,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setId("spacesList");
    // /jsp/browse/browse.jsp(246,0) name = binding type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setBinding("#{BrowseBean.spacesRichList}");
    // /jsp/browse/browse.jsp(246,0) name = viewMode type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setViewMode("#{BrowseBean.browseViewMode}");
    // /jsp/browse/browse.jsp(246,0) name = pageSize type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setPageSize("#{BrowseBean.pageSizeSpaces}");
    // /jsp/browse/browse.jsp(246,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setStyleClass("recordSet");
    // /jsp/browse/browse.jsp(246,0) name = headerStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setHeaderStyleClass("recordSetHeader");
    // /jsp/browse/browse.jsp(246,0) name = rowStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setRowStyleClass("recordSetRow");
    // /jsp/browse/browse.jsp(246,0) name = altRowStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setAltRowStyleClass("recordSetRowAlt");
    // /jsp/browse/browse.jsp(246,0) name = width type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setWidth("100%");
    // /jsp/browse/browse.jsp(246,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setValue("#{BrowseBean.nodes}");
    // /jsp/browse/browse.jsp(246,0) name = var type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f0.setVar("r");
    int _jspx_eval_a_005frichList_005f0 = _jspx_th_a_005frichList_005f0.doStartTag();
    if (_jspx_eval_a_005frichList_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f1(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f0(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f1(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f2(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f3(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f4(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f5(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f6(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f7(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f8(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      if (_jspx_meth_a_005fdataPager_005f0(_jspx_th_a_005frichList_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005frichList_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.reuse(_jspx_th_a_005frichList_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.reuse(_jspx_th_a_005frichList_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f1 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f1.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(251,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f1.setName("empty");
    int _jspx_eval_f_005ffacet_005f1 = _jspx_th_f_005ffacet_005f1.doStartTag();
    if (_jspx_eval_f_005ffacet_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputFormat_005f1(_jspx_th_f_005ffacet_005f1, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f1.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputFormat_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputFormat
    org.apache.myfaces.taglib.html.HtmlOutputFormatTag _jspx_th_h_005foutputFormat_005f1 = (org.apache.myfaces.taglib.html.HtmlOutputFormatTag) _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.get(org.apache.myfaces.taglib.html.HtmlOutputFormatTag.class);
    _jspx_th_h_005foutputFormat_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputFormat_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f1);
    // /jsp/browse/browse.jsp(253,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f1.setId("no-space-items");
    // /jsp/browse/browse.jsp(253,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f1.setValue("#{msg.no_space_items}");
    // /jsp/browse/browse.jsp(253,0) name = escape type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f1.setEscape("false");
    // /jsp/browse/browse.jsp(253,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f1.setRendered("#{NavigationBean.searchContext == null}");
    int _jspx_eval_h_005foutputFormat_005f1 = _jspx_th_h_005foutputFormat_005f1.doStartTag();
    if (_jspx_eval_h_005foutputFormat_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f3(_jspx_th_h_005foutputFormat_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputFormat_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.reuse(_jspx_th_h_005foutputFormat_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.reuse(_jspx_th_h_005foutputFormat_005f1);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputFormat_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f3 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f3.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputFormat_005f1);
    // /jsp/browse/browse.jsp(254,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f3.setId("param-cp");
    // /jsp/browse/browse.jsp(254,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f3.setValue("#{msg.create_space}");
    int _jspx_eval_f_005fparam_005f3 = _jspx_th_f_005fparam_005f3.doStartTag();
    if (_jspx_th_f_005fparam_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f0 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(259,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f0.setId("col1");
    // /jsp/browse/browse.jsp(259,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f0.setPrimary("true");
    // /jsp/browse/browse.jsp(259,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f0.setStyle("padding:2px;text-align:left");
    // /jsp/browse/browse.jsp(259,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f0.setRendered("#{BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f0 = _jspx_th_a_005fcolumn_005f0.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f2(_jspx_th_a_005fcolumn_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f3(_jspx_th_a_005fcolumn_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f15(_jspx_th_a_005fcolumn_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f0(_jspx_th_a_005fcolumn_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f2 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f2.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f0);
    // /jsp/browse/browse.jsp(260,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f2.setName("header");
    int _jspx_eval_f_005ffacet_005f2 = _jspx_th_f_005ffacet_005f2.doStartTag();
    if (_jspx_eval_f_005ffacet_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f0(_jspx_th_f_005ffacet_005f2, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f2.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f0 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f2);
    // /jsp/browse/browse.jsp(261,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f0.setId("col1-sort");
    // /jsp/browse/browse.jsp(261,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f0.setLabel("#{msg.name}");
    // /jsp/browse/browse.jsp(261,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f0.setValue("name");
    // /jsp/browse/browse.jsp(261,0) name = mode type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f0.setMode("case-insensitive");
    // /jsp/browse/browse.jsp(261,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f0.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f0 = _jspx_th_a_005fsortLink_005f0.doStartTag();
    if (_jspx_th_a_005fsortLink_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f0);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f3 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f3.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f0);
    // /jsp/browse/browse.jsp(263,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f3.setName("small-icon");
    int _jspx_eval_f_005ffacet_005f3 = _jspx_th_f_005ffacet_005f3.doStartTag();
    if (_jspx_eval_f_005ffacet_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f14(_jspx_th_f_005ffacet_005f3, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f3.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f14(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f14 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f14.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f14.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f3);
    // /jsp/browse/browse.jsp(264,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f14.setId("col1-act1");
    // /jsp/browse/browse.jsp(264,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f14.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(264,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f14.setImage("/images/icons/#{r.smallIcon}.gif");
    // /jsp/browse/browse.jsp(264,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f14.setActionListener("#{BrowseBean.clickSpace}");
    // /jsp/browse/browse.jsp(264,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f14.setShowLink("false");
    int _jspx_eval_a_005factionLink_005f14 = _jspx_th_a_005factionLink_005f14.doStartTag();
    if (_jspx_eval_a_005factionLink_005f14 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f4(_jspx_th_a_005factionLink_005f14, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f14.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f14);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f14);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f14, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f4 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f4.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f14);
    // /jsp/browse/browse.jsp(265,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f4.setName("id");
    // /jsp/browse/browse.jsp(265,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f4.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(265,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f4.setId("param3");
    int _jspx_eval_f_005fparam_005f4 = _jspx_th_f_005fparam_005f4.doStartTag();
    if (_jspx_th_f_005fparam_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f15(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f15 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f15.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f15.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f0);
    // /jsp/browse/browse.jsp(268,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f15.setId("col1-act2");
    // /jsp/browse/browse.jsp(268,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f15.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(268,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f15.setActionListener("#{BrowseBean.clickSpace}");
    int _jspx_eval_a_005factionLink_005f15 = _jspx_th_a_005factionLink_005f15.doStartTag();
    if (_jspx_eval_a_005factionLink_005f15 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f5(_jspx_th_a_005factionLink_005f15, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f15.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f15);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f15);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f15, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f5 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f5.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f15);
    // /jsp/browse/browse.jsp(269,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f5.setName("id");
    // /jsp/browse/browse.jsp(269,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f5.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(269,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f5.setId("param4");
    int _jspx_eval_f_005fparam_005f5 = _jspx_th_f_005fparam_005f5.doStartTag();
    if (_jspx_th_f_005fparam_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f5);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f0 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f0);
    // /jsp/browse/browse.jsp(271,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f0.setId("col1-info");
    // /jsp/browse/browse.jsp(271,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f0.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f0 = _jspx_th_r_005fnodeInfo_005f0.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f0 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f2(_jspx_th_r_005fnodeInfo_005f0, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f2 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f0);
    // /jsp/browse/browse.jsp(272,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setId("col1-img");
    // /jsp/browse/browse.jsp(272,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(272,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(272,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setWidth("16");
    // /jsp/browse/browse.jsp(272,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f2.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f2 = _jspx_th_h_005fgraphicImage_005f2.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f1 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(277,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f1.setId("col2");
    // /jsp/browse/browse.jsp(277,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f1.setPrimary("true");
    // /jsp/browse/browse.jsp(277,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f1.setStyle("padding:2px;text-align:left;vertical-align:top;");
    // /jsp/browse/browse.jsp(277,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f1.setRendered("#{BrowseBean.browseViewMode == 'icons'}");
    int _jspx_eval_a_005fcolumn_005f1 = _jspx_th_a_005fcolumn_005f1.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f4(_jspx_th_a_005fcolumn_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f17(_jspx_th_a_005fcolumn_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f1(_jspx_th_a_005fcolumn_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f1);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f4 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f4.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f1);
    // /jsp/browse/browse.jsp(278,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f4.setName("large-icon");
    int _jspx_eval_f_005ffacet_005f4 = _jspx_th_f_005ffacet_005f4.doStartTag();
    if (_jspx_eval_f_005ffacet_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f16(_jspx_th_f_005ffacet_005f4, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f4.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f16(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f16 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f16.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f16.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f4);
    // /jsp/browse/browse.jsp(279,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f16.setId("col2-act1");
    // /jsp/browse/browse.jsp(279,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f16.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(279,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f16.setImage("/images/icons/#{r.icon}.gif");
    // /jsp/browse/browse.jsp(279,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f16.setActionListener("#{BrowseBean.clickSpace}");
    // /jsp/browse/browse.jsp(279,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f16.setShowLink("false");
    int _jspx_eval_a_005factionLink_005f16 = _jspx_th_a_005factionLink_005f16.doStartTag();
    if (_jspx_eval_a_005factionLink_005f16 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f6(_jspx_th_a_005factionLink_005f16, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f16.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f16);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f16);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f16, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f6 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f6.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f16);
    // /jsp/browse/browse.jsp(280,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f6.setName("id");
    // /jsp/browse/browse.jsp(280,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f6.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(280,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f6.setId("param5");
    int _jspx_eval_f_005fparam_005f6 = _jspx_th_f_005fparam_005f6.doStartTag();
    if (_jspx_th_f_005fparam_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f17(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f17 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f17.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f17.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f1);
    // /jsp/browse/browse.jsp(283,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f17.setId("col2-act2");
    // /jsp/browse/browse.jsp(283,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f17.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(283,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f17.setActionListener("#{BrowseBean.clickSpace}");
    // /jsp/browse/browse.jsp(283,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f17.setStyleClass("header");
    int _jspx_eval_a_005factionLink_005f17 = _jspx_th_a_005factionLink_005f17.doStartTag();
    if (_jspx_eval_a_005factionLink_005f17 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f7(_jspx_th_a_005factionLink_005f17, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f17.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f17);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f17);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f7 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f7.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f17);
    // /jsp/browse/browse.jsp(284,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f7.setName("id");
    // /jsp/browse/browse.jsp(284,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f7.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(284,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f7.setId("param6");
    int _jspx_eval_f_005fparam_005f7 = _jspx_th_f_005fparam_005f7.doStartTag();
    if (_jspx_th_f_005fparam_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f7);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f1 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f1.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f1);
    // /jsp/browse/browse.jsp(286,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f1.setId("col2-info");
    // /jsp/browse/browse.jsp(286,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f1.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f1 = _jspx_th_r_005fnodeInfo_005f1.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f3(_jspx_th_r_005fnodeInfo_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f3 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f3.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f1);
    // /jsp/browse/browse.jsp(287,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setId("col2-img");
    // /jsp/browse/browse.jsp(287,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(287,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(287,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setWidth("16");
    // /jsp/browse/browse.jsp(287,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f3.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f3 = _jspx_th_h_005fgraphicImage_005f3.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f2 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(292,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f2.setId("col3");
    // /jsp/browse/browse.jsp(292,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f2.setPrimary("true");
    // /jsp/browse/browse.jsp(292,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f2.setStyle("padding:2px;text-align:left");
    // /jsp/browse/browse.jsp(292,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f2.setRendered("#{BrowseBean.browseViewMode == 'list'}");
    int _jspx_eval_a_005fcolumn_005f2 = _jspx_th_a_005fcolumn_005f2.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f5(_jspx_th_a_005fcolumn_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f19(_jspx_th_a_005fcolumn_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f2(_jspx_th_a_005fcolumn_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f2);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f5 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f5.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f2);
    // /jsp/browse/browse.jsp(293,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f5.setName("large-icon");
    int _jspx_eval_f_005ffacet_005f5 = _jspx_th_f_005ffacet_005f5.doStartTag();
    if (_jspx_eval_f_005ffacet_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f18(_jspx_th_f_005ffacet_005f5, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f5.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f18(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f18 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f18.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f18.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f5);
    // /jsp/browse/browse.jsp(294,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f18.setId("col3-act1");
    // /jsp/browse/browse.jsp(294,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f18.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(294,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f18.setImage("/images/icons/#{r.icon}.gif");
    // /jsp/browse/browse.jsp(294,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f18.setActionListener("#{BrowseBean.clickSpace}");
    // /jsp/browse/browse.jsp(294,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f18.setShowLink("false");
    int _jspx_eval_a_005factionLink_005f18 = _jspx_th_a_005factionLink_005f18.doStartTag();
    if (_jspx_eval_a_005factionLink_005f18 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f8(_jspx_th_a_005factionLink_005f18, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f18.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f18);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fshowLink_005fimage_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f18);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f18, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f8 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f8.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f18);
    // /jsp/browse/browse.jsp(295,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f8.setName("id");
    // /jsp/browse/browse.jsp(295,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f8.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(295,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f8.setId("param7");
    int _jspx_eval_f_005fparam_005f8 = _jspx_th_f_005fparam_005f8.doStartTag();
    if (_jspx_th_f_005fparam_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f8);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f19(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f19 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f19.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f19.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f2);
    // /jsp/browse/browse.jsp(298,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f19.setId("col3-act2");
    // /jsp/browse/browse.jsp(298,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f19.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(298,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f19.setActionListener("#{BrowseBean.clickSpace}");
    // /jsp/browse/browse.jsp(298,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f19.setStyleClass("title");
    int _jspx_eval_a_005factionLink_005f19 = _jspx_th_a_005factionLink_005f19.doStartTag();
    if (_jspx_eval_a_005factionLink_005f19 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f9(_jspx_th_a_005factionLink_005f19, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005factionLink_005f19.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f19);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fstyleClass_005fid_005factionListener.reuse(_jspx_th_a_005factionLink_005f19);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005factionLink_005f19, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f9 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f9.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005factionLink_005f19);
    // /jsp/browse/browse.jsp(299,0) name = name type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f9.setName("id");
    // /jsp/browse/browse.jsp(299,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f9.setValue("#{r.id}");
    // /jsp/browse/browse.jsp(299,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f9.setId("param8");
    int _jspx_eval_f_005fparam_005f9 = _jspx_th_f_005fparam_005f9.doStartTag();
    if (_jspx_th_f_005fparam_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fname_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f9);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f2 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f2.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f2);
    // /jsp/browse/browse.jsp(301,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f2.setId("col3-info");
    // /jsp/browse/browse.jsp(301,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f2.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f2 = _jspx_th_r_005fnodeInfo_005f2.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f4(_jspx_th_r_005fnodeInfo_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f4 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f4.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f2);
    // /jsp/browse/browse.jsp(302,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setId("col3-img");
    // /jsp/browse/browse.jsp(302,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(302,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(302,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setWidth("16");
    // /jsp/browse/browse.jsp(302,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f4.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f4 = _jspx_th_h_005fgraphicImage_005f4.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f3 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(307,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f3.setId("col4");
    // /jsp/browse/browse.jsp(307,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f3.setStyle("text-align:left");
    int _jspx_eval_a_005fcolumn_005f3 = _jspx_th_a_005fcolumn_005f3.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f6(_jspx_th_a_005fcolumn_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f10(_jspx_th_a_005fcolumn_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.reuse(_jspx_th_a_005fcolumn_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.reuse(_jspx_th_a_005fcolumn_005f3);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f6 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f6.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f3);
    // /jsp/browse/browse.jsp(308,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f6.setName("header");
    int _jspx_eval_f_005ffacet_005f6 = _jspx_th_f_005ffacet_005f6.doStartTag();
    if (_jspx_eval_f_005ffacet_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f1(_jspx_th_f_005ffacet_005f6, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f6.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f1 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f6);
    // /jsp/browse/browse.jsp(309,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f1.setId("col4-sort");
    // /jsp/browse/browse.jsp(309,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f1.setLabel("#{msg.description}");
    // /jsp/browse/browse.jsp(309,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f1.setValue("description");
    // /jsp/browse/browse.jsp(309,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f1.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f1 = _jspx_th_a_005fsortLink_005f1.doStartTag();
    if (_jspx_th_a_005fsortLink_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f10 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f10.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f3);
    // /jsp/browse/browse.jsp(311,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f10.setId("col4-txt");
    // /jsp/browse/browse.jsp(311,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f10.setValue("#{r.description}");
    int _jspx_eval_h_005foutputText_005f10 = _jspx_th_h_005foutputText_005f10.doStartTag();
    if (_jspx_th_h_005foutputText_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f10);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f4 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(315,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f4.setId("col5");
    // /jsp/browse/browse.jsp(315,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f4.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(315,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f4.setRendered("#{NavigationBean.searchContext != null && BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f4 = _jspx_th_a_005fcolumn_005f4.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f7(_jspx_th_a_005fcolumn_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodePath_005f0(_jspx_th_a_005fcolumn_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f4);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f7 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f7.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f4);
    // /jsp/browse/browse.jsp(316,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f7.setName("header");
    int _jspx_eval_f_005ffacet_005f7 = _jspx_th_f_005ffacet_005f7.doStartTag();
    if (_jspx_eval_f_005ffacet_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f2(_jspx_th_f_005ffacet_005f7, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f7.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f2 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f7);
    // /jsp/browse/browse.jsp(317,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f2.setId("col5-sort");
    // /jsp/browse/browse.jsp(317,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f2.setLabel("#{msg.path}");
    // /jsp/browse/browse.jsp(317,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f2.setValue("displayPath");
    // /jsp/browse/browse.jsp(317,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f2.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f2 = _jspx_th_a_005fsortLink_005f2.doStartTag();
    if (_jspx_th_a_005fsortLink_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f2);
    return false;
  }

  private boolean _jspx_meth_r_005fnodePath_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodePath
    org.alfresco.web.ui.repo.tag.NodePathTag _jspx_th_r_005fnodePath_005f0 = (org.alfresco.web.ui.repo.tag.NodePathTag) _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.repo.tag.NodePathTag.class);
    _jspx_th_r_005fnodePath_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodePath_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f4);
    // /jsp/browse/browse.jsp(319,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f0.setId("col5-path");
    // /jsp/browse/browse.jsp(319,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f0.setValue("#{r.path}");
    // /jsp/browse/browse.jsp(319,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f0.setActionListener("#{BrowseBean.clickSpacePath}");
    int _jspx_eval_r_005fnodePath_005f0 = _jspx_th_r_005fnodePath_005f0.doStartTag();
    if (_jspx_th_r_005fnodePath_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodePath_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodePath_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f5 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(323,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f5.setId("col6");
    // /jsp/browse/browse.jsp(323,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f5.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(323,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f5.setRendered("#{BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f5 = _jspx_th_a_005fcolumn_005f5.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f8(_jspx_th_a_005fcolumn_005f5, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f11(_jspx_th_a_005fcolumn_005f5, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f5);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f8 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f8.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f5);
    // /jsp/browse/browse.jsp(324,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f8.setName("header");
    int _jspx_eval_f_005ffacet_005f8 = _jspx_th_f_005ffacet_005f8.doStartTag();
    if (_jspx_eval_f_005ffacet_005f8 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f3(_jspx_th_f_005ffacet_005f8, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f8.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f8);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f3 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f8);
    // /jsp/browse/browse.jsp(325,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f3.setId("col6-sort");
    // /jsp/browse/browse.jsp(325,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f3.setLabel("#{msg.created}");
    // /jsp/browse/browse.jsp(325,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f3.setValue("created");
    // /jsp/browse/browse.jsp(325,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f3.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f3 = _jspx_th_a_005fsortLink_005f3.doStartTag();
    if (_jspx_th_a_005fsortLink_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f11 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f11.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f5);
    // /jsp/browse/browse.jsp(327,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f11.setId("col6-txt");
    // /jsp/browse/browse.jsp(327,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f11.setValue("#{r.created}");
    int _jspx_eval_h_005foutputText_005f11 = _jspx_th_h_005foutputText_005f11.doStartTag();
    if (_jspx_eval_h_005foutputText_005f11 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fconvertXMLDate_005f0(_jspx_th_h_005foutputText_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputText_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f11);
    return false;
  }

  private boolean _jspx_meth_a_005fconvertXMLDate_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputText_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:convertXMLDate
    org.alfresco.web.ui.common.tag.XMLDateConverterTag _jspx_th_a_005fconvertXMLDate_005f0 = (org.alfresco.web.ui.common.tag.XMLDateConverterTag) _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.get(org.alfresco.web.ui.common.tag.XMLDateConverterTag.class);
    _jspx_th_a_005fconvertXMLDate_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fconvertXMLDate_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputText_005f11);
    // /jsp/browse/browse.jsp(328,0) name = type type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f0.setType("both");
    // /jsp/browse/browse.jsp(328,0) name = pattern type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f0.setPattern("#{msg.date_time_pattern}");
    int _jspx_eval_a_005fconvertXMLDate_005f0 = _jspx_th_a_005fconvertXMLDate_005f0.doStartTag();
    if (_jspx_th_a_005fconvertXMLDate_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f6 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(333,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f6.setId("col7");
    // /jsp/browse/browse.jsp(333,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f6.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(333,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f6.setRendered("#{BrowseBean.browseViewMode == 'details' || BrowseBean.browseViewMode == 'icons'}");
    int _jspx_eval_a_005fcolumn_005f6 = _jspx_th_a_005fcolumn_005f6.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f9(_jspx_th_a_005fcolumn_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f12(_jspx_th_a_005fcolumn_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f6);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f9 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f9.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f6);
    // /jsp/browse/browse.jsp(334,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f9.setName("header");
    int _jspx_eval_f_005ffacet_005f9 = _jspx_th_f_005ffacet_005f9.doStartTag();
    if (_jspx_eval_f_005ffacet_005f9 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f4(_jspx_th_f_005ffacet_005f9, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f9.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f9);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f4 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f9);
    // /jsp/browse/browse.jsp(335,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f4.setId("col7-sort");
    // /jsp/browse/browse.jsp(335,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f4.setLabel("#{msg.modified}");
    // /jsp/browse/browse.jsp(335,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f4.setValue("modified");
    // /jsp/browse/browse.jsp(335,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f4.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f4 = _jspx_th_a_005fsortLink_005f4.doStartTag();
    if (_jspx_th_a_005fsortLink_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f12(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f12 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f12.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f12.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f6);
    // /jsp/browse/browse.jsp(337,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f12.setId("col7-txt");
    // /jsp/browse/browse.jsp(337,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f12.setValue("#{r.modified}");
    int _jspx_eval_h_005foutputText_005f12 = _jspx_th_h_005foutputText_005f12.doStartTag();
    if (_jspx_eval_h_005foutputText_005f12 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fconvertXMLDate_005f1(_jspx_th_h_005foutputText_005f12, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputText_005f12.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f12);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f12);
    return false;
  }

  private boolean _jspx_meth_a_005fconvertXMLDate_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputText_005f12, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:convertXMLDate
    org.alfresco.web.ui.common.tag.XMLDateConverterTag _jspx_th_a_005fconvertXMLDate_005f1 = (org.alfresco.web.ui.common.tag.XMLDateConverterTag) _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.get(org.alfresco.web.ui.common.tag.XMLDateConverterTag.class);
    _jspx_th_a_005fconvertXMLDate_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fconvertXMLDate_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputText_005f12);
    // /jsp/browse/browse.jsp(338,0) name = type type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f1.setType("both");
    // /jsp/browse/browse.jsp(338,0) name = pattern type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f1.setPattern("#{msg.date_time_pattern}");
    int _jspx_eval_a_005fconvertXMLDate_005f1 = _jspx_th_a_005fconvertXMLDate_005f1.doStartTag();
    if (_jspx_th_a_005fconvertXMLDate_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f7 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(343,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f7.setId("col8");
    // /jsp/browse/browse.jsp(343,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f7.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(343,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f7.setRendered("#{BrowseBean.browseViewMode == 'list'}");
    int _jspx_eval_a_005fcolumn_005f7 = _jspx_th_a_005fcolumn_005f7.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeDescendants_005f0(_jspx_th_a_005fcolumn_005f7, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f7);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeDescendants_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeDescendants
    org.alfresco.web.ui.repo.tag.NodeDescendantsTag _jspx_th_r_005fnodeDescendants_005f0 = (org.alfresco.web.ui.repo.tag.NodeDescendantsTag) _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.repo.tag.NodeDescendantsTag.class);
    _jspx_th_r_005fnodeDescendants_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeDescendants_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f7);
    // /jsp/browse/browse.jsp(344,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeDescendants_005f0.setId("col8-kids");
    // /jsp/browse/browse.jsp(344,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeDescendants_005f0.setValue("#{r.nodeRef}");
    // /jsp/browse/browse.jsp(344,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeDescendants_005f0.setStyleClass("header");
    // /jsp/browse/browse.jsp(344,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeDescendants_005f0.setActionListener("#{BrowseBean.clickDescendantSpace}");
    int _jspx_eval_r_005fnodeDescendants_005f0 = _jspx_th_r_005fnodeDescendants_005f0.doStartTag();
    if (_jspx_th_r_005fnodeDescendants_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodeDescendants_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeDescendants_0026_005fvalue_005fstyleClass_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodeDescendants_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f8 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f8.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(348,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f8.setId("col9");
    // /jsp/browse/browse.jsp(348,0) name = actions type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f8.setActions("true");
    // /jsp/browse/browse.jsp(348,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f8.setStyle("text-align:left");
    int _jspx_eval_a_005fcolumn_005f8 = _jspx_th_a_005fcolumn_005f8.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f8 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f10(_jspx_th_a_005fcolumn_005f8, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f3(_jspx_th_a_005fcolumn_005f8, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fmenu_005f3(_jspx_th_a_005fcolumn_005f8, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.reuse(_jspx_th_a_005fcolumn_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.reuse(_jspx_th_a_005fcolumn_005f8);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f10 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f10.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f8);
    // /jsp/browse/browse.jsp(349,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f10.setName("header");
    int _jspx_eval_f_005ffacet_005f10 = _jspx_th_f_005ffacet_005f10.doStartTag();
    if (_jspx_eval_f_005ffacet_005f10 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f13(_jspx_th_f_005ffacet_005f10, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f10.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f10);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f13(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f13 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f13.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f13.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f10);
    // /jsp/browse/browse.jsp(350,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f13.setId("col9-txt");
    // /jsp/browse/browse.jsp(350,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f13.setValue("#{msg.actions}");
    int _jspx_eval_h_005foutputText_005f13 = _jspx_th_h_005foutputText_005f13.doStartTag();
    if (_jspx_th_h_005foutputText_005f13.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f13);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f13);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f3 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f3.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f8);
    // /jsp/browse/browse.jsp(354,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f3.setId("col9-acts1");
    // /jsp/browse/browse.jsp(354,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f3.setValue("space_browse");
    // /jsp/browse/browse.jsp(354,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f3.setContext("#{r}");
    // /jsp/browse/browse.jsp(354,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f3.setShowLink("false");
    // /jsp/browse/browse.jsp(354,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f3.setStyleClass("inlineAction");
    int _jspx_eval_r_005factions_005f3 = _jspx_th_r_005factions_005f3.doStartTag();
    if (_jspx_th_r_005factions_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f8, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f3 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f8);
    // /jsp/browse/browse.jsp(357,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f3.setId("spaces-more-menu");
    // /jsp/browse/browse.jsp(357,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f3.setItemSpacing("4");
    // /jsp/browse/browse.jsp(357,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f3.setImage("/images/icons/more.gif");
    // /jsp/browse/browse.jsp(357,0) name = tooltip type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f3.setTooltip("#{msg.more_actions}");
    // /jsp/browse/browse.jsp(357,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f3.setMenuStyleClass("moreActionsMenu");
    int _jspx_eval_a_005fmenu_005f3 = _jspx_th_a_005fmenu_005f3.doStartTag();
    if (_jspx_eval_a_005fmenu_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f4(_jspx_th_a_005fmenu_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmenu_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f3);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmenu_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f4 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f4.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmenu_005f3);
    // /jsp/browse/browse.jsp(358,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f4.setId("col9-acts2");
    // /jsp/browse/browse.jsp(358,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f4.setValue("space_browse_menu");
    // /jsp/browse/browse.jsp(358,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f4.setContext("#{r}");
    int _jspx_eval_r_005factions_005f4 = _jspx_th_r_005factions_005f4.doStartTag();
    if (_jspx_th_r_005factions_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f4);
    return false;
  }

  private boolean _jspx_meth_a_005fdataPager_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:dataPager
    org.alfresco.web.ui.common.tag.data.DataPagerTag _jspx_th_a_005fdataPager_005f0 = (org.alfresco.web.ui.common.tag.data.DataPagerTag) _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.DataPagerTag.class);
    _jspx_th_a_005fdataPager_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fdataPager_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f0);
    // /jsp/browse/browse.jsp(362,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fdataPager_005f0.setId("pager1");
    // /jsp/browse/browse.jsp(362,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fdataPager_005f0.setStyleClass("pager");
    int _jspx_eval_a_005fdataPager_005f0 = _jspx_th_a_005fdataPager_005f0.doStartTag();
    if (_jspx_th_a_005fdataPager_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_a_005fdataPager_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_a_005fdataPager_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005fpanelGroup_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:panelGroup
    org.apache.myfaces.taglib.html.HtmlPanelGroupTag _jspx_th_h_005fpanelGroup_005f1 = (org.apache.myfaces.taglib.html.HtmlPanelGroupTag) _005fjspx_005ftagPool_005fh_005fpanelGroup_0026_005fid.get(org.apache.myfaces.taglib.html.HtmlPanelGroupTag.class);
    _jspx_th_h_005fpanelGroup_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005fpanelGroup_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(376,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fpanelGroup_005f1.setId("content-panel-facets");
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
        if (_jspx_meth_f_005ffacet_005f11(_jspx_th_h_005fpanelGroup_005f1, _jspx_page_context))
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

  private boolean _jspx_meth_f_005ffacet_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fpanelGroup_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f11 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f11.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fpanelGroup_005f1);
    // /jsp/browse/browse.jsp(377,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f11.setName("title");
    int _jspx_eval_f_005ffacet_005f11 = _jspx_th_f_005ffacet_005f11.doStartTag();
    if (_jspx_eval_f_005ffacet_005f11 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fpanel_005f6(_jspx_th_f_005ffacet_005f11, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f11.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f11);
    return false;
  }

  private boolean _jspx_meth_a_005fpanel_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f6 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f11);
    // /jsp/browse/browse.jsp(378,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f6.setId("page-controls2");
    // /jsp/browse/browse.jsp(378,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f6.setStyle("font-size:9px");
    int _jspx_eval_a_005fpanel_005f6 = _jspx_th_a_005fpanel_005f6.doStartTag();
    if (_jspx_eval_a_005fpanel_005f6 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f14(_jspx_th_a_005fpanel_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005finputText_005f1(_jspx_th_a_005fpanel_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fverbatim_005f2(_jspx_th_a_005fpanel_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f20(_jspx_th_a_005fpanel_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fverbatim_005f3(_jspx_th_a_005fpanel_005f6, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fpanel_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.reuse(_jspx_th_a_005fpanel_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005fstyle_005fid.reuse(_jspx_th_a_005fpanel_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f14(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f14 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f14.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f14.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f6);
    // /jsp/browse/browse.jsp(379,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f14.setValue("#{msg.items_per_page}");
    // /jsp/browse/browse.jsp(379,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f14.setId("items-txt2");
    int _jspx_eval_h_005foutputText_005f14 = _jspx_th_h_005foutputText_005f14.doStartTag();
    if (_jspx_th_h_005foutputText_005f14.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f14);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f14);
    return false;
  }

  private boolean _jspx_meth_h_005finputText_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:inputText
    org.apache.myfaces.taglib.html.HtmlInputTextTag _jspx_th_h_005finputText_005f1 = (org.apache.myfaces.taglib.html.HtmlInputTextTag) _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlInputTextTag.class);
    _jspx_th_h_005finputText_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005finputText_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f6);
    // /jsp/browse/browse.jsp(380,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f1.setId("content-pages");
    // /jsp/browse/browse.jsp(380,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f1.setValue("#{BrowseBean.pageSizeContentStr}");
    // /jsp/browse/browse.jsp(380,0) name = style type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f1.setStyle("width:24px;margin-left:4px");
    // /jsp/browse/browse.jsp(380,0) name = maxlength type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f1.setMaxlength("3");
    // /jsp/browse/browse.jsp(380,0) name = onkeyup type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005finputText_005f1.setOnkeyup("return applySizeContent(event);");
    int _jspx_eval_h_005finputText_005f1 = _jspx_th_h_005finputText_005f1.doStartTag();
    if (_jspx_th_h_005finputText_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005finputText_0026_005fvalue_005fstyle_005fonkeyup_005fmaxlength_005fid_005fnobody.reuse(_jspx_th_h_005finputText_005f1);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f2 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f2.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f6);
    int _jspx_eval_f_005fverbatim_005f2 = _jspx_th_f_005fverbatim_005f2.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f2 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f2.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f2.doInitBody();
      }
      do {
        out.write("<div style=\"display:none\">");
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

  private boolean _jspx_meth_a_005factionLink_005f20(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f20 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f20.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f20.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f6);
    // /jsp/browse/browse.jsp(382,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f20.setId("content-apply");
    // /jsp/browse/browse.jsp(382,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f20.setValue("");
    // /jsp/browse/browse.jsp(382,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f20.setActionListener("#{BrowseBean.updateContentPageSize}");
    int _jspx_eval_a_005factionLink_005f20 = _jspx_th_a_005factionLink_005f20.doStartTag();
    if (_jspx_th_a_005factionLink_005f20.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f20);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_a_005factionLink_005f20);
    return false;
  }

  private boolean _jspx_meth_f_005fverbatim_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f6, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:verbatim
    org.apache.myfaces.taglib.core.VerbatimTag _jspx_th_f_005fverbatim_005f3 = (org.apache.myfaces.taglib.core.VerbatimTag) _005fjspx_005ftagPool_005ff_005fverbatim.get(org.apache.myfaces.taglib.core.VerbatimTag.class);
    _jspx_th_f_005fverbatim_005f3.setPageContext(_jspx_page_context);
    _jspx_th_f_005fverbatim_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f6);
    int _jspx_eval_f_005fverbatim_005f3 = _jspx_th_f_005fverbatim_005f3.doStartTag();
    if (_jspx_eval_f_005fverbatim_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      if (_jspx_eval_f_005fverbatim_005f3 != javax.servlet.jsp.tagext.Tag.EVAL_BODY_INCLUDE) {
        out = _jspx_page_context.pushBody();
        _jspx_th_f_005fverbatim_005f3.setBodyContent((javax.servlet.jsp.tagext.BodyContent) out);
        _jspx_th_f_005fverbatim_005f3.doInitBody();
      }
      do {
        out.write("</div>");
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

  private boolean _jspx_meth_a_005fpanel_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:panel
    org.alfresco.web.ui.common.tag.PanelTag _jspx_th_a_005fpanel_005f7 = (org.alfresco.web.ui.common.tag.PanelTag) _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.get(org.alfresco.web.ui.common.tag.PanelTag.class);
    _jspx_th_a_005fpanel_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005fpanel_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(387,0) name = id type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setId("content-panel");
    // /jsp/browse/browse.jsp(387,0) name = border type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setBorder("white");
    // /jsp/browse/browse.jsp(387,0) name = bgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setBgcolor("white");
    // /jsp/browse/browse.jsp(387,0) name = titleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setTitleBorder("lbgrey");
    // /jsp/browse/browse.jsp(387,0) name = expandedTitleBorder type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setExpandedTitleBorder("dotted");
    // /jsp/browse/browse.jsp(387,0) name = titleBgcolor type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setTitleBgcolor("white");
    // /jsp/browse/browse.jsp(387,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setStyleClass("mainSubTitle");
    // /jsp/browse/browse.jsp(387,0) name = label type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setLabel("#{msg.browse_content}");
    // /jsp/browse/browse.jsp(387,0) name = progressive type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setProgressive("true");
    // /jsp/browse/browse.jsp(387,0) name = facetsId type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setFacetsId("content-panel-facets");
    // /jsp/browse/browse.jsp(387,0) name = expanded type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setExpanded("#{BrowseBean.panels[\"content-panel\"]}");
    // /jsp/browse/browse.jsp(387,0) name = expandedActionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fpanel_005f7.setExpandedActionListener("#{BrowseBean.expandPanel}");
    int _jspx_eval_a_005fpanel_005f7 = _jspx_th_a_005fpanel_005f7.doStartTag();
    if (_jspx_eval_a_005fpanel_005f7 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005frichList_005f1(_jspx_th_a_005fpanel_005f7, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
    }
    if (_jspx_th_a_005fpanel_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fpanel_0026_005ftitleBorder_005ftitleBgcolor_005fstyleClass_005fprogressive_005flabel_005fid_005ffacetsId_005fexpandedTitleBorder_005fexpandedActionListener_005fexpanded_005fborder_005fbgcolor.reuse(_jspx_th_a_005fpanel_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005frichList_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fpanel_005f7, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:richList
    org.alfresco.web.ui.common.tag.data.RichListTag _jspx_th_a_005frichList_005f1 = (org.alfresco.web.ui.common.tag.data.RichListTag) _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.get(org.alfresco.web.ui.common.tag.data.RichListTag.class);
    _jspx_th_a_005frichList_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005frichList_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fpanel_005f7);
    // /jsp/browse/browse.jsp(392,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setId("contentRichList");
    // /jsp/browse/browse.jsp(392,0) name = binding type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setBinding("#{BrowseBean.contentRichList}");
    // /jsp/browse/browse.jsp(392,0) name = viewMode type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setViewMode("#{BrowseBean.browseViewMode}");
    // /jsp/browse/browse.jsp(392,0) name = pageSize type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setPageSize("#{BrowseBean.pageSizeContent}");
    // /jsp/browse/browse.jsp(392,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setStyleClass("recordSet");
    // /jsp/browse/browse.jsp(392,0) name = headerStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setHeaderStyleClass("recordSetHeader");
    // /jsp/browse/browse.jsp(392,0) name = rowStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setRowStyleClass("recordSetRow");
    // /jsp/browse/browse.jsp(392,0) name = altRowStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setAltRowStyleClass("recordSetRowAlt");
    // /jsp/browse/browse.jsp(392,0) name = width type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setWidth("100%");
    // /jsp/browse/browse.jsp(392,0) name = value type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setValue("#{BrowseBean.content}");
    // /jsp/browse/browse.jsp(392,0) name = var type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005frichList_005f1.setVar("r");
    int _jspx_eval_a_005frichList_005f1 = _jspx_th_a_005frichList_005f1.doStartTag();
    if (_jspx_eval_a_005frichList_005f1 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f12(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f9(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f10(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f11(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f12(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f13(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f14(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f15(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f16(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fcolumn_005f17(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      if (_jspx_meth_a_005fdataPager_005f1(_jspx_th_a_005frichList_005f1, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005frichList_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.reuse(_jspx_th_a_005frichList_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005frichList_0026_005fwidth_005fviewMode_005fvar_005fvalue_005fstyleClass_005frowStyleClass_005fpageSize_005fid_005fheaderStyleClass_005fbinding_005faltRowStyleClass.reuse(_jspx_th_a_005frichList_005f1);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f12(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f12 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f12.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f12.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(397,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f12.setName("empty");
    int _jspx_eval_f_005ffacet_005f12 = _jspx_th_f_005ffacet_005f12.doStartTag();
    if (_jspx_eval_f_005ffacet_005f12 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputFormat_005f2(_jspx_th_f_005ffacet_005f12, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f12.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f12.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f12);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f12);
    return false;
  }

  private boolean _jspx_meth_h_005foutputFormat_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f12, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputFormat
    org.apache.myfaces.taglib.html.HtmlOutputFormatTag _jspx_th_h_005foutputFormat_005f2 = (org.apache.myfaces.taglib.html.HtmlOutputFormatTag) _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.get(org.apache.myfaces.taglib.html.HtmlOutputFormatTag.class);
    _jspx_th_h_005foutputFormat_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputFormat_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f12);
    // /jsp/browse/browse.jsp(399,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f2.setId("no-content-items");
    // /jsp/browse/browse.jsp(399,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f2.setValue("#{msg.no_content_items}");
    // /jsp/browse/browse.jsp(399,0) name = escape type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f2.setEscape("false");
    // /jsp/browse/browse.jsp(399,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputFormat_005f2.setRendered("#{NavigationBean.searchContext == null}");
    int _jspx_eval_h_005foutputFormat_005f2 = _jspx_th_h_005foutputFormat_005f2.doStartTag();
    if (_jspx_eval_h_005foutputFormat_005f2 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f10(_jspx_th_h_005foutputFormat_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005fparam_005f11(_jspx_th_h_005foutputFormat_005f2, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputFormat_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.reuse(_jspx_th_h_005foutputFormat_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputFormat_0026_005fvalue_005frendered_005fid_005fescape.reuse(_jspx_th_h_005foutputFormat_005f2);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputFormat_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f10 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f10.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputFormat_005f2);
    // /jsp/browse/browse.jsp(400,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f10.setValue("#{msg.add_content}");
    // /jsp/browse/browse.jsp(400,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f10.setId("param10");
    int _jspx_eval_f_005fparam_005f10 = _jspx_th_f_005fparam_005f10.doStartTag();
    if (_jspx_th_f_005fparam_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f10);
    return false;
  }

  private boolean _jspx_meth_f_005fparam_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputFormat_005f2, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:param
    org.apache.myfaces.taglib.core.ParamTag _jspx_th_f_005fparam_005f11 = (org.apache.myfaces.taglib.core.ParamTag) _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.core.ParamTag.class);
    _jspx_th_f_005fparam_005f11.setPageContext(_jspx_page_context);
    _jspx_th_f_005fparam_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputFormat_005f2);
    // /jsp/browse/browse.jsp(401,0) name = value type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f11.setValue("#{msg.create_content}");
    // /jsp/browse/browse.jsp(401,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005fparam_005f11.setId("param11");
    int _jspx_eval_f_005fparam_005f11 = _jspx_th_f_005fparam_005f11.doStartTag();
    if (_jspx_th_f_005fparam_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005fparam_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_f_005fparam_005f11);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f9 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f9.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(406,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f9.setId("col10");
    // /jsp/browse/browse.jsp(406,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f9.setPrimary("true");
    // /jsp/browse/browse.jsp(406,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f9.setStyle("padding:2px;text-align:left");
    // /jsp/browse/browse.jsp(406,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f9.setRendered("#{BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f9 = _jspx_th_a_005fcolumn_005f9.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f9 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f13(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f14(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f22(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005flockIcon_005f0(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputLabel_005f0(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f3(_jspx_th_a_005fcolumn_005f9, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f9);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f13(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f13 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f13.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f13.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(407,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f13.setName("header");
    int _jspx_eval_f_005ffacet_005f13 = _jspx_th_f_005ffacet_005f13.doStartTag();
    if (_jspx_eval_f_005ffacet_005f13 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f5(_jspx_th_f_005ffacet_005f13, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f13.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f13.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f13);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f13);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f13, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f5 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f5.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f13);
    // /jsp/browse/browse.jsp(408,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f5.setId("col10-sort");
    // /jsp/browse/browse.jsp(408,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f5.setLabel("#{msg.name}");
    // /jsp/browse/browse.jsp(408,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f5.setValue("name");
    // /jsp/browse/browse.jsp(408,0) name = mode type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f5.setMode("case-insensitive");
    // /jsp/browse/browse.jsp(408,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f5.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f5 = _jspx_th_a_005fsortLink_005f5.doStartTag();
    if (_jspx_th_a_005fsortLink_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005fmode_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f5);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f14(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f14 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f14.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f14.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(410,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f14.setName("small-icon");
    int _jspx_eval_f_005ffacet_005f14 = _jspx_th_f_005ffacet_005f14.doStartTag();
    if (_jspx_eval_f_005ffacet_005f14 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f21(_jspx_th_f_005ffacet_005f14, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f14.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f14.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f14);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f14);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f21(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f14, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f21 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f21.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f21.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f14);
    // /jsp/browse/browse.jsp(411,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setId("col10-act1");
    // /jsp/browse/browse.jsp(411,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(411,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(411,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setTarget("new");
    // /jsp/browse/browse.jsp(411,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setImage("#{r.fileType16}");
    // /jsp/browse/browse.jsp(411,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setShowLink("false");
    // /jsp/browse/browse.jsp(411,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f21.setStyleClass("inlineAction");
    int _jspx_eval_a_005factionLink_005f21 = _jspx_th_a_005factionLink_005f21.doStartTag();
    if (_jspx_th_a_005factionLink_005f21.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f21);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f21);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f22(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f22 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f22.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f22.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(413,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f22.setId("col10-act2");
    // /jsp/browse/browse.jsp(413,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f22.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(413,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f22.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(413,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f22.setTarget("new");
    int _jspx_eval_a_005factionLink_005f22 = _jspx_th_a_005factionLink_005f22.doStartTag();
    if (_jspx_th_a_005factionLink_005f22.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f22);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f22);
    return false;
  }

  private boolean _jspx_meth_r_005flockIcon_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:lockIcon
    org.alfresco.web.ui.repo.tag.LockIconTag _jspx_th_r_005flockIcon_005f0 = (org.alfresco.web.ui.repo.tag.LockIconTag) _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.get(org.alfresco.web.ui.repo.tag.LockIconTag.class);
    _jspx_th_r_005flockIcon_005f0.setPageContext(_jspx_page_context);
    _jspx_th_r_005flockIcon_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(414,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f0.setId("col10-lock");
    // /jsp/browse/browse.jsp(414,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f0.setValue("#{r.nodeRef}");
    // /jsp/browse/browse.jsp(414,0) name = align type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f0.setAlign("absmiddle");
    int _jspx_eval_r_005flockIcon_005f0 = _jspx_th_r_005flockIcon_005f0.doStartTag();
    if (_jspx_th_r_005flockIcon_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f0);
    return false;
  }

  private boolean _jspx_meth_h_005foutputLabel_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputLabel
    org.apache.myfaces.taglib.html.HtmlOutputLabelTag _jspx_th_h_005foutputLabel_005f0 = (org.apache.myfaces.taglib.html.HtmlOutputLabelTag) _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputLabelTag.class);
    _jspx_th_h_005foutputLabel_005f0.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputLabel_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(415,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f0.setId("col10-lang");
    // /jsp/browse/browse.jsp(415,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f0.setValue("#{r.lang}");
    // /jsp/browse/browse.jsp(415,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f0.setStyleClass("langCode");
    // /jsp/browse/browse.jsp(415,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f0.setRendered("#{r.lang != null}");
    int _jspx_eval_h_005foutputLabel_005f0 = _jspx_th_h_005foutputLabel_005f0.doStartTag();
    if (_jspx_th_h_005foutputLabel_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f0);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f9, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f3 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f3.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f9);
    // /jsp/browse/browse.jsp(416,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f3.setId("col10-info");
    // /jsp/browse/browse.jsp(416,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f3.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f3 = _jspx_th_r_005fnodeInfo_005f3.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f3 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f5(_jspx_th_r_005fnodeInfo_005f3, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f3);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f3, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f5 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f5.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f3);
    // /jsp/browse/browse.jsp(417,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setId("col10-img");
    // /jsp/browse/browse.jsp(417,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(417,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(417,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setWidth("16");
    // /jsp/browse/browse.jsp(417,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f5.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f5 = _jspx_th_h_005fgraphicImage_005f5.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f10 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f10.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(422,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f10.setId("col11");
    // /jsp/browse/browse.jsp(422,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f10.setPrimary("true");
    // /jsp/browse/browse.jsp(422,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f10.setStyle("padding:2px;text-align:left;vertical-align:top;");
    // /jsp/browse/browse.jsp(422,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f10.setRendered("#{BrowseBean.browseViewMode == 'icons'}");
    int _jspx_eval_a_005fcolumn_005f10 = _jspx_th_a_005fcolumn_005f10.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f10 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f15(_jspx_th_a_005fcolumn_005f10, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f24(_jspx_th_a_005fcolumn_005f10, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005flockIcon_005f1(_jspx_th_a_005fcolumn_005f10, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputLabel_005f1(_jspx_th_a_005fcolumn_005f10, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f4(_jspx_th_a_005fcolumn_005f10, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f10);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f15(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f15 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f15.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f15.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f10);
    // /jsp/browse/browse.jsp(423,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f15.setName("large-icon");
    int _jspx_eval_f_005ffacet_005f15 = _jspx_th_f_005ffacet_005f15.doStartTag();
    if (_jspx_eval_f_005ffacet_005f15 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f23(_jspx_th_f_005ffacet_005f15, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f15.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f15.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f15);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f15);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f23(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f15, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f23 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f23.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f23.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f15);
    // /jsp/browse/browse.jsp(424,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setId("col11-act1");
    // /jsp/browse/browse.jsp(424,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(424,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(424,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setTarget("new");
    // /jsp/browse/browse.jsp(424,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setImage("#{r.fileType32}");
    // /jsp/browse/browse.jsp(424,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setShowLink("false");
    // /jsp/browse/browse.jsp(424,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f23.setStyleClass("inlineAction");
    int _jspx_eval_a_005factionLink_005f23 = _jspx_th_a_005factionLink_005f23.doStartTag();
    if (_jspx_th_a_005factionLink_005f23.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f23);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f23);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f24(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f24 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f24.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f24.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f10);
    // /jsp/browse/browse.jsp(426,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f24.setId("col11-act2");
    // /jsp/browse/browse.jsp(426,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f24.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(426,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f24.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(426,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f24.setTarget("new");
    // /jsp/browse/browse.jsp(426,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f24.setStyleClass("header");
    int _jspx_eval_a_005factionLink_005f24 = _jspx_th_a_005factionLink_005f24.doStartTag();
    if (_jspx_th_a_005factionLink_005f24.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f24);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f24);
    return false;
  }

  private boolean _jspx_meth_r_005flockIcon_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:lockIcon
    org.alfresco.web.ui.repo.tag.LockIconTag _jspx_th_r_005flockIcon_005f1 = (org.alfresco.web.ui.repo.tag.LockIconTag) _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.get(org.alfresco.web.ui.repo.tag.LockIconTag.class);
    _jspx_th_r_005flockIcon_005f1.setPageContext(_jspx_page_context);
    _jspx_th_r_005flockIcon_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f10);
    // /jsp/browse/browse.jsp(427,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f1.setId("col11-lock");
    // /jsp/browse/browse.jsp(427,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f1.setValue("#{r.nodeRef}");
    // /jsp/browse/browse.jsp(427,0) name = align type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f1.setAlign("absmiddle");
    int _jspx_eval_r_005flockIcon_005f1 = _jspx_th_r_005flockIcon_005f1.doStartTag();
    if (_jspx_th_r_005flockIcon_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f1);
    return false;
  }

  private boolean _jspx_meth_h_005foutputLabel_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputLabel
    org.apache.myfaces.taglib.html.HtmlOutputLabelTag _jspx_th_h_005foutputLabel_005f1 = (org.apache.myfaces.taglib.html.HtmlOutputLabelTag) _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputLabelTag.class);
    _jspx_th_h_005foutputLabel_005f1.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputLabel_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f10);
    // /jsp/browse/browse.jsp(428,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f1.setId("col11-lang");
    // /jsp/browse/browse.jsp(428,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f1.setValue("#{r.lang}");
    // /jsp/browse/browse.jsp(428,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f1.setStyleClass("langCode");
    // /jsp/browse/browse.jsp(428,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f1.setRendered("#{r.lang != null}");
    int _jspx_eval_h_005foutputLabel_005f1 = _jspx_th_h_005foutputLabel_005f1.doStartTag();
    if (_jspx_th_h_005foutputLabel_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f1);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f10, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f4 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f4.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f10);
    // /jsp/browse/browse.jsp(429,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f4.setId("col11-info");
    // /jsp/browse/browse.jsp(429,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f4.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f4 = _jspx_th_r_005fnodeInfo_005f4.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f6(_jspx_th_r_005fnodeInfo_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f4);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f6 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f6.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f4);
    // /jsp/browse/browse.jsp(430,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setId("col11-img");
    // /jsp/browse/browse.jsp(430,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(430,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(430,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setWidth("16");
    // /jsp/browse/browse.jsp(430,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f6.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f6 = _jspx_th_h_005fgraphicImage_005f6.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f11(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f11 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f11.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f11.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(435,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f11.setId("col12");
    // /jsp/browse/browse.jsp(435,0) name = primary type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f11.setPrimary("true");
    // /jsp/browse/browse.jsp(435,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f11.setStyle("padding:2px;text-align:left");
    // /jsp/browse/browse.jsp(435,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f11.setRendered("#{BrowseBean.browseViewMode == 'list'}");
    int _jspx_eval_a_005fcolumn_005f11 = _jspx_th_a_005fcolumn_005f11.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f11 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f16(_jspx_th_a_005fcolumn_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005factionLink_005f26(_jspx_th_a_005fcolumn_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005flockIcon_005f2(_jspx_th_a_005fcolumn_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputLabel_005f2(_jspx_th_a_005fcolumn_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodeInfo_005f5(_jspx_th_a_005fcolumn_005f11, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f11.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f11);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fprimary_005fid.reuse(_jspx_th_a_005fcolumn_005f11);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f16(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f16 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f16.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f16.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f11);
    // /jsp/browse/browse.jsp(436,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f16.setName("large-icon");
    int _jspx_eval_f_005ffacet_005f16 = _jspx_th_f_005ffacet_005f16.doStartTag();
    if (_jspx_eval_f_005ffacet_005f16 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005factionLink_005f25(_jspx_th_f_005ffacet_005f16, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f16.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f16.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f16);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f16);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f25(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f16, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f25 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f25.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f25.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f16);
    // /jsp/browse/browse.jsp(437,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setId("col12-act1");
    // /jsp/browse/browse.jsp(437,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(437,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(437,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setTarget("new");
    // /jsp/browse/browse.jsp(437,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setImage("#{r.fileType32}");
    // /jsp/browse/browse.jsp(437,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setShowLink("false");
    // /jsp/browse/browse.jsp(437,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f25.setStyleClass("inlineAction");
    int _jspx_eval_a_005factionLink_005f25 = _jspx_th_a_005factionLink_005f25.doStartTag();
    if (_jspx_th_a_005factionLink_005f25.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f25);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fshowLink_005fimage_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f25);
    return false;
  }

  private boolean _jspx_meth_a_005factionLink_005f26(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:actionLink
    org.alfresco.web.ui.common.tag.ActionLinkTag _jspx_th_a_005factionLink_005f26 = (org.alfresco.web.ui.common.tag.ActionLinkTag) _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.get(org.alfresco.web.ui.common.tag.ActionLinkTag.class);
    _jspx_th_a_005factionLink_005f26.setPageContext(_jspx_page_context);
    _jspx_th_a_005factionLink_005f26.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f11);
    // /jsp/browse/browse.jsp(439,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f26.setId("col12-act2");
    // /jsp/browse/browse.jsp(439,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f26.setValue("#{r.name}");
    // /jsp/browse/browse.jsp(439,0) name = href type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f26.setHref("#{r.url}");
    // /jsp/browse/browse.jsp(439,0) name = target type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f26.setTarget("new");
    // /jsp/browse/browse.jsp(439,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005factionLink_005f26.setStyleClass("title");
    int _jspx_eval_a_005factionLink_005f26 = _jspx_th_a_005factionLink_005f26.doStartTag();
    if (_jspx_th_a_005factionLink_005f26.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f26);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005factionLink_0026_005fvalue_005ftarget_005fstyleClass_005fid_005fhref_005fnobody.reuse(_jspx_th_a_005factionLink_005f26);
    return false;
  }

  private boolean _jspx_meth_r_005flockIcon_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:lockIcon
    org.alfresco.web.ui.repo.tag.LockIconTag _jspx_th_r_005flockIcon_005f2 = (org.alfresco.web.ui.repo.tag.LockIconTag) _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.get(org.alfresco.web.ui.repo.tag.LockIconTag.class);
    _jspx_th_r_005flockIcon_005f2.setPageContext(_jspx_page_context);
    _jspx_th_r_005flockIcon_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f11);
    // /jsp/browse/browse.jsp(440,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f2.setId("col12-lock");
    // /jsp/browse/browse.jsp(440,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f2.setValue("#{r.nodeRef}");
    // /jsp/browse/browse.jsp(440,0) name = align type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005flockIcon_005f2.setAlign("absmiddle");
    int _jspx_eval_r_005flockIcon_005f2 = _jspx_th_r_005flockIcon_005f2.doStartTag();
    if (_jspx_th_r_005flockIcon_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005flockIcon_0026_005fvalue_005fid_005falign_005fnobody.reuse(_jspx_th_r_005flockIcon_005f2);
    return false;
  }

  private boolean _jspx_meth_h_005foutputLabel_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputLabel
    org.apache.myfaces.taglib.html.HtmlOutputLabelTag _jspx_th_h_005foutputLabel_005f2 = (org.apache.myfaces.taglib.html.HtmlOutputLabelTag) _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputLabelTag.class);
    _jspx_th_h_005foutputLabel_005f2.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputLabel_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f11);
    // /jsp/browse/browse.jsp(441,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f2.setId("col12-lang");
    // /jsp/browse/browse.jsp(441,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f2.setValue("#{r.lang}");
    // /jsp/browse/browse.jsp(441,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f2.setStyleClass("langCode");
    // /jsp/browse/browse.jsp(441,0) name = rendered type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputLabel_005f2.setRendered("#{r.lang != null}");
    int _jspx_eval_h_005foutputLabel_005f2 = _jspx_th_h_005foutputLabel_005f2.doStartTag();
    if (_jspx_th_h_005foutputLabel_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputLabel_0026_005fvalue_005fstyleClass_005frendered_005fid_005fnobody.reuse(_jspx_th_h_005foutputLabel_005f2);
    return false;
  }

  private boolean _jspx_meth_r_005fnodeInfo_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f11, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodeInfo
    org.alfresco.web.ui.repo.tag.NodeInfoTag _jspx_th_r_005fnodeInfo_005f5 = (org.alfresco.web.ui.repo.tag.NodeInfoTag) _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.get(org.alfresco.web.ui.repo.tag.NodeInfoTag.class);
    _jspx_th_r_005fnodeInfo_005f5.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodeInfo_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f11);
    // /jsp/browse/browse.jsp(442,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f5.setId("col12-info");
    // /jsp/browse/browse.jsp(442,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodeInfo_005f5.setValue("#{r.id}");
    int _jspx_eval_r_005fnodeInfo_005f5 = _jspx_th_r_005fnodeInfo_005f5.doStartTag();
    if (_jspx_eval_r_005fnodeInfo_005f5 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005fgraphicImage_005f7(_jspx_th_r_005fnodeInfo_005f5, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_r_005fnodeInfo_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodeInfo_0026_005fvalue_005fid.reuse(_jspx_th_r_005fnodeInfo_005f5);
    return false;
  }

  private boolean _jspx_meth_h_005fgraphicImage_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_r_005fnodeInfo_005f5, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:graphicImage
    org.apache.myfaces.taglib.html.HtmlGraphicImageTag _jspx_th_h_005fgraphicImage_005f7 = (org.apache.myfaces.taglib.html.HtmlGraphicImageTag) _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.get(org.apache.myfaces.taglib.html.HtmlGraphicImageTag.class);
    _jspx_th_h_005fgraphicImage_005f7.setPageContext(_jspx_page_context);
    _jspx_th_h_005fgraphicImage_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_r_005fnodeInfo_005f5);
    // /jsp/browse/browse.jsp(443,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f7.setId("col12-img");
    // /jsp/browse/browse.jsp(443,0) name = url type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f7.setUrl("/images/icons/popup.gif");
    // /jsp/browse/browse.jsp(443,0) name = styleClass type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f7.setStyleClass("popupImage");
    // /jsp/browse/browse.jsp(443,0) name = width type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f7.setWidth("16");
    // /jsp/browse/browse.jsp(443,0) name = height type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005fgraphicImage_005f7.setHeight("16");
    int _jspx_eval_h_005fgraphicImage_005f7 = _jspx_th_h_005fgraphicImage_005f7.doStartTag();
    if (_jspx_th_h_005fgraphicImage_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005fgraphicImage_0026_005fwidth_005furl_005fstyleClass_005fid_005fheight_005fnobody.reuse(_jspx_th_h_005fgraphicImage_005f7);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f12(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f12 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f12.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f12.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(448,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f12.setId("col13");
    // /jsp/browse/browse.jsp(448,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f12.setStyle("text-align:left");
    int _jspx_eval_a_005fcolumn_005f12 = _jspx_th_a_005fcolumn_005f12.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f12 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f17(_jspx_th_a_005fcolumn_005f12, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f15(_jspx_th_a_005fcolumn_005f12, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f12.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.reuse(_jspx_th_a_005fcolumn_005f12);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid.reuse(_jspx_th_a_005fcolumn_005f12);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f17(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f12, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f17 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f17.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f17.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f12);
    // /jsp/browse/browse.jsp(449,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f17.setName("header");
    int _jspx_eval_f_005ffacet_005f17 = _jspx_th_f_005ffacet_005f17.doStartTag();
    if (_jspx_eval_f_005ffacet_005f17 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f6(_jspx_th_f_005ffacet_005f17, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f17.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f17.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f17);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f17);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f6 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f6.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f17);
    // /jsp/browse/browse.jsp(450,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f6.setId("col13-sort");
    // /jsp/browse/browse.jsp(450,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f6.setLabel("#{msg.description}");
    // /jsp/browse/browse.jsp(450,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f6.setValue("description");
    // /jsp/browse/browse.jsp(450,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f6.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f6 = _jspx_th_a_005fsortLink_005f6.doStartTag();
    if (_jspx_th_a_005fsortLink_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f6);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f15(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f12, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f15 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f15.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f15.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f12);
    // /jsp/browse/browse.jsp(452,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f15.setId("col13-txt");
    // /jsp/browse/browse.jsp(452,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f15.setValue("#{r.description}");
    int _jspx_eval_h_005foutputText_005f15 = _jspx_th_h_005foutputText_005f15.doStartTag();
    if (_jspx_th_h_005foutputText_005f15.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f15);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f15);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f13(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f13 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f13.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f13.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(456,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f13.setId("col14");
    // /jsp/browse/browse.jsp(456,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f13.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(456,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f13.setRendered("#{NavigationBean.searchContext != null && BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f13 = _jspx_th_a_005fcolumn_005f13.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f13 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f18(_jspx_th_a_005fcolumn_005f13, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005fnodePath_005f1(_jspx_th_a_005fcolumn_005f13, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f13.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f13);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f13);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f18(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f13, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f18 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f18.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f18.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f13);
    // /jsp/browse/browse.jsp(457,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f18.setName("header");
    int _jspx_eval_f_005ffacet_005f18 = _jspx_th_f_005ffacet_005f18.doStartTag();
    if (_jspx_eval_f_005ffacet_005f18 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f7(_jspx_th_f_005ffacet_005f18, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f18.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f18.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f18);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f18);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f7(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f18, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f7 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f7.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f7.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f18);
    // /jsp/browse/browse.jsp(458,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f7.setId("col14-sort");
    // /jsp/browse/browse.jsp(458,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f7.setLabel("#{msg.path}");
    // /jsp/browse/browse.jsp(458,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f7.setValue("displayPath");
    // /jsp/browse/browse.jsp(458,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f7.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f7 = _jspx_th_a_005fsortLink_005f7.doStartTag();
    if (_jspx_th_a_005fsortLink_005f7.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f7);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f7);
    return false;
  }

  private boolean _jspx_meth_r_005fnodePath_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f13, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:nodePath
    org.alfresco.web.ui.repo.tag.NodePathTag _jspx_th_r_005fnodePath_005f1 = (org.alfresco.web.ui.repo.tag.NodePathTag) _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.get(org.alfresco.web.ui.repo.tag.NodePathTag.class);
    _jspx_th_r_005fnodePath_005f1.setPageContext(_jspx_page_context);
    _jspx_th_r_005fnodePath_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f13);
    // /jsp/browse/browse.jsp(460,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f1.setId("col14-path");
    // /jsp/browse/browse.jsp(460,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f1.setValue("#{r.path}");
    // /jsp/browse/browse.jsp(460,0) name = actionListener type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005fnodePath_005f1.setActionListener("#{BrowseBean.clickSpacePath}");
    int _jspx_eval_r_005fnodePath_005f1 = _jspx_th_r_005fnodePath_005f1.doStartTag();
    if (_jspx_th_r_005fnodePath_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodePath_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005fnodePath_0026_005fvalue_005fid_005factionListener_005fnobody.reuse(_jspx_th_r_005fnodePath_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f14(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f14 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f14.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f14.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(464,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f14.setId("col15");
    // /jsp/browse/browse.jsp(464,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f14.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(464,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f14.setRendered("#{BrowseBean.browseViewMode == 'details' || BrowseBean.browseViewMode == 'icons'}");
    int _jspx_eval_a_005fcolumn_005f14 = _jspx_th_a_005fcolumn_005f14.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f14 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f19(_jspx_th_a_005fcolumn_005f14, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f16(_jspx_th_a_005fcolumn_005f14, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f14.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f14);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f14);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f19(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f14, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f19 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f19.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f19.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f14);
    // /jsp/browse/browse.jsp(465,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f19.setName("header");
    int _jspx_eval_f_005ffacet_005f19 = _jspx_th_f_005ffacet_005f19.doStartTag();
    if (_jspx_eval_f_005ffacet_005f19 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f8(_jspx_th_f_005ffacet_005f19, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f19.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f19.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f19);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f19);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f8(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f19, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f8 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f8.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f8.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f19);
    // /jsp/browse/browse.jsp(466,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f8.setId("col15-sort");
    // /jsp/browse/browse.jsp(466,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f8.setLabel("#{msg.size}");
    // /jsp/browse/browse.jsp(466,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f8.setValue("size");
    // /jsp/browse/browse.jsp(466,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f8.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f8 = _jspx_th_a_005fsortLink_005f8.doStartTag();
    if (_jspx_th_a_005fsortLink_005f8.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f8);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f8);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f16(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f14, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f16 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f16.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f16.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f14);
    // /jsp/browse/browse.jsp(468,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f16.setId("col15-txt");
    // /jsp/browse/browse.jsp(468,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f16.setValue("#{r.size}");
    int _jspx_eval_h_005foutputText_005f16 = _jspx_th_h_005foutputText_005f16.doStartTag();
    if (_jspx_eval_h_005foutputText_005f16 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fconvertSize_005f0(_jspx_th_h_005foutputText_005f16, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputText_005f16.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f16);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f16);
    return false;
  }

  private boolean _jspx_meth_a_005fconvertSize_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputText_005f16, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:convertSize
    org.alfresco.web.ui.common.tag.ByteSizeConverterTag _jspx_th_a_005fconvertSize_005f0 = (org.alfresco.web.ui.common.tag.ByteSizeConverterTag) _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody.get(org.alfresco.web.ui.common.tag.ByteSizeConverterTag.class);
    _jspx_th_a_005fconvertSize_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005fconvertSize_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputText_005f16);
    int _jspx_eval_a_005fconvertSize_005f0 = _jspx_th_a_005fconvertSize_005f0.doStartTag();
    if (_jspx_th_a_005fconvertSize_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody.reuse(_jspx_th_a_005fconvertSize_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fconvertSize_005fnobody.reuse(_jspx_th_a_005fconvertSize_005f0);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f15(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f15 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f15.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f15.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(474,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f15.setId("col16");
    // /jsp/browse/browse.jsp(474,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f15.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(474,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f15.setRendered("#{BrowseBean.browseViewMode == 'details'}");
    int _jspx_eval_a_005fcolumn_005f15 = _jspx_th_a_005fcolumn_005f15.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f15 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f20(_jspx_th_a_005fcolumn_005f15, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f17(_jspx_th_a_005fcolumn_005f15, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f15.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f15);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f15);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f20(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f15, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f20 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f20.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f20.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f15);
    // /jsp/browse/browse.jsp(475,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f20.setName("header");
    int _jspx_eval_f_005ffacet_005f20 = _jspx_th_f_005ffacet_005f20.doStartTag();
    if (_jspx_eval_f_005ffacet_005f20 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f9(_jspx_th_f_005ffacet_005f20, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f20.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f20.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f20);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f20);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f9(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f20, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f9 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f9.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f9.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f20);
    // /jsp/browse/browse.jsp(476,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f9.setId("col16-sort");
    // /jsp/browse/browse.jsp(476,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f9.setLabel("#{msg.created}");
    // /jsp/browse/browse.jsp(476,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f9.setValue("created");
    // /jsp/browse/browse.jsp(476,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f9.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f9 = _jspx_th_a_005fsortLink_005f9.doStartTag();
    if (_jspx_th_a_005fsortLink_005f9.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f9);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f9);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f17(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f15, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f17 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f17.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f17.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f15);
    // /jsp/browse/browse.jsp(478,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f17.setId("col16-txt");
    // /jsp/browse/browse.jsp(478,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f17.setValue("#{r.created}");
    int _jspx_eval_h_005foutputText_005f17 = _jspx_th_h_005foutputText_005f17.doStartTag();
    if (_jspx_eval_h_005foutputText_005f17 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fconvertXMLDate_005f2(_jspx_th_h_005foutputText_005f17, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputText_005f17.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f17);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f17);
    return false;
  }

  private boolean _jspx_meth_a_005fconvertXMLDate_005f2(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputText_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:convertXMLDate
    org.alfresco.web.ui.common.tag.XMLDateConverterTag _jspx_th_a_005fconvertXMLDate_005f2 = (org.alfresco.web.ui.common.tag.XMLDateConverterTag) _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.get(org.alfresco.web.ui.common.tag.XMLDateConverterTag.class);
    _jspx_th_a_005fconvertXMLDate_005f2.setPageContext(_jspx_page_context);
    _jspx_th_a_005fconvertXMLDate_005f2.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputText_005f17);
    // /jsp/browse/browse.jsp(479,0) name = type type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f2.setType("both");
    // /jsp/browse/browse.jsp(479,0) name = pattern type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f2.setPattern("#{msg.date_time_pattern}");
    int _jspx_eval_a_005fconvertXMLDate_005f2 = _jspx_th_a_005fconvertXMLDate_005f2.doStartTag();
    if (_jspx_th_a_005fconvertXMLDate_005f2.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f2);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f2);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f16(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f16 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f16.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f16.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(484,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f16.setId("col17");
    // /jsp/browse/browse.jsp(484,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f16.setStyle("text-align:left");
    // /jsp/browse/browse.jsp(484,0) name = rendered type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f16.setRendered("#{BrowseBean.browseViewMode == 'details' || BrowseBean.browseViewMode == 'icons'}");
    int _jspx_eval_a_005fcolumn_005f16 = _jspx_th_a_005fcolumn_005f16.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f16 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f21(_jspx_th_a_005fcolumn_005f16, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_h_005foutputText_005f18(_jspx_th_a_005fcolumn_005f16, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f16.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f16);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005frendered_005fid.reuse(_jspx_th_a_005fcolumn_005f16);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f21(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f16, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f21 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f21.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f21.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f16);
    // /jsp/browse/browse.jsp(485,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f21.setName("header");
    int _jspx_eval_f_005ffacet_005f21 = _jspx_th_f_005ffacet_005f21.doStartTag();
    if (_jspx_eval_f_005ffacet_005f21 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_a_005fsortLink_005f10(_jspx_th_f_005ffacet_005f21, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f21.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f21.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f21);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f21);
    return false;
  }

  private boolean _jspx_meth_a_005fsortLink_005f10(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f21, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:sortLink
    org.alfresco.web.ui.common.tag.data.SortLinkTag _jspx_th_a_005fsortLink_005f10 = (org.alfresco.web.ui.common.tag.data.SortLinkTag) _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.SortLinkTag.class);
    _jspx_th_a_005fsortLink_005f10.setPageContext(_jspx_page_context);
    _jspx_th_a_005fsortLink_005f10.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f21);
    // /jsp/browse/browse.jsp(486,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f10.setId("col17-sort");
    // /jsp/browse/browse.jsp(486,0) name = label type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f10.setLabel("#{msg.modified}");
    // /jsp/browse/browse.jsp(486,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f10.setValue("modified");
    // /jsp/browse/browse.jsp(486,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fsortLink_005f10.setStyleClass("header");
    int _jspx_eval_a_005fsortLink_005f10 = _jspx_th_a_005fsortLink_005f10.doStartTag();
    if (_jspx_th_a_005fsortLink_005f10.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f10);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fsortLink_0026_005fvalue_005fstyleClass_005flabel_005fid_005fnobody.reuse(_jspx_th_a_005fsortLink_005f10);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f18(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f16, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f18 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f18.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f18.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f16);
    // /jsp/browse/browse.jsp(488,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f18.setId("col17-txt");
    // /jsp/browse/browse.jsp(488,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f18.setValue("#{r.modified}");
    int _jspx_eval_h_005foutputText_005f18 = _jspx_th_h_005foutputText_005f18.doStartTag();
    if (_jspx_eval_h_005foutputText_005f18 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fconvertXMLDate_005f3(_jspx_th_h_005foutputText_005f18, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_h_005foutputText_005f18.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f18);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid.reuse(_jspx_th_h_005foutputText_005f18);
    return false;
  }

  private boolean _jspx_meth_a_005fconvertXMLDate_005f3(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005foutputText_005f18, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:convertXMLDate
    org.alfresco.web.ui.common.tag.XMLDateConverterTag _jspx_th_a_005fconvertXMLDate_005f3 = (org.alfresco.web.ui.common.tag.XMLDateConverterTag) _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.get(org.alfresco.web.ui.common.tag.XMLDateConverterTag.class);
    _jspx_th_a_005fconvertXMLDate_005f3.setPageContext(_jspx_page_context);
    _jspx_th_a_005fconvertXMLDate_005f3.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005foutputText_005f18);
    // /jsp/browse/browse.jsp(489,0) name = type type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f3.setType("both");
    // /jsp/browse/browse.jsp(489,0) name = pattern type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fconvertXMLDate_005f3.setPattern("#{msg.date_time_pattern}");
    int _jspx_eval_a_005fconvertXMLDate_005f3 = _jspx_th_a_005fconvertXMLDate_005f3.doStartTag();
    if (_jspx_th_a_005fconvertXMLDate_005f3.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f3);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fconvertXMLDate_0026_005ftype_005fpattern_005fnobody.reuse(_jspx_th_a_005fconvertXMLDate_005f3);
    return false;
  }

  private boolean _jspx_meth_a_005fcolumn_005f17(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:column
    org.alfresco.web.ui.common.tag.data.ColumnTag _jspx_th_a_005fcolumn_005f17 = (org.alfresco.web.ui.common.tag.data.ColumnTag) _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.get(org.alfresco.web.ui.common.tag.data.ColumnTag.class);
    _jspx_th_a_005fcolumn_005f17.setPageContext(_jspx_page_context);
    _jspx_th_a_005fcolumn_005f17.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(494,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f17.setId("col18");
    // /jsp/browse/browse.jsp(494,0) name = actions type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f17.setActions("true");
    // /jsp/browse/browse.jsp(494,0) name = style type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fcolumn_005f17.setStyle("text-align:left");
    int _jspx_eval_a_005fcolumn_005f17 = _jspx_th_a_005fcolumn_005f17.doStartTag();
    if (_jspx_eval_a_005fcolumn_005f17 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_f_005ffacet_005f22(_jspx_th_a_005fcolumn_005f17, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f5(_jspx_th_a_005fcolumn_005f17, _jspx_page_context))
        return true;
      out.write("\r\n");
      out.write("\r\n");
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_a_005fmenu_005f4(_jspx_th_a_005fcolumn_005f17, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fcolumn_005f17.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.reuse(_jspx_th_a_005fcolumn_005f17);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fcolumn_0026_005fstyle_005fid_005factions.reuse(_jspx_th_a_005fcolumn_005f17);
    return false;
  }

  private boolean _jspx_meth_f_005ffacet_005f22(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  f:facet
    javax.faces.webapp.FacetTag _jspx_th_f_005ffacet_005f22 = (javax.faces.webapp.FacetTag) _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.get(javax.faces.webapp.FacetTag.class);
    _jspx_th_f_005ffacet_005f22.setPageContext(_jspx_page_context);
    _jspx_th_f_005ffacet_005f22.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f17);
    // /jsp/browse/browse.jsp(495,0) name = name type = java.lang.String reqTime = false required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_f_005ffacet_005f22.setName("header");
    int _jspx_eval_f_005ffacet_005f22 = _jspx_th_f_005ffacet_005f22.doStartTag();
    if (_jspx_eval_f_005ffacet_005f22 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      do {
        out.write('\r');
        out.write('\n');
        if (_jspx_meth_h_005foutputText_005f19(_jspx_th_f_005ffacet_005f22, _jspx_page_context))
          return true;
        out.write('\r');
        out.write('\n');
        int evalDoAfterBody = _jspx_th_f_005ffacet_005f22.doAfterBody();
        if (evalDoAfterBody != javax.servlet.jsp.tagext.BodyTag.EVAL_BODY_AGAIN)
          break;
      } while (true);
    }
    if (_jspx_th_f_005ffacet_005f22.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f22);
      return true;
    }
    _005fjspx_005ftagPool_005ff_005ffacet_0026_005fname.reuse(_jspx_th_f_005ffacet_005f22);
    return false;
  }

  private boolean _jspx_meth_h_005foutputText_005f19(javax.servlet.jsp.tagext.JspTag _jspx_th_f_005ffacet_005f22, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  h:outputText
    org.apache.myfaces.taglib.html.HtmlOutputTextTag _jspx_th_h_005foutputText_005f19 = (org.apache.myfaces.taglib.html.HtmlOutputTextTag) _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.get(org.apache.myfaces.taglib.html.HtmlOutputTextTag.class);
    _jspx_th_h_005foutputText_005f19.setPageContext(_jspx_page_context);
    _jspx_th_h_005foutputText_005f19.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_f_005ffacet_005f22);
    // /jsp/browse/browse.jsp(496,0) name = id type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f19.setId("col18-txt");
    // /jsp/browse/browse.jsp(496,0) name = value type = java.lang.String reqTime = false required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_h_005foutputText_005f19.setValue("#{msg.actions}");
    int _jspx_eval_h_005foutputText_005f19 = _jspx_th_h_005foutputText_005f19.doStartTag();
    if (_jspx_th_h_005foutputText_005f19.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f19);
      return true;
    }
    _005fjspx_005ftagPool_005fh_005foutputText_0026_005fvalue_005fid_005fnobody.reuse(_jspx_th_h_005foutputText_005f19);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f5(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f5 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f5.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f5.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f17);
    // /jsp/browse/browse.jsp(500,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f5.setId("col18-acts1");
    // /jsp/browse/browse.jsp(500,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f5.setValue("document_browse");
    // /jsp/browse/browse.jsp(500,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f5.setContext("#{r}");
    // /jsp/browse/browse.jsp(500,0) name = showLink type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f5.setShowLink("false");
    // /jsp/browse/browse.jsp(500,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f5.setStyleClass("inlineAction");
    int _jspx_eval_r_005factions_005f5 = _jspx_th_r_005factions_005f5.doStartTag();
    if (_jspx_th_r_005factions_005f5.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f5);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fstyleClass_005fshowLink_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f5);
    return false;
  }

  private boolean _jspx_meth_a_005fmenu_005f4(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fcolumn_005f17, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:menu
    org.alfresco.web.ui.common.tag.MenuTag _jspx_th_a_005fmenu_005f4 = (org.alfresco.web.ui.common.tag.MenuTag) _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.get(org.alfresco.web.ui.common.tag.MenuTag.class);
    _jspx_th_a_005fmenu_005f4.setPageContext(_jspx_page_context);
    _jspx_th_a_005fmenu_005f4.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fcolumn_005f17);
    // /jsp/browse/browse.jsp(503,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f4.setId("content-more-menu");
    // /jsp/browse/browse.jsp(503,0) name = itemSpacing type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f4.setItemSpacing("4");
    // /jsp/browse/browse.jsp(503,0) name = image type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f4.setImage("/images/icons/more.gif");
    // /jsp/browse/browse.jsp(503,0) name = tooltip type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f4.setTooltip("#{msg.more_actions}");
    // /jsp/browse/browse.jsp(503,0) name = menuStyleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fmenu_005f4.setMenuStyleClass("moreActionsMenu");
    int _jspx_eval_a_005fmenu_005f4 = _jspx_th_a_005fmenu_005f4.doStartTag();
    if (_jspx_eval_a_005fmenu_005f4 != javax.servlet.jsp.tagext.Tag.SKIP_BODY) {
      out.write('\r');
      out.write('\n');
      if (_jspx_meth_r_005factions_005f6(_jspx_th_a_005fmenu_005f4, _jspx_page_context))
        return true;
      out.write('\r');
      out.write('\n');
    }
    if (_jspx_th_a_005fmenu_005f4.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f4);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fmenu_0026_005ftooltip_005fmenuStyleClass_005fitemSpacing_005fimage_005fid.reuse(_jspx_th_a_005fmenu_005f4);
    return false;
  }

  private boolean _jspx_meth_r_005factions_005f6(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005fmenu_005f4, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  r:actions
    org.alfresco.web.ui.repo.tag.ActionsTag _jspx_th_r_005factions_005f6 = (org.alfresco.web.ui.repo.tag.ActionsTag) _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.get(org.alfresco.web.ui.repo.tag.ActionsTag.class);
    _jspx_th_r_005factions_005f6.setPageContext(_jspx_page_context);
    _jspx_th_r_005factions_005f6.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005fmenu_005f4);
    // /jsp/browse/browse.jsp(504,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f6.setId("col18-acts2");
    // /jsp/browse/browse.jsp(504,0) name = value type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f6.setValue("document_browse_menu");
    // /jsp/browse/browse.jsp(504,0) name = context type = null reqTime = true required = true fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_r_005factions_005f6.setContext("#{r}");
    int _jspx_eval_r_005factions_005f6 = _jspx_th_r_005factions_005f6.doStartTag();
    if (_jspx_th_r_005factions_005f6.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f6);
      return true;
    }
    _005fjspx_005ftagPool_005fr_005factions_0026_005fvalue_005fid_005fcontext_005fnobody.reuse(_jspx_th_r_005factions_005f6);
    return false;
  }

  private boolean _jspx_meth_a_005fdataPager_005f1(javax.servlet.jsp.tagext.JspTag _jspx_th_a_005frichList_005f1, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:dataPager
    org.alfresco.web.ui.common.tag.data.DataPagerTag _jspx_th_a_005fdataPager_005f1 = (org.alfresco.web.ui.common.tag.data.DataPagerTag) _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.get(org.alfresco.web.ui.common.tag.data.DataPagerTag.class);
    _jspx_th_a_005fdataPager_005f1.setPageContext(_jspx_page_context);
    _jspx_th_a_005fdataPager_005f1.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_a_005frichList_005f1);
    // /jsp/browse/browse.jsp(508,0) name = id type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fdataPager_005f1.setId("pager2");
    // /jsp/browse/browse.jsp(508,0) name = styleClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005fdataPager_005f1.setStyleClass("pager");
    int _jspx_eval_a_005fdataPager_005f1 = _jspx_th_a_005fdataPager_005f1.doStartTag();
    if (_jspx_th_a_005fdataPager_005f1.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_a_005fdataPager_005f1);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005fdataPager_0026_005fstyleClass_005fid_005fnobody.reuse(_jspx_th_a_005fdataPager_005f1);
    return false;
  }

  private boolean _jspx_meth_a_005ferrors_005f0(javax.servlet.jsp.tagext.JspTag _jspx_th_h_005fform_005f0, PageContext _jspx_page_context)
          throws Throwable {
    PageContext pageContext = _jspx_page_context;
    JspWriter out = _jspx_page_context.getOut();
    //  a:errors
    org.alfresco.web.ui.common.tag.ErrorsTag _jspx_th_a_005ferrors_005f0 = (org.alfresco.web.ui.common.tag.ErrorsTag) _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody.get(org.alfresco.web.ui.common.tag.ErrorsTag.class);
    _jspx_th_a_005ferrors_005f0.setPageContext(_jspx_page_context);
    _jspx_th_a_005ferrors_005f0.setParent((javax.servlet.jsp.tagext.Tag) _jspx_th_h_005fform_005f0);
    // /jsp/browse/browse.jsp(522,0) name = message type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setMessage("");
    // /jsp/browse/browse.jsp(522,0) name = infoClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setInfoClass("statusWarningText");
    // /jsp/browse/browse.jsp(522,0) name = errorClass type = null reqTime = true required = false fragment = false deferredValue = false expectedTypeName = null deferredMethod = false methodSignature = null
    _jspx_th_a_005ferrors_005f0.setErrorClass("statusErrorText");
    int _jspx_eval_a_005ferrors_005f0 = _jspx_th_a_005ferrors_005f0.doStartTag();
    if (_jspx_th_a_005ferrors_005f0.doEndTag() == javax.servlet.jsp.tagext.Tag.SKIP_PAGE) {
      _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
      return true;
    }
    _005fjspx_005ftagPool_005fa_005ferrors_0026_005fmessage_005finfoClass_005ferrorClass_005fnobody.reuse(_jspx_th_a_005ferrors_005f0);
    return false;
  }
}
