//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewController.h"

#import "IExposeMgrExt-Protocol.h"
#import "IExtraDeviceLoginMgrExt-Protocol.h"
#import "IOnlineDeviceMgrExt-Protocol.h"
#import "IShortCutExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IWCPayJSApiMgrExt-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"

@class MMUIButton, NSString;
@protocol H5GameViewControllerDelegate;

@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IExposeMgrExt, IExtraDeviceLoginMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt>
{
    MMUIButton *menuButton;
    _Bool m_bFullscreen;
    long long m_orientation;
    _Bool m_bPaying;
    _Bool m_bResetPayingPwd;
    struct CGSize m_ButtonSize;
    double m_ButtonInset;
    _Bool m_bShouldUseCustomH5GameMenu;
    id <H5GameViewControllerDelegate> _delegate;
    NSString *_gameAppId;
    unsigned long long _lockedOrientation;
}

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)delaySetFullScreen:(_Bool)arg1;
@property(retain, nonatomic) id <H5GameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)enterBackground;
- (void)enterForeground;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
- (void)gameDidSelecteItem:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(_Bool)arg4 IsFloatLayer:(_Bool)arg5;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(_Bool)arg4 IsFloatLayer:(_Bool)arg5 GameAppId:(id)arg6;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 GameAppId:(id)arg3;
- (_Bool)isFullScreen;
- (_Bool)isOrientationLocked;
- (void)lockOrientation:(long long)arg1;
@property(nonatomic) unsigned long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
- (void)onBeginMultiTalk;
- (void)onDeviceInfoClose;
- (void)onDeviceInfoOpen;
- (void)onExposeComplete;
- (void)onExposeInit;
- (void)onExtraDeviceLoginClose;
- (void)onExtraDeviceLoginOpen;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMinimized;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)restoreViewStatus;
- (void)scrollActionSheet:(id)arg1 MenuItem:(id)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)shouldUseH5GameCustomMenu;
- (unsigned long long)supportedInterfaceOrientations;
- (void)unlockOrientation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

