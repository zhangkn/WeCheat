//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMProductControllerExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "ViewLocationDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCanvasComponentDelegate-Protocol.h"
#import "WCCanvasDynamicDataLoaderDelegate-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CMessageWrap, FavForwardLogicController, ForwardMessageLogicController, MMLoadingView, MMProgressViewEx, MMTableView, MMTimer, MMUIWindow, MMWebImageView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage, UIImageView, UINavigationController, UIView, WCAdvertiseInfo, WCCanvasArrowDownIcon, WCCanvasComponentItem, WCCanvasDynamicDataLoader, WCCanvasReportMgr, WCDataItem;
@protocol WCCanvasPageViewControllerDelegate;

@interface WCCanvasPageViewController : MMUIViewController <WCCanvasComponentDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, UIViewControllerAnimatedTransitioning, UINavigationControllerDelegate, WCCanvasImageLoaderObserver, ViewLocationDelegate, FavForwardLogicDelegate, WCCanvasDynamicDataLoaderDelegate, MMWebImageViewDelegate, MMProductControllerExt, UIWebViewDelegate, WCNetworkMediaPlayerDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    WCDataItem *m_dataItem;
    MMTableView *m_tableView;
    CMessageWrap *m_msgWrap;
    WCAdvertiseInfo *m_advertiseInfo;
    UINavigationController *_shareToTimelineNavController;
    MMLoadingView *_loadingView;
    ForwardMessageLogicController *m_forwardLogic;
    FavForwardLogicController *m_favForwardController;
    MMUIWindow *m_fullScreenWindow;
    _Bool m_bShowSelfView;
    _Bool m_bForbidFavMenu;
    _Bool _m_bAllowFirstSightVoice;
    _Bool _m_bClickedCloseBtn;
    _Bool _m_bHasTryDownloadAllPage;
    _Bool _m_bHasDrag;
    _Bool _isKeyboardShowing;
    _Bool _isKeyboardDidShow;
    int m_canvasPageScene;
    int _m_originCanvasScene;
    unsigned int _beginTimeDownloadFirstImage;
    UIView *m_originView;
    MMWebImageView *m_FirstViewToAnimate;
    UIImageView *m_fakeScreenView;
    UIView *m_topView;
    WCCanvasArrowDownIcon *m_arrowDownIcon;
    UIImageView *m_topMaskView;
    UIImage *m_arrowDownImage;
    UIView *m_originViewCopyToShowAnimation;
    id <WCCanvasPageViewControllerDelegate> _m_delegate;
    NSString *_m_thumbUrl;
    NSDictionary *_extraInfo;
    MMProgressViewEx *_progressLoadingView;
    NSMutableArray *_m_arrowDownIconHasShowList;
    NSMutableDictionary *_m_dicCellIdToHeight;
    NSMutableDictionary *_m_dicCellIdToAppearFactor;
    MMTimer *_timer;
    UIButton *_m_fullScreenExitButton;
    WCCanvasDynamicDataLoader *_dynamicLoader;
    NSMutableDictionary *_URL2BgImageViewMap;
    WCCanvasComponentItem *_m_oFirstVideoComponentItem;
    NSMutableDictionary *_m_dicH5UrlToPreloadWebview;
    WCCanvasReportMgr *_m_reportMgr;
    struct CGPoint _offsetBeforeDragging;
    struct CGPoint _fromOffsetBeforeScoll;
    struct CGPoint _toOffsetAfterScroll;
    struct CGPoint _contentOffsetWhenKeyboardWillShow;
    struct CGRect m_originRectInScreen;
}

