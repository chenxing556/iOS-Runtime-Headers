/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject  {
    id _internal;
}

@property(retain) ALAssetRepresentationPrivate * internal;


- (void)setInternal:(id)arg1;
- (id)internal;
- (id)description;
- (void)dealloc;
- (id)metadata;
- (struct CGImage { }*)fullScreenImage;
- (unsigned int)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned int)arg3 error:(id*)arg4;
- (struct CGImage { }*)fullResolutionImage;
- (id)UTI;
- (id)url;
- (BOOL)isValid;
- (float)scale;
- (int)orientation;
- (long long)size;
- (int)_fileDescriptor;
- (id)filename;
- (struct CGSize { float x1; float x2; })dimensions;
- (struct CGImage { }*)CGImageWithOptions:(id)arg1;
- (struct CGImage { }*)CGImageWithOptions:(id)arg1 format:(int)arg2 bakeInOrientation:(int)arg3;
- (id)_imageData;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

@end
