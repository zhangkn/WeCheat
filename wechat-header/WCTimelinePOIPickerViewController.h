//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ILBSLifeMgrExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "IPOILocationDisplayExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMAutoSearchLogicDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "POICreateDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CLLocation, LbsLife, LocationRetriever, MMAutoSearchLogic, MMSearchBar, MMTableView, NSIndexPath, NSMutableArray, NSString, UILabel, UIView, WCTimeLineFooterView;
@protocol WCTimelinePOIPickerViewControllerDelegate;

@interface WCTimelinePOIPickerViewController : MMSearchBarDisplayController <UITableViewDelegate, tableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMSearchBarDelegate, ILBSLifeMgrExt, LocationRetrieveDelegate, ILocationMgrExt, POICreateDelegate, IPOILocationDisplayExt, MMAutoSearchLogicDelegate>
{
    id <WCTimelinePOIPickerViewControllerDelegate> _delegate;
    _Bool _bSightScene;
    NSString *_searchKeyword;
    MMTableView *_tableView;
    MMSearchBar *_searchBar;
    UIView *_logoFooterView;
    LocationRetriever *_locationRetriever;
    CLLocation *_lastUpdateLocation;
    WCTimeLineFooterView *_getListTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    unsigned int _scene;
    NSMutableArray *_lifeList;
    NSMutableArray *_searchResultList;
    unsigned long long _geoTag;
    UILabel *_searchErrorTips;
    NSString *_address;
    LbsLife *_selectedItem;
    int _poiCreateForbiden;
    _Bool _showCreatePOI;
    long long _startGetListTime;
    long long _firstGetListTime;
    long long _endGetListTime;
    unsigned int _getListPageCount;
    long long _startSearchTime;
    long long _firstSearchTime;
    long long _endSearchTime;
    unsigned int _searchPageCount;
    unsigned int _entryTime;
    NSString *_lastSelectLog;
    NSString *_currentSearchID;
    unsigned int _statImageCount;
    unsigned int _statLocationImageCount;
    _Bool _statHadSearch;
    NSString *_requestId;
    MMAutoSearchLogic *_autoSearchLogic;
    NSIndexPath *_currentIndexPath;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnAutoSearchLBSLife:(id)arg1 Keyword:(id)arg2 NextQueryInterval:(double)arg3 Error:(int)arg4 IsStartFromFirst:(_Bool)arg5;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)OnSearchLBSLife:(id)arg1 Keyword:(id)arg2 Error:(int)arg3 IsStartFromFirst:(_Bool)arg4;
- (void)addCityItem:(id)arg1;
- (void)addCreatePOIItem;
- (void)addLBSLifeListItem:(id)arg1;
- (void)addNotCheckInItem;
- (void)addSearchResultItem:(id)arg1;
- (void)addSelectedItem;
- (void)adjustSubviewRects;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(_Bool)arg2;
@property(nonatomic) _Bool bSightScene; // @synthesize bSightScene=_bSightScene;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCTimelinePOIPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didScrollViewScroll:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)filterSearchResultList;
- (void)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (void)getLBSLife:(_Bool)arg1;
- (double)getTableViewMarginTop;
- (double)heightForSearchViewTable:(id)arg1;
- (id)init;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (id)makeCell:(id)arg1 forLBSLifeItem:(id)arg2;
- (id)makeCellForCreatePOIItem:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onDone;
- (void)onGetPOIDisplayName:(id)arg1 ForLocation:(id)arg2 Scene:(int)arg3 SrcDisplayName:(id)arg4 extraInfo:(id)arg5 Error:(int)arg6;
- (void)onPOICreated:(id)arg1 PoiID:(id)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)removeCreatePOIItem;
- (void)reportOnCommit;
- (void)reset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchLBSLife:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)selectLBSLife:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)showDataProviderInfo:(id)arg1;
- (void)showSearchTableLoadMore;
- (void)startUpdateLocation;
- (void)stopGeocoder;
- (void)stopUpdateLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateLocation:(id)arg1 imageCount:(unsigned int)arg2 locaionImageCount:(unsigned int)arg3;
- (void)updateSearchBarTips;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

