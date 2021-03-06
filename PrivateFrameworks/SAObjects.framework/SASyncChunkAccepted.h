/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand  {
}

@property(retain) SASyncAnchor * current;

+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkAccepted;

- (id)groupIdentifier;
- (void)setCurrent:(id)arg1;
- (id)current;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
