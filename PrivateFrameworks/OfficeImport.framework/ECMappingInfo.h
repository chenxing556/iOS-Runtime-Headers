/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface ECMappingInfo : NSObject  {
    NSString *mSheetName;
}

@property(readonly) NSString * sheetName;
@property(readonly) int rowOffset;
@property(readonly) int columnOffset;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (void)dealloc;
- (int)columnOffset;
- (int)rowOffset;
- (id)initWithSheetName:(id)arg1;
- (id)sheetName;

@end
