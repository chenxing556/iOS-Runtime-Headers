/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVCaptureConnection, CALayer, AVCaptureSession;

@interface AVCaptureVideoPreviewLayerInternal : NSObject  {
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    CALayer *sublayer;
    struct CGSize { 
        float width; 
        float height; 
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    struct CGSize { 
        float width; 
        float height; 
    } previewSize;
    float previewRotationDegrees;
    NSString *gravity;
    BOOL disableActions;
    int orientation;
    BOOL automaticallyAdjustsMirroring;
    BOOL mirrored;
    BOOL isPresentationLayer;
    BOOL visible;
    BOOL isPaused;
    BOOL chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } captureDeviceTransform;
    float rollAdjustment;
}



@end