- (void).cxx_destruct;
- (void)DidEnterBackground:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *URL2BgImageViewMap; // @synthesize URL2BgImageViewMap=_URL2BgImageViewMap;
- (void)WillEnterForeground:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addBlurView:(id)arg1 page:(id)arg2;
- (void)animateHide;
- (void)animateHideWithOrientation:(long long)arg1;
- (void)animateShowAfterFirstImageDownloaded;
- (void)animateShowStep2WithFinalFrame:(struct CGRect)arg1;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animationEnded:(_Bool)arg1;
@property(nonatomic) unsigned int beginTimeDownloadFirstImage; // @synthesize beginTimeDownloadFirstImage=_beginTimeDownloadFirstImage;
- (_Bool)canShowDownArrow:(long long)arg1;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)canvasComponent:(id)arg1 willJumpToCanvas:(id)arg2;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (void)captureScreen;
- (void)commomInit;
@property(nonatomic) struct CGPoint contentOffsetWhenKeyboardWillShow; // @synthesize contentOffsetWhenKeyboardWillShow=_contentOffsetWhenKeyboardWillShow;
- (void)dealloc;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader; // @synthesize dynamicLoader=_dynamicLoader;
- (void)exposureCurrentScreen;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void)favCavasPage;
@property(nonatomic) struct CGPoint fromOffsetBeforeScoll; // @synthesize fromOffsetBeforeScoll=_fromOffsetBeforeScoll;
- (id)genStatExtString;
- (id)genUploadTask;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned int)getAdType;
- (id)getBackGroundColorAtSection:(long long)arg1;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (id)getCacheWebviewWithUrl:(id)arg1;
- (id)getCanvasComponentItemAtIndexPath:(id)arg1;
- (void)getCanvasScene:(int *)arg1;
- (id)getCellIdentifierAtIndexPath:(id)arg1;
- (id)getCurrentViewController;
- (unsigned int)getDownloadSceneFromPageScene;
- (id)getFavForawrdViewController;
- (int)getOriginCanvasScene;
- (id)getReportMgr;
- (id)getSnsId;
- (id)getThumbUrl;
- (id)getUxInfo;
- (_Bool)hasTableViewAlreadyReachBottom;
- (void)hideDownArrowIcon;
- (void)hideWithoutAnimate;
- (void)initFirstCellView;
- (void)initNavigationItem;
- (void)initPushingNavigationItem;
- (void)initTableView;
- (void)initTopBar;
- (void)initView;
- (id)initWithDataItem:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3;
- (id)initWithMsgWrap:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3;
- (_Bool)isBettwenSectionForIndexPath:(id)arg1;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (_Bool)isCurrentVCFromCanvasAd;
- (_Bool)isFirstCellInSection:(id)arg1;
@property(nonatomic) _Bool isKeyboardDidShow; // @synthesize isKeyboardDidShow=_isKeyboardDidShow;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
- (_Bool)isLastCellInSection:(id)arg1;
- (void)jumpStreamVideoForSightComponent:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadingAfterDownFirstImageFail;
- (void)loadingAfterForwardMessageOK;
@property(retain, nonatomic) MMWebImageView *m_FirstViewToAnimate; // @synthesize m_FirstViewToAnimate;
@property(retain, nonatomic) WCAdvertiseInfo *m_advertiseInfo; // @synthesize m_advertiseInfo;
@property(retain, nonatomic) WCCanvasArrowDownIcon *m_arrowDownIcon; // @synthesize m_arrowDownIcon;
@property(retain, nonatomic) NSMutableArray *m_arrowDownIconHasShowList; // @synthesize m_arrowDownIconHasShowList=_m_arrowDownIconHasShowList;
@property(retain, nonatomic) UIImage *m_arrowDownImage; // @synthesize m_arrowDownImage;
@property(nonatomic) _Bool m_bAllowFirstSightVoice; // @synthesize m_bAllowFirstSightVoice=_m_bAllowFirstSightVoice;
@property(nonatomic) _Bool m_bClickedCloseBtn; // @synthesize m_bClickedCloseBtn=_m_bClickedCloseBtn;
@property(nonatomic) _Bool m_bForbidFavMenu; // @synthesize m_bForbidFavMenu;
@property(nonatomic) _Bool m_bHasDrag; // @synthesize m_bHasDrag=_m_bHasDrag;
@property(nonatomic) _Bool m_bHasTryDownloadAllPage; // @synthesize m_bHasTryDownloadAllPage=_m_bHasTryDownloadAllPage;
@property(nonatomic) _Bool m_bShowSelfView; // @synthesize m_bShowSelfView;
@property(nonatomic) int m_canvasPageScene; // @synthesize m_canvasPageScene;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) __weak id <WCCanvasPageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicCellIdToAppearFactor; // @synthesize m_dicCellIdToAppearFactor=_m_dicCellIdToAppearFactor;
@property(retain, nonatomic) NSMutableDictionary *m_dicCellIdToHeight; // @synthesize m_dicCellIdToHeight=_m_dicCellIdToHeight;
@property(retain, nonatomic) NSMutableDictionary *m_dicH5UrlToPreloadWebview; // @synthesize m_dicH5UrlToPreloadWebview=_m_dicH5UrlToPreloadWebview;
@property(retain, nonatomic) UIImageView *m_fakeScreenView; // @synthesize m_fakeScreenView;
@property(retain, nonatomic) UIButton *m_fullScreenExitButton; // @synthesize m_fullScreenExitButton=_m_fullScreenExitButton;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) WCCanvasComponentItem *m_oFirstVideoComponentItem; // @synthesize m_oFirstVideoComponentItem=_m_oFirstVideoComponentItem;
@property(nonatomic) int m_originCanvasScene; // @synthesize m_originCanvasScene=_m_originCanvasScene;
@property(nonatomic) struct CGRect m_originRectInScreen; // @synthesize m_originRectInScreen;
@property(retain, nonatomic) UIView *m_originView; // @synthesize m_originView;
@property(retain, nonatomic) UIView *m_originViewCopyToShowAnimation; // @synthesize m_originViewCopyToShowAnimation;
@property(retain, nonatomic) WCCanvasReportMgr *m_reportMgr; // @synthesize m_reportMgr=_m_reportMgr;
@property(retain, nonatomic) NSString *m_thumbUrl; // @synthesize m_thumbUrl=_m_thumbUrl;
@property(retain, nonatomic) UIImageView *m_topMaskView; // @synthesize m_topMaskView;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)needHiddenMoreMenu;
- (void)notifyComponentHasAppearInMainScreenFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (void)notifyComponetWithAppearedFactorInMainScreen;
- (void)notifyFullyAppearComponetInMainScreen;
- (void)notifyFullyAppearOrDisappearComponetInMainScreen;
- (void)notifyVisibleComponentsDidAppear;
- (void)notifyVisibleComponentsWillDisappear;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) struct CGPoint offsetBeforeDragging; // @synthesize offsetBeforeDragging=_offsetBeforeDragging;
- (void)onBtnCloseCanvasPage;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onCanvasDynamicDataReturn:(id)arg1;
- (void)onClosePlayer;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onExitBtnClicked;
- (void)onLoadImageOK:(id)arg1;
- (void)onMediaPlayer:(id)arg1 playerStateChange:(int)arg2;
- (void)onMoreBtnClicked;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onTrySetStatusBarHiddenForCanvasAd;
@property(retain, nonatomic) MMProgressViewEx *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
- (struct CGRect)rectForSection:(id)arg1 section:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)secionHasShowDownArrow:(long long)arg1;
- (void)sendCanvasPageToFriend;
- (void)setLoading:(_Bool)arg1;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGPoint toOffsetAfterScroll; // @synthesize toOffsetAfterScroll=_toOffsetAfterScroll;
- (void)shareCanvasPageToTimeline;
- (_Bool)shouldEnableInteractivePop;
- (_Bool)shouldPopWithCustomAnimation;
- (_Bool)shouldShowArrowDownIconWithCurrentOffset;
- (_Bool)shouldShowWithCustomAnimation;
- (void)showDownArrowAfterPushed;
- (void)showDownArrowAnimateWithSection:(long long)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)stopLoadingAndShowErrorTip;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)transitionDuration:(id)arg1;
- (void)tryInitSectionBgView;
- (void)tryPreloadWebview;
- (void)tryShowArrowDownIconWithCurrentOffsetAndLastComponent;
- (void)tryShowDownArrowAnimate;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)tryToCancelLoadFirstImage;
- (void)updateAdCanvasPages;
- (void)updateArrowDownImageWithSection:(long long)arg1;
- (void)updateComponent:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updateGroup:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updatePage:(id)arg1 usingDynamicInfo:(id)arg2;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

