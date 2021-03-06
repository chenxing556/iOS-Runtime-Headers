/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString;

@interface GKTypographicLayout : NSObject <GKTextLayout> {
    struct __CTFramesetter { } *_CTFramesetter;
    struct __CTFrame { } *_CTFrame;
    struct CGPoint { float x1; float x2; } *_positions;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    id _path;
    NSAttributedString *_attributedString;
    unsigned int _numberOfLines;
    float _leading;
}

@property(retain) id path;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(retain) NSAttributedString * attributedString;
@property unsigned int numberOfLines;
@property float leading;


- (void)setLeading:(float)arg1;
- (struct CGSize { float x1; float x2; })suggestFrameSizeFitsRange:(struct { int x1; int x2; }*)arg1;
- (struct CGPoint { float x1; float x2; }*)lineOrigins;
- (id)lines;
- (struct __CTFrame { }*)CTFrame;
- (struct __CTFramesetter { }*)CTFramesetter;
- (id)path;
- (void)dealloc;
- (void)setPath:(id)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (unsigned int)numberOfLines;
- (float)leading;
- (id)attributedString;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setAttributedString:(id)arg1;

@end
