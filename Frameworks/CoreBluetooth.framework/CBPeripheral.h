/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, NSString, <CBPeripheralDelegate>, NSNumber;

@interface CBPeripheral : NSObject  {
    <CBPeripheralDelegate> *_delegate;
    struct __CFUUID { } *_UUID;
    NSString *_name;
    NSNumber *_RSSI;
    BOOL _isConnected;
    NSArray *_services;
}

@property <CBPeripheralDelegate> * delegate;
@property(readonly) struct __CFUUID { }* UUID;
@property(retain) NSString * name;
@property(retain) NSNumber * RSSI;
@property BOOL isConnected;
@property(retain) NSArray * services;


- (id)services;
- (void)setServices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setName:(id)arg1;
- (id)name;
- (struct __CFUUID { }*)UUID;
- (void)setIsConnected:(BOOL)arg1;
- (id)RSSI;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;
- (void)readValueForDescriptor:(id)arg1;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)setIndicateValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3;
- (void)readValueForCharacteristic:(id)arg1;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverServices:(id)arg1;
- (void)readRSSI;
- (void)setRSSI:(id)arg1;
- (BOOL)isConnected;

@end
