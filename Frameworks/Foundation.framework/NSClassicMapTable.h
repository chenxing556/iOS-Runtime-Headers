/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSClassicMapTable : NSMapTable 
{
    struct __CFDictionary { } *_table;
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
        void *notAKeyMarker; 
    } _keyCallBacks;
    struct { 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _valueCallBacks;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)removeAllItems;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)removeObjectForKey:(id)arg1;
- (NSUInteger)count;
- (id)description;
- (id)allKeys;
- (id)allValues;
- (NSUInteger)getKeys:(const void**)arg1 values:(const void**)arg2;

@end