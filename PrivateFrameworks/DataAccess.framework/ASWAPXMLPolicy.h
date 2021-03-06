/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy  {
    NSString *_data;
}

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)data;
- (void)dealloc;
- (id)perDomainDictsForPolicy;
- (id)_wbxmlPolicyDict;
- (id)_policyForWAPProvisioningXMLData;
- (void)_setData:(id)arg1;

@end
