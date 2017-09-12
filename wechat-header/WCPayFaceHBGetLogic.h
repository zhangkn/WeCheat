//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IUiUtilExt-Protocol.h"
#import "IWCPayFaceHBMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFaceHBCgiDelegate-Protocol.h"
#import "WCPayFaceHBGetViewDelegate-Protocol.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate-Protocol.h"

@class MMUIViewController, NSString, UIWindow, WCPayFaceHBCgi, WCPayFaceHBGetView, WCPayFaceHBItem, WCPayFaceHBScanQRCodeHandler, WCRedEnvelopesControlData, WCRedEnvelopesRedEnvelopesDetailViewController;
@protocol WCPayFaceHBGetLogicDelegate;

@interface WCPayFaceHBGetLogic : WCPayControlLogic <WCActionSheetDelegate, WCPayFaceHBGetViewDelegate, WCPayFaceHBCgiDelegate, IWCPayFaceHBMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, IUiUtilExt>
{
    id <WCPayFaceHBGetLogicDelegate> m_delegate;
    WCPayFaceHBItem *m_hbItem;
    WCPayFaceHBGetView *m_view;
    NSString *m_nsCurrentUserName;
    UIWindow *m_window;
    WCPayFaceHBCgi *m_faceHBOpenCGI;
    WCRedEnvelopesControlData *m_redData;
    MMUIViewController *preVC;
    WCPayFaceHBScanQRCodeHandler *QRCodeHandle;
    WCRedEnvelopesRedEnvelopesDetailViewController *m_currentViewController;
}

- (void).cxx_destruct;
- (_Bool)HasMoreDetailList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnFaceHBGetCancel;
- (void)OnFaceHBGetLogicCancel;
- (void)OnFaceHBGetOpenHB:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)OnLoadMoreRedEnvelopesList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 Animation:(_Bool)arg4;
- (void)onFailMsg:(id)arg1;
- (void)onFailMsgAndStopLogic:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)onOpenFaceHB:(id)arg1 Error:(id)arg2;
- (void)reloadViews;
- (void)setDelegate:(id)arg1;
- (void)setPreViewController:(id)arg1;
- (void)setQRCode:(id)arg1;
- (void)setQRCodeHandle:(id)arg1;
- (void)showDetailView;
- (void)showHBGetView;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

