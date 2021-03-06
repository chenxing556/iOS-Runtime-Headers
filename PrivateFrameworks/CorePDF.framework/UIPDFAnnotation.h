/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageView, UIPDFAnnotationView, UIPDFPopupAnnotation, NSMutableArray, NSString, CALayer, UIPDFSelection;

@interface UIPDFAnnotation : NSObject  {
    struct CGPDFDictionary { } *_dictionary;
    struct CGColor { } *_color;
    void *_appearanceStream;
    struct CGPDFString { } *_pdfContents;
    NSString *_annotationID;
    BOOL _hidden;
    UIPDFAnnotationView *_annotationView;
    UIPDFPageView *_pageView;
    NSMutableArray *_quadPoints;
    CALayer *_drawingLayer;
    BOOL editable;
    id data;
    NSString *_contents;
    int _index;
    UIPDFPopupAnnotation *_popup;
    NSString *_associatedAnnotationID;
    int annotationStyle;
}

@property(retain) CALayer * drawingLayer;
@property(retain) UIPDFAnnotationView * annotationView;
@property UIPDFPageView * pageView;
@property BOOL editable;
@property UIPDFSelection * selection;
@property(retain) id data;
@property(retain) NSString * contents;
@property int index;
@property UIPDFPopupAnnotation * popup;
@property(retain) NSString * associatedAnnotationID;
@property int annotationStyle;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (struct CGPath { }*)newPathFromQuadPoints;
- (id)associatedAnnotationID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popUpAnnotationRect;
- (const char *)pdfContents;
- (BOOL)hasPopUp;
- (BOOL)isMarkupAnnotation;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)makeQuadpointsFrom:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectIn:(struct CGPDFArray { }*)arg1;
- (id)annotationID;
- (id)newSelection;
- (void)setDrawingLayer:(id)arg1;
- (id)drawingLayer;
- (void)setAnnotationView:(id)arg1;
- (id)annotationView;
- (void)setAssociatedAnnotationID:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (void)setAnnotationStyle:(int)arg1;
- (void)setPageView:(id)arg1;
- (id)pageView;
- (int)annotationStyle;
- (id)data;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })Rect;
- (Class)viewClass;
- (BOOL)hidden;
- (id)popup;
- (void)setPopup:(id)arg1;
- (BOOL)editable;
- (int)index;
- (void)setEditable:(BOOL)arg1;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)setData:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)archive;
- (int)annotationType;

@end
