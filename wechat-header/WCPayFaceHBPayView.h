//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ShakeCheckerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFaceHBFaceViewDelegate-Protocol.h"
#import "WCPayFaceReceiverViewDelegate-Protocol.h"

@class CMMotionManager, MMTimer, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, WCPayFaceHBFaceView, WCPayFaceHBQRCodeInfo, WCPayFaceHBQRCodeView, WCPayFaceReceiverView, WCPayFaceRedEnvelopesReceiverInfo, WCPayGoldenStatusView;
@protocol MMUIViewControllerDelegate, WCPayFaceHBPayViewDelegate;

@interface WCPayFaceHBPayView : UIView <ShakeCheckerDelegate, WCPayFaceHBFaceViewDelegate, WCPayFaceReceiverViewDelegate, WCActionSheetDelegate>
{
    id <WCPayFaceHBPayViewDelegate> m_delegate;
    id <MMUIViewControllerDelegate> m_vcDelegate;
    WCPayFaceHBQRCodeInfo *m_qrInfo;
    double _oldBrightness;
    UIView *_whiteView;
    UIView *_hbsView;
    UIImageView *_hbFirstView;
    UIButton *_payBtn;
    WCPayGoldenStatusView *_scanFanTip;
    WCPayGoldenStatusView *_scanTip;
    WCPayGoldenStatusView *_countTip;
    WCPayFaceHBFaceView *_hbOnePersonView;
    WCPayFaceHBQRCodeView *_imageQRCodeView;
    UIActivityIndicatorView *_activityIndicatorView;
    WCPayFaceReceiverView *_receiverView;
    int m_lastTouchViewIndex;
    int m_lastPanViewIndex;
    int m_lastSelectViewIndex;
    int m_lastTouchBeginIndex;
    NSMutableArray *m_boPlays;
    int m_boPlayIndex;
    NSMutableArray *m_selectPlays;
    int m_selectPlayIndex;
    NSMutableArray *m_musicPlays;
    _Bool m_bShowTipAlert;
    CMMotionManager *m_cmManager;
    _Bool m_bStartManager;
    _Bool m_bHasMotion;
    MMTimer *m_motionTimer;
    WCPayFaceRedEnvelopesReceiverInfo *_lastReceiverInfo;
}

- (void).cxx_destruct;
- (void)OnBangAnimateStop;
- (void)OnFaceHBViewDetail;
- (void)OnLoadMoreRedEnvelopesList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)batchSetReceiverInfos:(id)arg1 balanceNum:(long long)arg2;
- (int)changeToCenterPoint:(struct CGPoint)arg1;
- (int)changeToTouchPoint:(struct CGPoint)arg1;
- (void)checkQRCode;
- (void)clearReceiverView;
- (void)closeView;
- (void)dealloc;
- (void)deviceMotion:(_Bool)arg1;
- (void)fadeAnimate;
- (id)getReceiverInfos;
- (void)giveHBAnimate:(id)arg1;
- (void)handleChangeTouch:(int)arg1 Select:(int)arg2 Pan:(int)arg3 TouchBegin:(_Bool)arg4;
- (void)handlePanGes:(id)arg1;
- (void)hasOpenHBFor:(id)arg1;
- (void)hideLoading;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)layoutHBsView;
- (void)layoutSubviews;
- (void)makeHBViews;
- (void)onCancel;
- (void)onIKnow;
- (void)onManage;
- (void)onMore;
- (void)setDelegate:(id)arg1;
- (void)setNoMotion;
- (void)setReceiverViewHidden:(_Bool)arg1 Animate:(_Bool)arg2;
- (void)setViewController:(id)arg1;
- (void)showDeleteHBTips:(id)arg1;
- (void)showLoading;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateQRCode:(id)arg1;
- (void)userDidTakeScreenshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

