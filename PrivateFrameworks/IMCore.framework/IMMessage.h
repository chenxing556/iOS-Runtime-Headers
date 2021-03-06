/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class FZMessage, NSDate, NSError, NSAttributedString, NSString, IMHandle, NSArray;

@interface IMMessage : NSObject <NSCopying> {
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSString *_plainBody;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timeRead;
    NSString *_guid;
    NSAttributedString *_messageSubject;
    NSArray *_fileTransferGUIDs;
    NSError *_error;
    unsigned long long _flags;
    BOOL _isInvitationMessage;
    long long _messageID;
}

@property(retain) IMHandle * sender;
@property(readonly) IMHandle * subject;
@property(retain) NSDate * time;
@property(retain) NSDate * timeRead;
@property(retain) NSDate * timeDelivered;
@property(retain) NSAttributedString * text;
@property(readonly) NSAttributedString * messageSubject;
@property(retain) NSError * error;
@property(readonly) NSString * guid;
@property long long messageID;
@property(readonly) NSString * plainBody;
@property(readonly) NSString * senderName;
@property(readonly) NSString * summaryString;
@property(readonly) NSArray * fileTransferGUIDs;
@property(readonly) BOOL hasInlineAttachments;
@property(readonly) NSArray * inlineAttachmentAttributesArray;
@property(readonly) BOOL isSent;
@property(readonly) BOOL isFinished;
@property(readonly) BOOL isTypingMessage;
@property(readonly) BOOL isEmote;
@property(readonly) BOOL isFromMe;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isDelayed;
@property(readonly) BOOL isAutoReply;
@property(readonly) BOOL isDelivered;
@property(readonly) BOOL isRead;
@property(readonly) BOOL isAddressedToMe;
@property(readonly) BOOL isAlert;
@property(readonly) BOOL isSystemMessage;
@property BOOL isInvitationMessage;
@property(readonly) BOOL hasDataDetectorResults;
@property(readonly) BOOL wasDowngraded;
@property(readonly) BOOL wasDataDetected;
@property unsigned long long flags;
@property(readonly) FZMessage * _fzMessage;

+ (id)messageFromFZMessage:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;

- (id)guid;
- (int)compare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isFinished;
- (id)subject;
- (id)sender;
- (id)time;
- (unsigned long long)flags;
- (BOOL)isDelayed;
- (id)text;
- (BOOL)isEmpty;
- (void)setIsInvitationMessage:(BOOL)arg1;
- (void)_updateError:(id)arg1;
- (void)_updateText:(id)arg1;
- (BOOL)wasDowngraded;
- (BOOL)isAlert;
- (BOOL)isAddressedToMe;
- (void)setIsAddressedToMe:(BOOL)arg1;
- (BOOL)isAutoReply;
- (id)inlineAttachmentAttributesArray;
- (id)summaryString;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (BOOL)hasDataDetectorResults;
- (int)_compareIMMessageDates:(id)arg1;
- (int)_compareIMMessageIDs:(id)arg1;
- (int)_compareIMMessageGUIDs:(id)arg1;
- (BOOL)hasInlineAttachments;
- (id)senderName;
- (BOOL)isEmote;
- (void)_updateMessageID:(long long)arg1;
- (void)_updateTimeDelivered:(id)arg1;
- (void)_updateTimeRead:(id)arg1;
- (void)_updateTime:(id)arg1;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 plainText:(id)arg5 text:(id)arg6 messageSubject:(id)arg7 fileTransferGUIDs:(id)arg8 flags:(unsigned long long)arg9 error:(id)arg10 guid:(id)arg11 messageID:(long long)arg12 subject:(id)arg13;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (void)_updateFlags:(unsigned long long)arg1;
- (id)_fzMessage;
- (void)_updateSender:(id)arg1;
- (BOOL)wasDataDetected;
- (BOOL)isSystemMessage;
- (BOOL)isTypingMessage;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)plainBody;
- (int)compare:(id)arg1 comparisonType:(int)arg2;
- (id)timeDelivered;
- (BOOL)isSent;
- (id)messageSubject;
- (id)fileTransferGUIDs;
- (BOOL)isInvitationMessage;
- (id)timeRead;
- (BOOL)isDelivered;
- (BOOL)isRead;
- (BOOL)isFromMe;
- (long long)messageID;
- (id)error;
- (BOOL)__ck_isEqualToMessageUsingGUID:(id)arg1;

@end
