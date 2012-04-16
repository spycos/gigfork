(function(){var b=YAHOO.util.Dom,x=YAHOO.util.Event,k=YAHOO.util.KeyListener;var q=Alfresco.util.encodeHTML;Alfresco.SiteFinder=function(y){Alfresco.SiteFinder.superclass.constructor.call(this,"Alfresco.SiteFinder",y,["button","container","datasource","datatable","json"]);this.buttons=[];this.searchTerm="";this.memberOfSites={};this.membershipsRetrieved=false;this.pendingInvites={};YAHOO.Bubbling.on("siteDeleted",this.onSiteDeleted,this);return this};YAHOO.extend(Alfresco.SiteFinder,Alfresco.component.Base,{options:{minSearchTermLength:0,maxSearchResults:100,currentUser:"",inviteData:[],setFocus:false},buttons:null,searchTerm:null,memberOfSites:null,membershipsRetrieved:null,pendingInvites:null,onReady:function c(){var D=this;var C={method:"GET",url:Alfresco.constants.PROXY_URI+"api/people/"+encodeURIComponent(this.options.currentUser)+"/sites?roles=none",successCallback:{fn:this._processMembership,scope:this},failureCallback:{fn:this._failureCallback,obj:this.msg("site-finder.no-membership-detail"),scope:this}};Alfresco.util.Ajax.request(C);var B=Alfresco.constants.PROXY_URI+"api/sites?roles=user&";this.widgets.dataSource=new YAHOO.util.DataSource(B,{responseType:YAHOO.util.DataSource.TYPE_JSON,connXhrMode:"queueRequests",responseSchema:{resultsList:"items"}});this.widgets.dataSource.doBeforeParseData=function y(E,R){var H=R;if(R){var M=[];if(D.searchTerm.length===0){M=R}else{var S,O,Q,L;for(var P=0,N=R.length;P<N;P++){S=R[P];O=S.shortName;Q=S.title;L=S.visibility;M.push(S)}}M.sort(function(U,T){return(U.title>T.title)?1:(U.title<T.title)?-1:0});var F,K,J,I,G;for(K=0,J=M.length;K<J;K++){M[K].isSiteManager=(M[K].siteRole==="SiteManager")}H={items:M}}return H};this._setupDataTable();this.widgets.searchButton=Alfresco.util.createYUIButton(this,"button",this.doSearch);var A=b.get(this.id+"-term"),z=new k(A,{keys:13},{fn:function(){D.doSearch()},scope:this,correctScope:true},"keydown").enable();if(this.options.setFocus){A.focus()}b.setStyle(this.id+"-body","visibility","visible")},_processMembership:function d(z){var C,B;var D=this.options.inviteData,y;for(C=0,B=D.length;C<B;C++){y=D[C];this.pendingInvites[y.siteId]=y.id;this.memberOfSites[y.siteId]="PENDING"}if(z.serverResponse.status===200){var E=z.json,A;for(C=0,B=E.length;C<B;C++){A=E[C];this.memberOfSites[A.shortName]="MEMBER"}this.membershipsRetrieved=true}},_setupDataTable:function r(){var A=this;renderCellThumbnail=function B(H,G,I,K){var E=G.getData("shortName"),F=Alfresco.constants.URL_PAGECONTEXT+"site/"+E+"/dashboard",J=q(G.getData("title"));H.innerHTML='<a href="'+F+'"><img src="'+Alfresco.constants.URL_RESCONTEXT+'components/site-finder/images/site-64.png" alt="'+J+'" title="'+J+'" /></a>'};renderCellDescription=function z(I,H,J,K){var E=H.getData("visibility").toUpperCase(),F=Alfresco.constants.URL_PAGECONTEXT+"site/"+H.getData("shortName")+"/dashboard";var G='<h3 class="sitename"><a href="'+F+'" class="theme-color-1">'+q(H.getData("title"))+"</a></h3>";G+='<div class="sitedescription">'+q(H.getData("description"))+"</div>";if(E=="MODERATED"){G+='<span class="moderated theme-bg-color-1">'+A.msg("site-finder.moderated")+"</span>"}else{if(E=="PRIVATE"){G+='<span class="private theme-bg-color-1">'+A.msg("site-finder.private")+"</span>"}}I.innerHTML=G};renderCellActions=function y(N,P,H,E){if(A.membershipsRetrieved){var I=P.getData("visibility").toUpperCase(),K=P.getData("shortName"),M=P.getData("isSiteManager"),L=q(P.getData("title"));var O=(A.memberOfSites[K]==="MEMBER"&&M);var F='<span id="'+A.id+"-button-"+K+'"></span>';if(O){F='<span id="'+A.id+"-deleteButton-"+K+'"></span>&nbsp;'+F}N.innerHTML=F;if(O){var J=new YAHOO.widget.Button({container:A.id+"-deleteButton-"+K});J.set("label",A.msg("site-finder.delete"));J.set("onclick",{fn:A.doDelete,obj:{shortName:K,title:L},scope:A})}var G=new YAHOO.widget.Button({container:A.id+"-button-"+K});switch(I){case"PUBLIC":if(A.memberOfSites[K]=="MEMBER"){G.set("label",A.msg("site-finder.leave"));G.set("onclick",{fn:A.doLeave,obj:{shortName:K,title:L},scope:A})}else{G.set("label",A.msg("site-finder.join"));G.set("onclick",{fn:A.doJoin,obj:{shortName:K,title:L},scope:A})}A.buttons[K]={button:G};break;case"PRIVATE":if(A.memberOfSites[K]=="MEMBER"){G.set("label",A.msg("site-finder.leave"));G.set("onclick",{fn:A.doLeave,obj:{shortName:K,title:L},scope:A});A.buttons[K]={button:G};break}case"MODERATED":if(A.memberOfSites[K]=="MEMBER"){G.set("label",A.msg("site-finder.leave"));G.set("onclick",{fn:A.doLeave,obj:{shortName:K,title:L},scope:A})}else{if(A.memberOfSites[K]=="PENDING"){G.set("label",A.msg("site-finder.cancel-request"));G.set("onclick",{fn:A.doCancelRequest,obj:{shortName:K,title:L},scope:A})}else{G.set("label",A.msg("site-finder.request-join"));G.set("onclick",{fn:A.doRequestJoin,obj:{shortName:K,title:L},scope:A})}}A.buttons[K]={button:G};break;default:N.innerHTML="<div></div>";break}}};var D=[{key:"shortName",label:"Short Name",sortable:false,formatter:renderCellThumbnail},{key:"description",label:"Description",sortable:false,formatter:renderCellDescription},{key:"button",label:"Actions",formatter:renderCellActions}];this.widgets.dataTable=new YAHOO.widget.DataTable(this.id+"-sites",D,this.widgets.dataSource,{renderLoopSize:32,initialLoad:false,MSG_EMPTY:this.msg("message.instructions")});this.widgets.dataTable.subscribe("rowDeleteEvent",this.onRowDeleteEvent,this,true);this.widgets.dataTable.doBeforeLoadData=function C(F,G,I){if(G.error){try{var E=YAHOO.lang.JSON.parse(G.responseText);this.widgets.dataTable.set("MSG_ERROR",E.message)}catch(H){A._setDefaultDataTableErrors(A.widgets.dataTable)}}else{if(G.results){if(G.results.length===0){A.widgets.dataTable.set("MSG_EMPTY",'<span style="white-space: nowrap;">'+A.msg("message.empty")+"</span>")}A.renderLoopSize=Alfresco.util.RENDERLOOPSIZE}}return true}},doSearch:function e(){this.searchTerm=YAHOO.lang.trim(b.get(this.id+"-term").value);if(this.searchTerm.replace(/\*/g,"").length<this.options.minSearchTermLength){Alfresco.util.PopupManager.displayMessage({text:parent._msg("message.minimum-length",this.options.minSearchTermLength)});return}this._performSearch(this.searchTerm)},_failureCallback:function j(z,y){this._clearFeedbackMessage();if(y){Alfresco.util.PopupManager.displayPrompt({title:Alfresco.util.message("message.failure"),text:y})}},doJoin:function v(A,z){var y=this.options.currentUser;Alfresco.util.Ajax.jsonPut({url:Alfresco.constants.PROXY_URI+"api/sites/"+z.shortName+"/memberships",dataObj:{role:"SiteConsumer",person:{userName:y}},successCallback:{fn:this._joinSuccess,obj:z,scope:this},failureCallback:{fn:this._failureCallback,obj:this.msg("site-finder.join-failure",this.options.currentUser,z.title),scope:this}})},_joinSuccess:function w(y,z){this.memberOfSites[z.shortName]="MEMBER";Alfresco.util.PopupManager.displayMessage({text:this.msg("site-finder.join-success",this.options.currentUser,z.title)});this.doSearch()},doLeave:function g(A,z){var y=this.options.currentUser;Alfresco.util.Ajax.request({url:Alfresco.constants.PROXY_URI+"api/sites/"+z.shortName+"/memberships/"+encodeURIComponent(y),method:"DELETE",successCallback:{fn:this._leaveSuccess,obj:z,scope:this},failureCallback:{fn:this._failureCallback,obj:this.msg("site-finder.leave-failure",this.options.currentUser,z.title),scope:this}})},_leaveSuccess:function t(y,z){delete this.memberOfSites[z.shortName];Alfresco.util.PopupManager.displayMessage({text:this.msg("site-finder.leave-success",this.options.currentUser,z.title)});this.doSearch()},doRequestJoin:function m(A,z){var y=this.options.currentUser;this.widgets.feedbackMessage=Alfresco.util.PopupManager.displayMessage({text:this.msg("message.please-wait"),spanClass:"wait",displayTime:0});Alfresco.util.Ajax.jsonRequest({url:Alfresco.constants.PROXY_URI+"api/sites/"+z.shortName+"/invitations",method:"POST",dataObj:{invitationType:"MODERATED",inviteeUserName:y,inviteeComments:"",inviteeRoleName:"SiteConsumer"},successCallback:{fn:this._requestJoinSuccess,obj:z,scope:this},failureCallback:{fn:this._failureCallback,obj:this.msg("site-finder.request-join-failure",this.options.currentUser,z.title),scope:this}})},_requestJoinSuccess:function s(y,z){var A=y.json.data,B=z.shortName;this.memberOfSites[B]="PENDING";this.pendingInvites[B]=A.inviteId;Alfresco.util.PopupManager.displayMessage({text:this.msg("site-finder.request-join-success",this.options.currentUser,z.title)});this.doSearch()},doCancelRequest:function u(A,z){var y=this.options.currentUser,B=z.shortName;this.widgets.feedbackMessage=Alfresco.util.PopupManager.displayMessage({text:this.msg("message.please-wait"),spanClass:"wait",displayTime:0});Alfresco.util.Ajax.jsonRequest({url:Alfresco.constants.PROXY_URI+"api/sites/"+B+"/invitations/"+encodeURIComponent(this.pendingInvites[B]),method:"DELETE",successCallback:{fn:this._cancelRequestSuccess,obj:z,scope:this},failureCallback:{fn:this._failureCallback,obj:this.msg("site-finder.cancel-request-failure",this.options.currentUser,z.title),scope:this}})},_cancelRequestSuccess:function i(y,z){this.memberOfSites[z.shortName]="MODERATED";Alfresco.util.PopupManager.displayMessage({text:this.msg("site-finder.cancel-request-success",this.options.currentUser,z.title)});this.doSearch()},doDelete:function o(z,y){Alfresco.module.getDeleteSiteInstance().show({site:y})},_setDefaultDataTableErrors:function f(y){var z=Alfresco.util.message;y.set("MSG_EMPTY",z("message.empty","Alfresco.SiteFinder"));y.set("MSG_ERROR",z("message.error","Alfresco.SiteFinder"))},_clearFeedbackMessage:function l(){if(this.widgets.feedbackMessage){try{this.widgets.feedbackMessage.destroy()}catch(y){}this.widgets.feeedbackMessage=null}},_performSearch:function n(z){this._setDefaultDataTableErrors(this.widgets.dataTable);this.widgets.dataTable.set("MSG_EMPTY",Alfresco.util.message("site-finder.searching","Alfresco.SiteFinder"));this.widgets.dataTable.deleteRows(0,this.widgets.dataTable.getRecordSet().getLength());var E=null;var C=function F(){E=Alfresco.util.PopupManager.displayMessage({displayTime:0,text:'<span class="wait">'+q(this.msg("message.loading"))+"</span>",noEscape:true})};var A=YAHOO.lang.later(2000,this,C);var D=function G(H,I,J){this.widgets.searchButton.set("disabled",false);if(A){A.cancel()}if(E){E.destroy()}this.searchTerm=z;this.widgets.dataTable.onDataReturnInitializeTable.call(this.widgets.dataTable,H,I,J)};var y=function B(I,J){this.widgets.searchButton.set("disabled",false);if(A){A.cancel()}if(E){E.destroy()}if(J.status==401){window.location.reload()}else{try{var H=YAHOO.lang.JSON.parse(J.responseText);this.widgets.dataTable.set("MSG_ERROR",H.message);this.widgets.dataTable.showTableMessage(H.message,YAHOO.widget.DataTable.CLASS_ERROR)}catch(K){this._setDefaultDataTableErrors(this.widgets.dataTable)}}};this.widgets.dataSource.sendRequest(this._buildSearchParams(z),{success:D,failure:y,scope:this});this.widgets.searchButton.set("disabled",true)},_buildSearchParams:function a(y){var z=YAHOO.lang.substitute("size={maxResults}&nf={term}",{maxResults:this.options.maxSearchResults,term:encodeURIComponent(y)});return z},onSiteDeleted:function p(D,B){var A=B[1].site;var z=this.widgets.dataTable.getRecordSet();var E=z.getLength();for(var C=0;C<E;C++){var y=z.getRecord(C);if(y.getData("shortName")==A.shortName){this.widgets.dataTable.deleteRow(y)}}},onRowDeleteEvent:function h(y){if(this.widgets.dataTable.getRecordSet().getLength()===0){this.widgets.dataTable.showTableMessage(this.msg("site-finder.enter-search-term",this.name),"siteFinderTableMessage")}}})})();