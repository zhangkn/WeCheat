//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAAppTaskLoaderDelegate-Protocol.h"
#import "WAJSCoreServiceDelegate-Protocol.h"
#import "WAPermissionHandlerDelegate-Protocol.h"
#import "WAWebViewDelegate-Protocol.h"

@class CContact, MMTimer, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskLoader, WAAppTaskReferrerInfo, WAAppTaskRunningStateEnterBackgroundContext, WAAppTaskShowFromBackgroundContext, WAJSCoreService, WAPermissionHandler, WAWebViewController, WxaExternalInfo;
@protocol WAAppTaskDelegate;

@interface WAAppTask : NSObject <WAAppTaskLoaderDelegate, WAWebViewDelegate, WAJSCoreServiceDelegate, WAPermissionHandlerDelegate, MMTipsViewControllerDelegate>
{
    NSString *_appID;
    CContact *_contact;
    NSString *_relativeURL;
    unsigned int _debugModeType;
    NSDictionary *_dicExtraInfo;
    WAAppTaskShowFromBackgroundContext *_showFromBackgroundContext;
    _Bool _isDebugAndVConsoleOpen;
    WxaExternalInfo *_wxaExternalInfo;
    NSMutableArray *_arrWebView;
    NSMutableDictionary *_dicTabWebView;
    WAWebViewController *_preloadWebView;
    WAJSCoreService *_appService;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAAppTaskReferrerInfo *_backToWeAppReferrerInfo;
    _Bool _isWeChatPlugin;
    NSString *_lastLaunchNativcePageString;
    _Bool _isBackgroundOnLaunchNativePage;
    _Bool _isWriteFrameContentCache;
    WAWebViewController *_curAppRouteWebView;
    WAWebViewController *_currentAppRouteDoneWebView;
    _Bool _isPopParent;
    _Bool _isPopAllParent;
    _Bool _isEnableClose;
    _Bool _isWebViewAppear;
    _Bool _isAlreadyLaunchOpenURL;
    _Bool _isAlreadyLaunchAlertMsg;
    _Bool _isEnterforegroundReload;
    unsigned int _webViewMaxDepth;
    unsigned int _backgroundTaskMaxTimeout;
    NSString *_refererHost;
    _Bool _canKeepAliveByAudioPlay;
    unsigned int _lifeSpanBeforeSuspend;
    unsigned int _lifeSpanAfterSuspend;
    _Bool _bIsAlreadyCloseAppByTerminal;
    _Bool _resetTaskWhenEnterForeground;
    _Bool _bIsNeedShowUserGuide;
    MMTimer *_suspendTimer;
    _Bool _isSuspendTimerWorking;
    NSString *_topBarText;
    unsigned long long _weixinAppPlatformState;
    unsigned long long _taskPlatformState;
    unsigned long long _runningState;
    _Bool _backgroundMusic;
    unsigned int _timeEnterBackground;
    unsigned int _enterScene;
    unsigned int _originScene;
    id <WAAppTaskDelegate> delegate;
    NSString *_enterPath;
    WAAppTaskExtInfo *_taskExtInfo;
    WAAppOpenParameter *_taskOpenInfo;
    WAAppTaskLoader *_appLoader;
    WAPermissionHandler *_permissionHandler;
    WAAppTaskRunningStateEnterBackgroundContext *_enterBackgroundContext;
}

