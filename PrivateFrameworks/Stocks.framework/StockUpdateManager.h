/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSMutableArray;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {
    NSMutableArray *_updaters;
    BOOL _postingRemoteUpdateNotification;
}

+ (id)sharedManager;
+ (void)clearSharedManager;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)isLoading;
- (void)failWithError:(id)arg1;
- (void)updateAllStocksBasic;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateStocksComprehensive:(id)arg1;
- (void)setBasicDataCacheTimeInterval:(double)arg1;
- (void)resetUpdaters;
- (void)stocksDidUpdateRemotely;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3;
- (id)_listUpdater;
- (id)_comprehensiveUpdater;
- (BOOL)hadError;
- (void)_createUpdatersIfNeeded;

@end
