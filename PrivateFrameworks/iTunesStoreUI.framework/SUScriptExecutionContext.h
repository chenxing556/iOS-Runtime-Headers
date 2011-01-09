/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebView, ISStoreURLOperation;



@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate>
{
    ISStoreURLOperation *_loadOperation;
    BOOL _sourceIsTrusted;
    SUWebView *_webView;
}

@property(readonly) id windowScriptObject;
@property(readonly) OpaqueJSContext *globalExecutionContext;
@property BOOL sourceIsTrusted;


- (void)evaluateScriptAtURL:(id)arg1;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (void)_cancelLoadOperation;
- (id)_newLoadOperation;
- (BOOL)sourceIsTrusted;
- (BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)_webView;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (id)parentViewControllerForWebView:(id)arg1;
- (id)windowScriptObject;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (struct OpaqueJSContext { }*)globalExecutionContext;
- (void)dealloc;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;

@end