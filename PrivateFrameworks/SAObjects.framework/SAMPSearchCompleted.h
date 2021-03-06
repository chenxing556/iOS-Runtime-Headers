/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAMPSearchCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
