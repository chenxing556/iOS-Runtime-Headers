/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */



@interface CTMessageStatus : NSObject 
{
    NSUInteger _messageId;
    NSInteger _messageType;
    NSInteger _result;
}

@property(readonly) NSInteger result; /* unknown property attribute: V_result */
@property(readonly) NSInteger messageType; /* unknown property attribute: V_messageType */
@property(readonly) NSUInteger messageId; /* unknown property attribute: V_messageId */


- (id)initWithMessageId:(NSUInteger)arg1 messageType:(NSInteger)arg2 result:(NSInteger)arg3;
- (NSInteger)result;
- (NSInteger)messageType;
- (NSUInteger)messageId;

@end