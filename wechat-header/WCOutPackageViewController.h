//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCOutPackageProductListDelegate-Protocol.h"
#import "WCOutPurchasePackageDelegate-Protocol.h"

@class MMTableView, NSMutableDictionary, NSString, WCOPackageItem, WCOutGetPackageProductListCgi, WCOutPurchasePackageCgi;

@interface WCOutPackageViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCOutPackageProductListDelegate, WCOutPurchasePackageDelegate, MMTipsViewControllerDelegate>
{
    int _purchaseRetCode;
    NSMutableDictionary *_WCOPkgItemsDict;
    MMTableView *_tableView;
    WCOutGetPackageProductListCgi *_getproductCgi;
    WCOutPurchasePackageCgi *_purchaseCgi;
    WCOPackageItem *_item_buy;
}

- (void).cxx_destruct;
- (void)PackageProductListResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
- (void)PurchasePackageResponse:(int)arg1 Request:(id)arg2 Response:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *WCOPkgItemsDict; // @synthesize WCOPkgItemsDict=_WCOPkgItemsDict;
- (void)configData;
- (void)configTableWithoutData;
- (void)didReceiveMemoryWarning;
- (double)getCellContentHeightBtIndex:(id)arg1;
- (id)getPackageByIndex:(unsigned long long)arg1;
@property(retain, nonatomic) WCOutGetPackageProductListCgi *getproductCgi; // @synthesize getproductCgi=_getproductCgi;
- (void)initTableView;
@property(retain, nonatomic) WCOPackageItem *item_buy; // @synthesize item_buy=_item_buy;
- (void)onClickBuy:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
@property(retain, nonatomic) WCOutPurchasePackageCgi *purchaseCgi; // @synthesize purchaseCgi=_purchaseCgi;
@property(nonatomic) int purchaseRetCode; // @synthesize purchaseRetCode=_purchaseRetCode;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)showNOPackageLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

