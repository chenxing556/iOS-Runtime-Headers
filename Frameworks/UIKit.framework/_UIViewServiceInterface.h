/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, _UIAsyncInvocation, BKSProcessAssertion, _UIViewServiceSessionEndpoint;

@interface _UIViewServiceInterface : NSObject  {
    int _terminationStateLock;
    NSError *_terminationError;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    BOOL _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    _UIViewServiceSessionEndpoint *_serviceSessionEndpoint;
    BKSProcessAssertion *_serviceProcessAssertion;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;

- (unsigned int)retainCount;
- (id)retain;
- (void)dealloc;
- (oneway void)release;
- (id)_initWithConnectionInfo:(struct { id x1; id x2; })arg1 serviceBundleIdentifier:(id)arg2;
- (void)setTerminationHandler:(id)arg1;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (int)__automatic_invalidation_logic;
- (id)connectToDeputyOfType:(id)arg1 connectionHandler:(id)arg2;
- (id)disconnect;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end
