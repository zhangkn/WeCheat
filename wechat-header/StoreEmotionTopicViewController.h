//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "LoopPageScrollViewDataSourceDelegate-Protocol.h"
#import "MMEmotionChartsCellDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "StoreEmotionGetEmotionListCgiDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class EmoticonStoreFootView, EmotionBannerSet, LoopPageScrollView, MMLoadingView, MMTableView, NSMutableArray, NSString, ShareMessageConfirmLogicHelper, StoreEmotionGetEmotionListCgi, StoreEmotionPageShareLogic;

@interface StoreEmotionTopicViewController : MMUIViewController <LoopPageScrollViewDataSourceDelegate, UITableViewDataSource, UITableViewDelegate, tableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate, StoreEmotionGetEmotionListCgiDelegate>
{
    LoopPageScrollView *_bannerView;
    MMTableView *_tableView;
    EmoticonStoreFootView *_tailView;
    EmotionBannerSet *_storeAd;
    NSMutableArray *_topicEmotionList;
    ShareMessageConfirmLogicHelper *_shareMessageHelper;
    MMLoadingView *_shareLoadingView;
    StoreEmotionGetEmotionListCgi *m_getEmotionListCgi;
    StoreEmotionPageShareLogic *m_shareLogic;
    long long m_extranceScene;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)didChangeToPage:(unsigned int)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)initTableFooterView;
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (void)onOperate:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupData;
- (void)setupNoContentView;
- (void)setupRightBarButton;
- (void)setupTableView;
- (void)setupViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (int)totalNumOfPage;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

