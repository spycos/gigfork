(function(){var c=YAHOO.util.Dom;Alfresco.CreateComment=function b(j){Alfresco.CreateComment.superclass.constructor.call(this,"Alfresco.CreateComment",j,["event","json","editor"]);YAHOO.Bubbling.on("setCommentedNode",this.onSetCommentedNode,this);YAHOO.Bubbling.on("setCanCreateComment",this.onSetCanCreateComment,this);return this};YAHOO.extend(Alfresco.CreateComment,Alfresco.component.Base,{options:{siteId:"",containerId:"blog",itemNodeRef:null,activityTitle:null,activityPage:null,activityPageParams:null,width:538,height:250,canCreateComment:false},initialized:false,onSetCommentedNode:function a(k,j){var l=j[1];if((l!==null)&&(l.nodeRef!==null)&&(l.title!==null)&&(l.page!==null)){this.options.itemNodeRef=l.nodeRef;this.options.activityTitle=l.title;this.options.activityPage=l.page;this.options.activityPageParams=l.pageParams;this.initializeCreateCommentForm()}},onSetCanCreateComment:function e(k,j){var l=j[1];if((l!==null)&&(l.canCreateComment!==null)){this.options.canCreateComment=l.canCreateComment;this.initializeCreateCommentForm()}},initializeCreateCommentForm:function i(){if(!this.options.canCreateComment){return}if(this.initialized){return}this.initialized=true;var k=c.get(this.id+"-form");var j=YAHOO.lang.substitute(Alfresco.constants.PROXY_URI+"api/node/{nodeRef}/comments",{nodeRef:this.options.itemNodeRef.replace(":/","")});k.setAttribute("action",j);c.get(this.id+"-nodeRef").setAttribute("value",this.options.itemNodeRef);if(this.options.siteId.length>0){c.get(this.id+"-site").setAttribute("value",this.options.siteId);c.get(this.id+"-container").setAttribute("value",this.options.containerId)}c.get(this.id+"-itemTitle").setAttribute("value",this.options.activityTitle);c.get(this.id+"-page").setAttribute("value",this.options.activityPage);c.get(this.id+"-pageParams").setAttribute("value",YAHOO.lang.JSON.stringify(this.options.activityPageParams));this.registerCreateCommentForm()},registerCreateCommentForm:function f(){this.widgets.okButton=Alfresco.util.createYUIButton(this,"submit",null,{type:"submit",disabled:true});this.widgets.editor=new Alfresco.util.RichEditor(Alfresco.constants.HTML_EDITOR,this.id+"-content",this.options.editorConfig);this.widgets.editor.addPageUnloadBehaviour(this.msg("message.unsavedChanges.comment"));this.widgets.editor.render();this.widgets.editor.save();var j=(Alfresco.constants.HTML_EDITOR==="YAHOO.widget.SimpleEditor")?"editorKeyUp":"onKeyUp";this.widgets.editor.subscribe(j,function(k){if(this.widgets.editor.getContent().length<20||this.widgets.okButton.get("disabled")){this.widgets.editor.save();this.widgets.commentForm.updateSubmitElements()}},this,true);this.widgets.commentForm=new Alfresco.forms.Form(this.id+"-form");this.widgets.commentForm.setShowSubmitStateDynamically(true,false);this.widgets.commentForm.addValidation(this.id+"-content",this._validateTextContent,null);this.widgets.commentForm.setSubmitElements(this.widgets.okButton);this.widgets.commentForm.setAJAXSubmit(true,{successMessage:this.msg("message.createcomment.success"),successCallback:{fn:this.onCreateFormSubmitSuccess,scope:this},failureMessage:this.msg("message.createcomment.failure"),failureCallback:{fn:function(){this.enableInputs()},scope:this}});this.widgets.commentForm.setSubmitAsJSON(true);this.widgets.commentForm.doBeforeFormSubmit={fn:function(k,l){this.widgets.editor.save();this.widgets.editor.disable();this.widgets.okButton.set("disabled",true);this.widgets.feedbackMessage=Alfresco.util.PopupManager.displayMessage({text:Alfresco.util.message("message.creating",this.name),spanClass:"wait",displayTime:0})},scope:this};this.widgets.commentForm.init();c.removeClass(this.id+"-form-container","hidden")},_validateTextContent:function g(p,k,n,m,j,l){var o=/<\S[^><]*>/g;return YAHOO.lang.trim(p.value.replace(o,"")).length>0},onCreateFormSubmitSuccess:function h(j){this.widgets.editor.clear();YAHOO.Bubbling.fire("refreshComments",{reason:"created"});this.enableInputs()},enableInputs:function d(){this.widgets.feedbackMessage.destroy();this.widgets.editor.enable()}})})();