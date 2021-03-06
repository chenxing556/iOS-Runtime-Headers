/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMDistributedLock : NSObject <NSLocking> {
}

@property(readonly) NSString * name;

+ (id)alloc;

- (id)name;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)initWithName:(id)arg1;

@end
