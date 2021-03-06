/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSMutableDictionary, NSArray;

@interface VVVerifier : NSObject  {
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
}

+ (id)sharedVerifier;

- (void)dealloc;
- (id)humanReadableConfigurationDictionary:(id*)arg1;
- (id)readableError;
- (void)storeValue:(BOOL)arg1 forCheckpointKey:(id)arg2;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (id)configurationDictionary;
- (void)_checkpointDictionaryChanged;
- (BOOL)valueForCheckpointKey:(id)arg1 exists:(BOOL*)arg2;
- (void)_saveCheckpointDictionary;
- (id)_checkpointDictionary;
- (id)keyDescriptions;
- (id)_checkpointDictionaryFilePath;

@end
