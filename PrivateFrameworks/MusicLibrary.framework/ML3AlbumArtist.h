/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumArtist : ML3Collection  {
}

+ (id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)arg1 albumArtistName:(id)arg2 artistSortName:(id)arg3 artistName:(id)arg4 compilation:(BOOL)arg5;
+ (id)effectiveAlbumArtistNameForAlbumArtistName:(id)arg1 artistName:(id)arg2 seriesName:(id)arg3 compilation:(BOOL)arg4;
+ (id)artworkCacheIDProperty;
+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingProperties;
+ (void)initialize;
+ (id)countingQueryForMPMediaEntityProperty:(id)arg1 library:(id)arg2 identifier:(long long)arg3;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
