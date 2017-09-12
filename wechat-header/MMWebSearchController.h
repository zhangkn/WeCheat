//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSWebSearchDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "WAAppCanvasWrapperViewDelegate-Protocol.h"
#import "WASearchFromGlobalProxyDelegate-Protocol.h"
#import "WSContactSearchLogicDelegate-Protocol.h"
#import "WSJSEventHandleDelegate-Protocol.h"
#import "WSSuggestionLogicDelegate-Protocol.h"
#import "WSTagSearchDelegate-Protocol.h"

@class FTSWebSearchMgr, MMTagSearchBar, MMUIViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIColor, UIImageView, UISearchDisplayController, UITextField, UIView, WASearchFromGlobalProxy, WSContactSearchLogic, WSJSEventHandler, WSResultViewLogic, WSSuggestionLogic, WSTagSearchLogic;
@protocol MMWebSearchViewDelegate;

@interface MMWebSearchController : NSObject <UISearchBarDelegate, UISearchDisplayDelegate, UIScrollViewDelegate, WSJSEventHandleDelegate, FTSWebSearchDataSource, WSTagSearchDelegate, WSContactSearchLogicDelegate, WASearchFromGlobalProxyDelegate, WSSuggestionLogicDelegate, WAAppCanvasWrapperViewDelegate>
{
    NSString *_lastShouldChangedFormatQuery;
    MMUIViewController *_contentVC;
    FTSWebSearchMgr *_webSearchMgr;
    NSMutableArray *_arrResultViews;
    WSResultViewLogic *_resultViewLogic;
    NSString *_query;
    UIImageView *_searchBarWrap;
    UIView *_searchBarSuperView;
    UIButton *_backButton;
    WSJSEventHandler *_jsEventHandler;
    WSContactSearchLogic *_searchContactLogic;
    WSTagSearchLogic *_tagSearchLogic;
    WSSuggestionLogic *_nativeSuggestionLogic;
    int _initSearchScene;
    int _searchContext;
    unsigned long long _mainBusinessType;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    NSString *_browsingTID;
    NSMutableArray *_arrDeletedTID;
    UIImageView *_bottomViewShadow;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _bHasStartRetrieveLocation;
    _Bool _bForbidSearchControllerCallBack;
    _Bool _isWeAppSearch;
    WASearchFromGlobalProxy *_weAppSearchProxy;
    int _currentShowViewType;
    _Bool _alwaysForbidVCInteractivePop;
    _Bool _bSkipBackButtonAtFirst;
    _Bool _bUseCustomSearchInput;
    _Bool _bUseBlurViewBeforeSearch;
    _Bool _bNeedsLuanchingWebViewBackgroundColor;
    id <MMWebSearchViewDelegate> _delegate;
    NSDictionary *_urlParams;
    UIView *_viewForBlur;
    UIColor *_luanchingWebViewBackgroundColor;
    UIView *_resultContainerView;
    UIView *_blurView;
    UISearchDisplayController *_searchDisplayController;
    MMTagSearchBar *_searchBar;
    UITextField *_searchTextField;
    UIImageView *_searchLeftIcon;
    UIView *_searchPromtLabel;
    NSMutableDictionary *_widgetViewCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysForbidVCInteractivePop; // @synthesize alwaysForbidVCInteractivePop=_alwaysForbidVCInteractivePop;
- (void)asyncSearch:(id)arg1;
@property(nonatomic) _Bool bNeedsLuanchingWebViewBackgroundColor; // @synthesize bNeedsLuanchingWebViewBackgroundColor=_bNeedsLuanchingWebViewBackgroundColor;
@property(nonatomic) _Bool bSkipBackButtonAtFirst; // @synthesize bSkipBackButtonAtFirst=_bSkipBackButtonAtFirst;
@property(nonatomic) _Bool bUseBlurViewBeforeSearch; // @synthesize bUseBlurViewBeforeSearch=_bUseBlurViewBeforeSearch;
@property(nonatomic) _Bool bUseCustomSearchInput; // @synthesize bUseCustomSearchInput=_bUseCustomSearchInput;
- (void)beginSearch:(_Bool)arg1;
@property(readonly, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
- (unsigned long long)businessType;
- (void)cancelMoveDetailView;
- (void)cancelSearch;
- (void)cancelSearchAnimated:(_Bool)arg1;
- (_Bool)checkBrowsingSnsItem:(id)arg1;
- (void)clearHistoryOperation;
- (void)clearResource;
- (void)clearSearchBarComponent;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(id)arg2;
- (id)currentResultView;
- (int)currentWebSearchContext;
- (void)dealloc;
@property(nonatomic) __weak id <MMWebSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteHistorySuggestion:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)enableButton:(id)arg1;
- (void)enableSearchBar;
- (unsigned int)getCorrectLevel:(id)arg1;
- (int)getCurrentShowViewType;
- (id)getHistoryResult;
- (id)getLatestSearchKeyword;
- (id)getNativeSuggestionId;
- (double)getSearchTextFieldWidth;
- (id)getSuggestionResult;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)hideKeyboard;
- (void)hideSearchKeyboard;
- (void)initBackButton;
- (void)initBlurView;
- (void)initContactSearchLogic;
- (void)initData;
- (void)initNativeSuggestionLogic;
- (void)initResultView;
- (void)initSearchBar;
- (void)initSearchContext;
- (void)initTagSearchLogic;
- (void)initView;
- (void)initWebSearchMgr;
- (id)initWithScene:(int)arg1 contentVC:(id)arg2;
- (_Bool)isCurrentSearchTypeSupportSuggestion;
- (_Bool)isMainViewForMixSearch;
- (_Bool)isSpecialTopBarMode;
- (_Bool)isSubSearch;
- (_Bool)isSupportLocalSuggestion;
- (_Bool)isSupportSuggestion;
- (_Bool)isVerticalSearch;
- (void)loadH5ForMainView;
- (void)loadLocalHtmlForDetailPage:(id)arg1;
@property(retain, nonatomic) UIColor *luanchingWebViewBackgroundColor; // @synthesize luanchingWebViewBackgroundColor=_luanchingWebViewBackgroundColor;
- (void)mainContentQueryChanged:(id)arg1;
- (id)makeNewDetailView:(id)arg1;
- (void)moveDetailViewToRight;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)onBackBtnClick;
- (void)onBrowsingSnsItem:(id)arg1;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onInsertHistoryOperation:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (void)onOpenWAWidgetLogViewWithParams:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onRemoveDetailView;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onReturnWSContactResult:(id)arg1;
- (void)onSearchInputBeginEditting:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (_Bool)onSearchInputClickBack;
- (void)onSearchInputClickCancel:(unsigned long long)arg1;
- (void)onSearchInputClickKeyboardCancel;
- (void)onSearchInputClickSearch:(id)arg1;
- (void)onSearchInputSwitchSearchContext:(id)arg1;
- (void)onSearchInputTextChanged:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)onTapBlurView;
- (void)onUpdateSuggestion;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onViewTypeChange:(id)arg1;
- (void)onWAProxyCGISearch:(id)arg1;
- (void)onWAProxyHideKeyboard;
- (void)onWAProxySearchInputChanged:(id)arg1;
- (void)onWAProxyWillBeginDetailSearch:(id)arg1;
- (void)onWSMusicStatusChanged:(id)arg1;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)popFromDetailSearch;
- (void)prepareSearchAnimated:(_Bool)arg1;
- (void)pushToKeywordStack:(id)arg1;
- (id)query;
- (void)reportNativeSugClick:(id)arg1 withParams:(id)arg2;
- (void)reportNativeSugFill:(id)arg1 withParams:(id)arg2;
- (void)resetSearchIconFrame;
@property(readonly, nonatomic) UIView *resultContainerView; // @synthesize resultContainerView=_resultContainerView;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) MMTagSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) UIView *searchBarWrap; // @synthesize searchBarWrap=_searchBarWrap;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
@property(retain, nonatomic) UIImageView *searchLeftIcon; // @synthesize searchLeftIcon=_searchLeftIcon;
- (id)searchLeftView;
@property(retain, nonatomic) UIView *searchPromtLabel; // @synthesize searchPromtLabel=_searchPromtLabel;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (id)secondLastResultView;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
@property(nonatomic) __weak UIView *viewForBlur; // @synthesize viewForBlur=_viewForBlur;
@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
- (void)startRetriveLocation;
- (void)tryAsyncSearchContact:(id)arg1;
- (void)updateContentView;
- (void)updateMovingDetailView;
- (void)updateSearchBarInfo;
- (id)viewStacks;
@property(readonly, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
- (void)willBeginDetailSearch:(id)arg1 context:(int)arg2;
- (void)willBeginDetailSearchOfWeApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

