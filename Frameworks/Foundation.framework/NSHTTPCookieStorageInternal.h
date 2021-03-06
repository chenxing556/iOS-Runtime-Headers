/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject  {
    struct OpaqueCFHTTPCookieStorage { } *storage;
    struct OpaqueCFHTTPCookieStorage { } *privateStorage;
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
}


- (void)dealloc;
- (id)initWithSharedStorage;
- (void)_syncCookies;

@end
