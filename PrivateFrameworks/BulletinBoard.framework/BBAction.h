/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSString, NSDictionary;

@interface BBAction : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _internalBlock;

    BOOL _hasCallblock;
    BOOL _canBypassPinLock;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    int _replyType;
    NSString *_activatePluginName;
    NSDictionary *_activatePluginContext;
}

@property(retain) NSURL * launchURL;
@property(copy) NSString * launchBundleID;
@property(copy) NSString * activatePluginName;
@property(copy) NSDictionary * activatePluginContext;
@property BOOL canBypassPinLock;
@property(copy) id internalBlock;
@property BOOL hasCallblock;
@property int replyType;

+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithTextReplyCallblock:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id)arg2;
+ (id)actionWithCallblock:(id)arg1;

- (id)bundleID;
- (id)launchURL;
- (void)setLaunchURL:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAppLaunchAction;
- (BOOL)isURLLaunchAction;
- (BOOL)wantsTextReply;
- (BOOL)hasLaunchInfo;
- (id)partialDescription;
- (void)setCanBypassPinLock:(BOOL)arg1;
- (BOOL)canBypassPinLock;
- (id)activatePluginContext;
- (id)activatePluginName;
- (id)launchBundleID;
- (id)internalBlock;
- (int)replyType;
- (void)setReplyType:(int)arg1;
- (void)setHasCallblock:(BOOL)arg1;
- (void)setInternalBlock:(id)arg1;
- (void)setActivatePluginContext:(id)arg1;
- (void)setActivatePluginName:(id)arg1;
- (id)_initWithInternalCallblock:(id)arg1 replyType:(int)arg2;
- (id)initWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
- (id)initWithTextReplyCallblock:(id)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (id)initWithCallblock:(id)arg1;
- (void)deliverResponse:(id)arg1;
- (BOOL)hasCallblock;

@end
