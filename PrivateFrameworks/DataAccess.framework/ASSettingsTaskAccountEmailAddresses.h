/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, NSMutableSet;

@interface ASSettingsTaskAccountEmailAddresses : ASItem  {
    NSMutableSet *_emailAddresses;
    NSString *_primarySMTPAddress;
}

@property(readonly) NSArray * emailAddresses;
@property(readonly) NSString * primarySMTPAddress;

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)emailAddresses;
- (id)description;
- (void)dealloc;
- (id)primarySMTPAddress;
- (void)setPrimarySMTPAddress:(id)arg1;
- (void)addEmailAddress:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
