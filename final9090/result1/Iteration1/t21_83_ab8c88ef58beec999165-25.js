/*! For license information please see ab8c88ef58beec999165-25.js.LICENSE */
webpackJsonp([25],{209:function(e,t,r){Jane.module("left.yate",function(){r(3733)})},3733:function(e,t){yr.isRegistered("left")||function(){yr.cmpNN,yr.cmpSN;var e=yr.nodeset2xml,t=yr.nodeset2boolean,r=(yr.nodeset2attrvalue,yr.nodeset2scalar),a=(yr.scalar2attrvalue,yr.xml2attrvalue,yr.scalar2xml,yr.xml2scalar,yr.simpleScalar,yr.simpleBoolean,yr.selectNametest,yr.closeAttrs),n=new yr.Module;n.f108=function(e,t,r,n,s,i){var o="";return o+=a(s),i?(o+='<span class="mail-ui-Arrow mail-ui-Arrow_left"></span>',o+=yr.externals.i18n("%Schemes_Saver_Вернуться")):o+=yr.externals.i18n("%Schemes_Saver_Показать"),o},n.f109=function(e,t,r,n,s,i,o){var l="";return l+=a(s),l+=e.f("f41",t,r,n,s,"mail--Theme-Pin"),l+=o?yr.externals.i18n("%Schemes_Saver_Закреплен"):yr.externals.i18n("%Schemes_Saver_Закрепить")};var s=[0,"main-action-buttons"],i=[0,"views",0,"react-main-buttons"],o=[0,"skin-saver"];n.t1010=function(e,t,r,n,s){var i="";return i+=a(s),i+=" mail-ComposeButton-Holder"},n.t1010.j=s,n.t1010.a=0,n.t1011=function(e,t,r,a,n){var s="";return s+=e.a(e,0,e.s(i,t.doc.root),"ns-view",n)},n.t1011.j=s,n.t1011.a=0,n.t1012=function(e,r,n,s,i){var o="",l=e.f("f34",r,n,s,"skin-saver-state","isPreviewMode");return o+=a(i),o+=" mail-SkinSaver js-skin-saver",t(l)&&(o+=" mail-SkinSaver_preview"),o},n.t1012.j=o,n.t1012.a=0,n.t1013=function(n,s,i,o,l){var v="",c=n.f("f33",s,i,o,"hasPreview"),u=n.f("f33",s,i,o,"isSaved"),m=n.f("f33",s,i,o,"getSkinText"),f=n.f("f34",s,i,o,"skin-saver-state","isPreviewMode");return v+=a(l),t(m)&&(v+='<p class="mail-SkinSaver-Title">',v+=yr.externals.i18n("%Schemes_Saver_title"),v+="</p>",v+='<p class="mail-SkinSaver-Text">'+e(m)+"</p>"),v+="<div",l.a={class:new yr.scalarAttr("mail-SkinSaver-Controls "+(t(c)?"":"mail-SkinSaver-Controls_single"))},l.s="div",t(c)&&(v+=n.f("f4",s,i,o,l,yr.object2nodeset(function(){var e={};e.type="inline",e.size="s",e.theme="pseudo",e.content=n.f("f108",s,i,o,{a:{}},r(f));var t=[];return t.push("mail-SkinSaver-PreviewSkin"),t.push("js-preview-skin"),t.push("nb-with-m-right-gap"),e.class=t,e}()))),t(f)||(v+=n.f("f18",s,i,o,l,yr.object2nodeset(function(){var e={};e.type="button",e.size="s",e.checked=yr.nodeset2data(u),e.theme="pseudo",e.content=n.f("f109",s,i,o,{a:{}},r(c),r(u));var t=[];return t.push("mail-SkinSaver-SaveSkin"),t.push("js-save-skin"),e.class=t,e}()))),v+=a(l),v+="</div>"},n.t1013.j=o,n.t1013.a=0,n.matcher={"ns-view-add-class":{"main-action-buttons":["t1010"],"skin-saver":["t1012"]},"ns-view-content":{"main-action-buttons":["t1011"],"skin-saver":["t1013"]}},n.imports=["mail"],yr.register("left",n)}()}});