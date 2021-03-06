/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMElement, DOMStyleSheetList, DOMAbstractView, DOMHTMLCollection, DOMHTMLElement, NSString, DOMImplementation, DOMDocumentType;

@interface DOMDocument : DOMNode  {
}

@property(readonly) DOMDocumentType * doctype;
@property(readonly) DOMImplementation * implementation;
@property(readonly) DOMElement * documentElement;
@property(readonly) NSString * inputEncoding;
@property(readonly) NSString * xmlEncoding;
@property(copy) NSString * xmlVersion;
@property BOOL xmlStandalone;
@property(copy) NSString * documentURI;
@property(readonly) DOMAbstractView * defaultView;
@property(readonly) DOMStyleSheetList * styleSheets;
@property(copy) NSString * title;
@property(readonly) NSString * referrer;
@property(readonly) NSString * domain;
@property(readonly) NSString * URL;
@property(copy) NSString * cookie;
@property(retain) DOMHTMLElement * body;
@property(readonly) DOMHTMLCollection * images;
@property(readonly) DOMHTMLCollection * applets;
@property(readonly) DOMHTMLCollection * links;
@property(readonly) DOMHTMLCollection * forms;
@property(readonly) DOMHTMLCollection * anchors;
@property(readonly) NSString * lastModified;
@property(copy) NSString * charset;
@property(readonly) NSString * defaultCharset;
@property(readonly) NSString * readyState;
@property(readonly) NSString * characterSet;
@property(readonly) NSString * preferredStylesheetSet;
@property(copy) NSString * selectedStylesheetSet;


- (id)URL;
- (void)setBody:(id)arg1;
- (id)domain;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)getElementsByTagName:(id)arg1;
- (id)forms;
- (id)links;
- (id)documentElement;
- (id)createElement:(id)arg1;
- (id)doctype;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)body;
- (id)createRange;
- (id)getElementById:(id)arg1;
- (id)createCSSStyleDeclaration;
- (id)title;
- (id)images;
- (void)setTitle:(id)arg1;
- (id)createTouchList;
- (id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7;
- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)getElementsByClassName:(id)arg1;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getComputedStyle:(id)arg1 :(id)arg2;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)getElementsByName:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (BOOL)queryCommandSupported:(id)arg1;
- (BOOL)queryCommandState:(id)arg1;
- (BOOL)queryCommandIndeterm:(id)arg1;
- (BOOL)queryCommandEnabled:(id)arg1;
- (BOOL)execCommand:(id)arg1;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (id)createNSResolver:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)getOverrideStyle:(id)arg1 :(id)arg2;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)createTreeWalker:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createNodeIterator:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createEvent:(id)arg1;
- (id)adoptNode:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)createAttributeNS:(id)arg1 :(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createElementNS:(id)arg1 :(id)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)importNode:(id)arg1 :(BOOL)arg2;
- (id)importNode:(id)arg1 deep:(BOOL)arg2;
- (id)createEntityReference:(id)arg1;
- (id)createAttribute:(id)arg1;
- (id)createProcessingInstruction:(id)arg1 :(id)arg2;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)createDocumentFragment;
- (id)compatMode;
- (void)setSelectedStylesheetSet:(id)arg1;
- (id)selectedStylesheetSet;
- (id)preferredStylesheetSet;
- (id)characterSet;
- (id)readyState;
- (id)defaultCharset;
- (void)setCharset:(id)arg1;
- (id)charset;
- (id)lastModified;
- (id)anchors;
- (id)applets;
- (id)head;
- (void)setCookie:(id)arg1;
- (id)cookie;
- (id)referrer;
- (id)styleSheets;
- (id)defaultView;
- (void)setDocumentURI:(id)arg1;
- (id)documentURI;
- (void)setXmlStandalone:(BOOL)arg1;
- (BOOL)xmlStandalone;
- (void)setXmlVersion:(id)arg1;
- (id)xmlVersion;
- (id)xmlEncoding;
- (id)inputEncoding;
- (id)implementation;
- (id)webFrame;
- (id)URLWithAttributeString:(id)arg1;
- (id)_documentRange;
- (id)_focusableNodes;
- (id)createBlockPlaceholder;
- (void)dd_resetResults;

@end
