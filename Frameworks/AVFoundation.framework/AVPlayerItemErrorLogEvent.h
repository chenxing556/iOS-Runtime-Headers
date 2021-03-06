/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (id)date;
- (id)URI;

@end
