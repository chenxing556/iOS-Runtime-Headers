/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADConnectionForRefreshProtocol : NSObject <AccountRefreshProtocol> {
    NSString *_accountIdentifier;
}

+ (id)accountToRefreshForBasicAccount:(id)arg1;

- (void)dealloc;
- (id)_initWithBasicAccount:(id)arg1;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;

@end
