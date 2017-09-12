//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FavSearchControllerDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FavForwardLogicController, FavTypeItemsView, FavoritesItem, MMFavoritesSearchController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIView;
@protocol MyFavoritesListViewControllerDelegate;

@interface MyFavoritesListViewController : MMSearchBarDisplayController <UITableViewDataSource, UITableViewDelegate, IFavoritesExt, FavSearchControllerDelegate, FavForwardLogicDelegate>
{
    MMFavoritesSearchController *m_searchController;
    NSMutableArray *_arrFavData;
    NSMutableDictionary *_cellViewCache;
    _Bool _isReadyToLoad;
    unsigned int _curMinItemUpdateTime;
    UIView *m_headView;
    UIView *_emptyView;
    MMTableView *_tableView;
    UIView *_footerView;
    UIActivityIndicatorView *_activityView;
    FavoritesItem *m_selectFavItem;
    id <MyFavoritesListViewControllerDelegate> _delegate;
    long long m_preInterfaceOrientation;
    FavTypeItemsView *m_favTypeItemsView;
    FavForwardLogicController *m_favForwardLogic;
}

- (void).cxx_destruct;
- (void)OnCancelModalView:(id)arg1;
- (void)OnForwardDone;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <MyFavoritesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectFavItem:(id)arg1;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)getCurrentViewController;
- (id)getFavForawrdViewController;
- (double)getHeightForItem:(id)arg1;
- (id)init;
- (void)initData;
- (void)initEmptyView;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)initTableFooterView;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadMore;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)resetHeaderView:(id)arg1;
- (void)resetTableViewOffset:(id)arg1;
- (_Bool)safeAddItemList:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)stopActivityLoading;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

