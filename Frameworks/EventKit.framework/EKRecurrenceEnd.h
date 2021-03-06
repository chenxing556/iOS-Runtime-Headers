/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
    NSDate *_endDate;
    unsigned int _occurrenceCount;
}

@property(readonly) NSDate * endDate;
@property(readonly) unsigned int occurrenceCount;

+ (id)recurrenceEndWithOccurrenceCount:(unsigned int)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;

- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)usesEndDate;
- (id)initWithOccurrenceCount:(unsigned int)arg1;
- (id)initWithEndDate:(id)arg1;
- (unsigned int)occurrenceCount;
- (id)endDate;

@end
