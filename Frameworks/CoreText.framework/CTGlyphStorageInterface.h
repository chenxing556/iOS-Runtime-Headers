/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface CTGlyphStorageInterface : NSObject  {
    long _glyphCount;
    unsigned short *_glyphs;
    struct CGSize { float x1; float x2; } *_advances;
    unsigned int *_props;
    int *_stringIndexes;
    int *_absorbedCounts;
}


- (void)disposeGlyphStack;
- (void)popGlyph:(long)arg1;
- (void)pushGlyph:(long)arg1;
- (void)initGlyphStack:(long)arg1;
- (void)insertGlyphs:(struct { int x1; int x2; })arg1;
- (void)moveGlyphsTo:(long)arg1 from:(struct { int x1; int x2; })arg2;
- (void)swapGlyph:(long)arg1 withIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 forIndex:(long)arg2;
- (void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long)arg2;
- (void)setAdvance:(struct CGSize { float x1; float x2; })arg1 forIndex:(long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2;
- (void)getCustomAdvance:(struct CGSize { float x1; float x2; }*)arg1 forIndex:(long)arg2;
- (struct __CTGlyphStorage { }*)createCopy:(struct { int x1; int x2; })arg1;

@end
