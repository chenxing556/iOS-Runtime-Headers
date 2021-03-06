/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    long _length;
    long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (const void*)bytes;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (unsigned int)length;
- (void*)mutableBytes;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)finalize;
- (void)setLength:(unsigned int)arg1;

@end
