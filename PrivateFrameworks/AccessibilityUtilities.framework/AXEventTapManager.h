/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSMutableSet;

@interface AXEventTapManager : NSObject  {
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _installationCallback;

}

@property(copy) id installationCallback;

+ (id)sharedManager;

- (id)installationCallback;
- (void)removeEventTap:(id)arg1;
- (id)installEventTap:(id)arg1;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (BOOL)_processEvent:(struct { int x1; int x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned char x11[0]; }*)arg1;
- (void)sendEvent:(struct { int x1; int x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned char x11[0]; }*)arg1 withPort:(unsigned int)arg2 afterTap:(id)arg3;
- (void)setInstallationCallback:(id)arg1;
- (id)installEventTap:(id)arg1 identifier:(id)arg2;
- (void)_enumerateEventTapPairsUsingBlock:(id)arg1;
- (void)_setEventTapCallback:(void*)arg1;
- (void)_reorderEventTaps;
- (id)description;
- (void)dealloc;
- (id)init;

@end
