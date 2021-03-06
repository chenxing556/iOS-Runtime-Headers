/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMParentalControls : NSObject  {
    BOOL _shouldPostNotifications;
    BOOL _active;
    NSMutableDictionary *_parentalControls;
    BOOL _disableAV;
    BOOL _forceChatLogging;
}

@property(readonly) BOOL active;
@property(readonly) BOOL disableAV;
@property(readonly) BOOL forceChatLogging;
@property BOOL shouldPostNotifications;
@property(readonly) NSMutableDictionary * _parentalControls;
@property(readonly) BOOL _disableAV;
@property(readonly) BOOL _forceChatLogging;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (void)dealloc;
- (id)init;
- (BOOL)active;
- (BOOL)_forceChatLogging;
- (BOOL)_disableAV;
- (id)_parentalControls;
- (BOOL)shouldPostNotifications;
- (BOOL)accountHasWhitelist:(id)arg1;
- (BOOL)forceWhitelistForAccount:(id)arg1;
- (id)whitelistForAccount:(id)arg1;
- (BOOL)disableAccount:(id)arg1;
- (BOOL)accountIsEnabled:(id)arg1;
- (BOOL)forceWhitelistForService:(id)arg1;
- (id)whitelistForService:(id)arg1;
- (BOOL)disableService:(id)arg1;
- (BOOL)forceChatLogging;
- (BOOL)disableAV;
- (id)_serviceWithName:(id)arg1;
- (void)_managedPrefsNotification:(id)arg1;
- (void)_updateParentalSettings;
- (void)setShouldPostNotifications:(BOOL)arg1;
- (BOOL)okToConnectAccount:(id)arg1;

@end
