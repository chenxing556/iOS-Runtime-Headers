/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    double _version;
    BOOL _supportsTimeRangeFilter;
    BOOL _supportsTodoTimeRangeFilter;
    BOOL _supportsTimeRangeFilterWithoutEndDate;
    BOOL _supportsTimeRangeFilterOnInbox;
    BOOL _supportsAutoSchedule;
    BOOL _supportsPrivateComments;
    BOOL _supportsSharing;
    BOOL _supportsSharingNoScheduling;
    BOOL _supportsCalendarProxy;
    BOOL _supportsInboxAvailability;
    BOOL _supportsPrivateEvents;
    BOOL _supportsSubscriptionCalendars;
    BOOL _supportsPrincipalPropertySearch;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _supportsRequestCompression;
    BOOL _supportsManagedAttachments;
    NSString *_supportedCalendarComponentSets;
    NSSet *_complianceClasses;
    NSString *_serverHeader;
}

@property(readonly) NSString * type;
@property double version;
@property BOOL supportsTimeRangeFilter;
@property BOOL supportsTodoTimeRangeFilter;
@property BOOL supportsTimeRangeFilterWithoutEndDate;
@property BOOL supportsTimeRangeFilterOnInbox;
@property BOOL supportsAutoSchedule;
@property BOOL supportsPrivateComments;
@property BOOL supportsSharing;
@property BOOL supportsSharingNoScheduling;
@property BOOL supportsCalendarProxy;
@property BOOL supportsInboxAvailability;
@property BOOL supportsPrivateEvents;
@property BOOL supportsSubscriptionCalendars;
@property BOOL supportsPrincipalPropertySearch;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL supportsRequestCompression;
@property BOOL supportsManagedAttachments;
@property(copy) NSString * supportedCalendarComponentSets;
@property(retain) NSSet * complianceClasses;
@property(copy) NSString * serverHeader;

+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;

- (id)type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setVersion:(double)arg1;
- (double)version;
- (BOOL)supportsSharingNoScheduling;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (BOOL)supportsRequestCompression;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)supportsSharing;
- (BOOL)supportsPrivateComments;
- (BOOL)supportsAutoSchedule;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)supportedCalendarComponentSets;
- (BOOL)supportsTimeRangeFilterOnInbox;
- (BOOL)supportsTodoTimeRangeFilter;
- (BOOL)supportsTimeRangeFilter;
- (id)propertyValue;
- (void)setSupportsManagedAttachments:(BOOL)arg1;
- (BOOL)supportsManagedAttachments;
- (void)setSupportsPrincipalPropertySearch:(BOOL)arg1;
- (void)setSupportsSubscriptionCalendars:(BOOL)arg1;
- (BOOL)supportsSubscriptionCalendars;
- (void)setSupportsPrivateEvents:(BOOL)arg1;
- (BOOL)supportsPrivateEvents;
- (void)setSupportsCalendarProxy:(BOOL)arg1;
- (BOOL)supportsCalendarProxy;
- (void)setSupportsSharingNoScheduling:(BOOL)arg1;
- (void)setSupportsSharing:(BOOL)arg1;
- (void)setSupportsPrivateComments:(BOOL)arg1;
- (void)setSupportsAutoSchedule:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterOnInbox:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)arg1;
- (void)setSupportsTodoTimeRangeFilter:(BOOL)arg1;
- (void)setSupportsTimeRangeFilter:(BOOL)arg1;
- (id)_allFlagKeys;
- (id)complianceClasses;
- (id)serverHeader;
- (void)setSupportsRequestCompression:(BOOL)arg1;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (void)setSupportsInboxAvailability:(BOOL)arg1;
- (BOOL)supportsInboxAvailability;
- (void)setComplianceClasses:(id)arg1;
- (id)_additionalFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)setServerHeader:(id)arg1;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (BOOL)supportsPrincipalPropertySearch;

@end
