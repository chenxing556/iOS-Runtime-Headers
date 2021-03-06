/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADPath : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}


- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)setFillMode:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)fillMode;
- (void)setStroked:(BOOL)arg1;
- (BOOL)stroked;
- (id)elementAtIndex:(unsigned int)arg1;
- (unsigned int)elementCount;
- (void)addElement:(id)arg1;

@end
