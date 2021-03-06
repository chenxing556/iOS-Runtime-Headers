/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSSet, NSMutableSet;

@interface PLAnnotationPen : NSObject  {
    NSMutableSet *_set;
    id _target;
    SEL _selector;
    id _context;
}

@property(readonly) NSSet * set;
@property id target;
@property SEL selector;
@property id context;


- (void)setTarget:(id)arg1;
- (id)target;
- (id)description;
- (void)dealloc;
- (id)init;
- (SEL)selector;
- (void)setContext:(id)arg1;
- (id)context;
- (id)set;
- (void)setSelector:(SEL)arg1;
- (BOOL)empty;
- (void)removeAnnotations:(id)arg1;
- (void)removeAllAnnotations;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;

@end
