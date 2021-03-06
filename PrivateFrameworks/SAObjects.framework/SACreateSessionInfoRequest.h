/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * sessionInfoRequest;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)createSessionInfoRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createSessionInfoRequest;

- (void)setSessionInfoRequest:(id)arg1;
- (id)sessionInfoRequest;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
