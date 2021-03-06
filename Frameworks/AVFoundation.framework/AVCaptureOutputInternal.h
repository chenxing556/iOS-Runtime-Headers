/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray, AVCaptureSession;

@interface AVCaptureOutputInternal : NSObject  {
    AVCaptureSession *session;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } metadataTransform;
    float rollAdjustment;
    BOOL physicallyMirrorsVideo;
}


- (void)dealloc;
- (id)init;

@end