+ (id)appIDListFromViewController:(id)arg1;
- (void).cxx_destruct;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)_removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)_removeJumpInfoAndSetBackReferrerInfo:(id)arg1;
- (void)_restorePreviousWeAppPageBeforeWebView:(id)arg1 getRestorePages:(id *)arg2 backReferrerInfo:(id *)arg3;
- (void)addExtraInfo:(id)arg1 forKey:(id)arg2;
- (void)addJumpRelationWithLastWeAppNativePage:(id)arg1;
- (void)addTabWebView:(id)arg1 parentWebView:(id)arg2;
- (void)addWebView:(id)arg1;
- (id)appID;
@property(retain, nonatomic) WAAppTaskLoader *appLoader; // @synthesize appLoader=_appLoader;
- (void)appServiceSendOnEnterBackground:(long long)arg1;
- (void)appServiceSendOnEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (id)askFrameContentFromWebView:(id)arg1;
@property(nonatomic) _Bool backgroundMusic; // @synthesize backgroundMusic=_backgroundMusic;
- (void)backgroundReceiveEvent:(id)arg1;
- (unsigned int)backgroundTaskMaxTimeout;
- (void)checkAndScheduleSuspendTimerIfNeeded;
- (void)checkBackgroundStatus;
- (void)checkChangeNavigationControllerBeforeDismiss:(id *)arg1;
- (_Bool)checkCurrentPageIdentical:(id)arg1 webView:(id)arg2;
- (void)checkForegound;
- (void)checkLaunchAction;
- (void)checkRemovedJumpInfoBackgroundStatus:(id)arg1;
- (void)checkSelfBackgroundStatus;
- (_Bool)checkServiceRunInMainThread:(id)arg1;
- (_Bool)checkServiceRunMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3 fromAppService:(id)arg4;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3 fromWebView:(id)arg4;
- (_Bool)checkWebViewRunMode:(id)arg1;
- (void)clearAndPopAllWebViewIgnoreTab;
- (void)clearAppService;
- (void)clearTabWebView;
- (void)closePresentViewController;
- (void)closeTask;
- (void)closeTaskAndAlertMsg:(id)arg1 title:(id)arg2;
- (void)closeTaskAndJumpToURL:(id)arg1;
- (id)contact;
- (id)currentAppInfo;
- (id)currentExtInfo;
- (void)dealloc;
- (unsigned int)debugModeType;
@property(nonatomic) __weak id <WAAppTaskDelegate> delegate; // @synthesize delegate;
@property(retain) WAAppTaskRunningStateEnterBackgroundContext *enterBackgroundContext; // @synthesize enterBackgroundContext=_enterBackgroundContext;
- (void)enterBackgroundFrom:(id)arg1 mode:(long long)arg2 animate:(_Bool)arg3;
- (void)enterBackgroundOnJumpOtherWeApp:(id)arg1;
- (void)enterBackgroundOnOpenH5Page:(id)arg1;
- (void)enterBackgroundOnOpenNativePage:(id)arg1;
- (void)enterBackgroundWithDismissAppIDList:(id)arg1;
- (void)enterForegroundIfNeed;
@property(retain, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (void)foregroundReceiveEvent:(id)arg1;
- (id)frameContentCachePath;
- (id)genBackgroundCheckEvent;
- (id)genCloseTaskEvent;
- (id)genStateChangedEventWithPlatformType:(unsigned long long)arg1 direction:(unsigned long long)arg2 reason:(unsigned int)arg3;
- (id)genSuspendTimerEvent;
- (id)genUniqueResourceTakeOverEventWithType:(unsigned long long)arg1;
- (id)generateExtraInfoWithAppID:(id)arg1 Contact:(id)arg2;
- (id)getAllWebViews;
- (id)getAndDeletePreLoadWebView;
- (id)getBackReferrerInfoFromPreviousJumpInfo:(id)arg1 lastJumpInfo:(id)arg2 extraData:(id)arg3;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (id)getChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParentWebView:(id)arg3;
- (id)getCurrentNavigationController;
- (id)getCurrentWebView;
- (unsigned long long)getEnterBackgroundReasonByEvent:(id)arg1;
- (id)getExtraInfo:(id)arg1 remove:(_Bool)arg2;
- (id)getFirstWebView;
- (id)getFirstWebViewFrom:(id)arg1;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (_Bool)getIsForeground;
- (id)getLastWebViewFrom:(id)arg1;
- (id)getLoadingViewWithAppID:(id)arg1 debugMode:(unsigned int)arg2 backReferrerInfo:(id)arg3;
- (id)getNewWebViewControllerWithContact:(id)arg1 appID:(id)arg2 baseURL:(id)arg3 pageRelativeURL:(id)arg4 webviewId:(unsigned int)arg5;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 fromAppService:(id)arg2;
- (id)getPermissionResultWithJSAPI:(id)arg1 fromWebView:(id)arg2;
- (id)getPreviousWebViewFromWebView:(id)arg1;
- (id)getStrForOpenType:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromParentWebView:(id)arg2;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromWebView:(id)arg2;
- (id)getTaskBrandLogoUrl;
- (id)getTaskExtInfo;
- (unsigned long long)getTaskRunningStatus;
- (id)getTopBarText;
- (unsigned long long)getWebViewDepthInStack;
- (id)getWebViewListInNavigation;
- (void)getWebViewPages:(id *)arg1 nativePages:(id *)arg2 lastTaskNavigationController:(id *)arg3 ofLastWeAppID:(id)arg4;
- (_Bool)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (void)initStateReceiveEvent:(id)arg1;
- (id)initWithAppID:(id)arg1 debugModeType:(unsigned int)arg2;
- (void)invalidateSuspendStatusTimer;
- (_Bool)isFirstWebViewInNavigator;
- (_Bool)isFirstWebViewOnForeground;
- (_Bool)isForceEnableClose;
- (_Bool)isForeground;
- (_Bool)isHangedUp;
- (_Bool)isLoading;
- (_Bool)isNeedAddJumpRelation;
- (_Bool)isPreloadCacheWebview:(id)arg1;
- (_Bool)isReachMaxWebViewDepth;
- (_Bool)isShowOnForeground;
- (_Bool)isTaskRunning;
- (_Bool)isTopShowWebviewTerminate:(id)arg1;
- (void)killAppFrom:(id)arg1 animate:(_Bool)arg2;
- (_Bool)loadAppConfig:(id)arg1;
- (id)loadFrameContentCache;
- (void)logAppRouteAction:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (void)logAppRoutePerformance:(long long)arg1 time:(unsigned int)arg2;
- (void)mainThreadTriggerStrictBanMode:(id)arg1;
- (void)makeWebViewEnableClose:(_Bool)arg1;
- (void)markEnterBackgroundOnLaunchNativePage:(id)arg1 isWebPage:(_Bool)arg2;
- (void)navigateBackWeApp:(id)arg1 fromWebView:(id)arg2;
- (id)navigationControllerDismissingViewController:(id)arg1;
- (void)notifyEvent:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onLaunchPermissionInfoUpdate;
- (void)onLoadingChildPageViewDidAppear:(id)arg1;
- (void)onLoadingFirstPageViewDidAppear;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (void)onTaskRunningStateDidChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)onTaskRunningStateWillChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)onUserAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)onUserAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopAllParent:(_Bool)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(_Bool)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(_Bool)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openFirstWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 loaderContextData:(id)arg3 navigationController:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)openWithContact:(id)arg1 openInfo:(id)arg2 taskExtInfo:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) unsigned int originScene; // @synthesize originScene=_originScene;
@property(retain) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
- (id)permissionLaunchParamenterFromTaskExtInfo:(id)arg1;
- (id)popAppLoader;
- (void)popToFirstWebViewFrom:(id)arg1 animated:(_Bool)arg2;
- (void)popToPreviousViewBeforeWebView:(id)arg1;
- (void)popWebView:(id)arg1;
- (id)popWebViewCount:(int)arg1 fromWebView:(id)arg2;
- (void)printConsoleLog:(id)arg1;
- (void)processPresentedViewControllerOnOpen:(id *)arg1;
- (void)processPushOrPresentAViewController:(id)arg1;
- (_Bool)processWeAppPageAndRemoveJumpInfoOnExit:(id *)arg1;
- (_Bool)processWeAppPageOnExitWithLastJumpInfo:(id)arg1 lastWeChatPluginJumpInfo:(id)arg2 backReferrerInfo:(id)arg3;
- (void)processWillTriggerSuspendTimer;
- (void)publishPostMessage:(id)arg1 fromWebView:(id)arg2;
- (id)relativeURL;
- (void)reloadTerminatedWebViewIfNeeded;
- (void)removeAllJumpInfoAndCheckBackgroundStatus;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)removeJumpInfoAndSetBackReferrerInfo:(id)arg1;
- (void)removeJumpInfoOnExitWithLastAppID:(id)arg1 andSetBackReferrerInfo:(id)arg2 forPreviousWeApp:(id)arg3 getRemovedAppIDList:(id *)arg4;
- (void)removeJumpRelationWithLastWeApp:(id)arg1 andSetBackReferrerInfo:(id)arg2 forPreviousWeApp:(id)arg3;
- (void)removePageOfLastWeAppIfCould:(id)arg1 getRelativeNativePages:(id *)arg2;
- (void)removeParentWebView:(id)arg1;
- (void)removeTabWebViewWithParentWebView:(id)arg1;
- (void)removeWebView:(id)arg1;
- (void)removeWebViewFromNavigationController:(_Bool)arg1;
- (void)reportEnterForeground;
- (void)reportEnterForegroundIfBackFromNativePage;
- (_Bool)reportPerformance;
- (void)reportWKWebViewTerminateAction:(id)arg1 closeAction:(unsigned long long)arg2;
- (void)resetTask;
- (id)restorePages:(id)arg1 beforeWebView:(id)arg2;
- (void)restorePreviousWeAppPageAndRemoveJumpInfoFromWebView:(id)arg1 extraData:(id)arg2;
- (void)restorePreviousWeAppPageBeforeCloseTask;
- (void)restorePreviousWeAppPageBeforeWebView:(id)arg1 getRestorePages:(id *)arg2 backReferrerInfo:(id *)arg3;
- (void)restorePreviousWeAppPageFromWebView:(id)arg1 extraData:(id)arg2 previousJumpInfo:(id)arg3 lastJumpInfo:(id)arg4 backReferrerInfo:(id)arg5 getResult:(unsigned long long *)arg6 restorePages:(id *)arg7;
- (void)restorePreviousWeAppPageOnFirstPageReturn:(id)arg1;
- (void)saveFrameContentCache:(id)arg1;
- (void)scheduleSuspendStatusTimer;
- (void)sendAppRouteEventFromWebView:(id)arg1 openType:(unsigned long long)arg2;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 fromWebView:(id)arg3;
- (void)sendJSEventToWebView:(id)arg1 param:(id)arg2 toWebviews:(id)arg3;
- (void)sendOnAppRouteDoneWithWebView:(id)arg1;
- (void)sendUIEventAfterShowFromBackground:(id)arg1;
- (void)setAppServiceCurrentWebView:(id)arg1;
- (void)setBackWeAppReferrerInfo:(id)arg1;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) WAAppOpenParameter *taskOpenInfo; // @synthesize taskOpenInfo=_taskOpenInfo;
- (void)setTaskPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
@property(nonatomic) unsigned int timeEnterBackground; // @synthesize timeEnterBackground=_timeEnterBackground;
- (void)setTopBarText:(id)arg1;
- (void)setWeixinAppPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
- (void)setupAppConfig;
- (void)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 baseURL:(id)arg3 pageRelativeURL:(id)arg4 getWebView:(id *)arg5;
- (void)setupAppServiceWithContact:(id)arg1 extraInfo:(id)arg2;
- (void)setupPreloadWebViewFromWebView:(id)arg1;
- (void)setupTaskForSpecificPageMode;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)showWebViewFromBackground:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspendReceiveEvent:(id)arg1;
- (void)taskDidEnterHangUpMode;
- (void)taskDidKickedOutFromHangUpModeByOtherWeAppId:(id)arg1;
- (void)taskDidKickedOutMusicPlayerByOtherSource:(id)arg1;
- (void)taskDidOpen;
- (void)taskDidResignHangUpMode;
- (void)taskEnterBackground:(long long)arg1;
- (void)taskEnterForeground;
- (id)topNavigationControllerOnMainWindow;
- (void)triggerStrictBanMode:(id)arg1;
- (void)triggerSuspendTimer:(id)arg1;
- (void)triggerTaskRouteToHomePage:(id)arg1;
- (void)tryAddJumpRelationAndRemoveLastWeAppPage;
- (void)updateAllWebView;
- (void)updateRunningState:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)updateStorage;
- (void)webView:(id)arg1 didLoadFrameContent:(id)arg2;
- (void)webView:(id)arg1 didPresent:(id)arg2;
- (void)webViewBeforeClickReturnButton:(id)arg1;
- (void)webViewClickExitButton:(id)arg1;
- (unsigned int)webViewDepth;
- (void)webViewDidAppear:(id)arg1;
- (void)webViewDidBePoped:(id)arg1;
- (void)webViewDidDisappear:(id)arg1;
- (void)webViewDidPush:(id)arg1;
- (void)webViewDidSwitchTab:(id)arg1;
- (void)webViewDidTerminateInContentProcess:(id)arg1;
- (unsigned long long)webViewInNavigationCount;
- (void)webViewInjectScriptFail:(id)arg1;
- (_Bool)webViewIsFirstPage:(id)arg1;
- (_Bool)webViewIsSameDepthWithFirstPage:(id)arg1;
- (void)webViewOnBeforeEveluateIndexData:(id)arg1;
- (void)webViewOnPageReload:(id)arg1 withRouteInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

