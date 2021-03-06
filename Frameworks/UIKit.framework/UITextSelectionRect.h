/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject  {
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rect;
@property(readonly) int writingDirection;
@property(readonly) BOOL containsStart;
@property(readonly) BOOL containsEnd;
@property(readonly) BOOL isVertical;
@property(getter=_isImpl,readonly) UITextSelectionRectImpl * isImpl;

+ (id)endRectFromRects:(id)arg1;
+ (id)startRectFromRects:(id)arg1;
+ (BOOL)endIsHorizontal:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdgeFromRects:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdgeFromRects:(id)arg1;
+ (BOOL)startIsHorizontal:(id)arg1;

- (BOOL)containsEnd;
- (int)writingDirection;
- (BOOL)containsStart;
- (BOOL)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (id)_isImpl;

@end
