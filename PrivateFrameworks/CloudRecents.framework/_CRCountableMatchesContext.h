/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudRecents.framework/CloudRecents
 */

@class NSMutableSet;

@interface _CRCountableMatchesContext : NSObject  {
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
    int _maxCount;
}

@property int maxCount;


- (void)dealloc;
- (id)init;
- (void)setMaxCount:(int)arg1;
- (int)maxCount;
- (id)highestMatches;
- (void)countInstances:(id)arg1 usingPredicate:(id)arg2;

@end
