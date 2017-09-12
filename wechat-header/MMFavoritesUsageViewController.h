//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavoritesUsageDataControllerDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavSightView, MMFavoritesUsageDataController, MMTableView, MMUIWindow, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMFavoritesUsageViewController : MMUIViewController <FavoritesUsageDataControllerDelegate, IFavoritesExt, WCActionSheetDelegate>
{
    MMFavoritesUsageDataController *m_dataController;
    UIView *m_multiSelectActionView;
    UIButton *m_delBtn;
    UILabel *m_multiTipLabel;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavSightView *m_sightView;
    _Bool m_bFistLoadFromCache;
    int nLeftSize;
    int fromScene;
}

- (void).cxx_destruct;
- (void)HideLoadingView;
- (void)OnGetFirstPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) int fromScene; // @synthesize fromScene;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (id)getCurrentViewController;
- (int)getSelectCapacity;
- (void)hideSelectActionView;
- (id)init;
- (void)initEmptyView;
- (void)initLoadingView;
- (void)initMultiSelectActionView;
- (void)initNavigationBar;
- (void)initTableFooterView;
- (void)initTableView;
- (void)onBtnEdit;
- (void)onDeleteItems;
- (void)onLoadingMore;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)reloadTableView;
- (void)setViewTitle;
- (void)showChoosenCapacityUI;
- (void)showEmptyView;
- (void)showLeftCapacityUI;
- (void)stopActivityLoading;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

