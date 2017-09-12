//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAnimationTipViewDelegate-Protocol.h"
#import "MMPatternLockViewDelegate-Protocol.h"

@class MMAnimationTipView, MMPatternLockTipsView, MMPatternLockView, NSString, UIButton, WCBizLoadingView;
@protocol MMPatternLockViewControllerDelegate;

@interface MMPatternLockViewController : MMUIViewController <MMAnimationTipViewDelegate, MMPatternLockViewDelegate>
{
    _Bool _isConfirm;
    _Bool _isOpSuccess;
    _Bool _isNeedSvrVerify;
    _Bool _isBlock2Root;
    unsigned int _retryTime;
    id <MMPatternLockViewControllerDelegate> _delegate;
    long long _curScene;
    MMPatternLockView *_lockView;
    MMPatternLockView *_confirmLockView;
    MMPatternLockTipsView *_tipsView;
    MMPatternLockTipsView *_confirmTipsView;
    UIButton *_forgetPwdBtn;
    MMAnimationTipView *_resultToastView;
    WCBizLoadingView *_loadingView;
    NSString *_firstResult;
    NSString *_confirmResult;
}

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)closePatternLockPwdFail;
- (void)closePatternLockPwdSuccess;
@property(retain, nonatomic) MMPatternLockView *confirmLockView; // @synthesize confirmLockView=_confirmLockView;
@property(retain, nonatomic) NSString *confirmResult; // @synthesize confirmResult=_confirmResult;
@property(retain, nonatomic) MMPatternLockTipsView *confirmTipsView; // @synthesize confirmTipsView=_confirmTipsView;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
- (void)dealloc;
@property(nonatomic) __weak id <MMPatternLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)fadeShowEnd;
@property(retain, nonatomic) NSString *firstResult; // @synthesize firstResult=_firstResult;
@property(retain, nonatomic) UIButton *forgetPwdBtn; // @synthesize forgetPwdBtn=_forgetPwdBtn;
- (id)getDisplayTitle;
- (void)goBack2WalletEnteranceViewController:(id)arg1;
- (void)handleDidGetPatternPwd:(id)arg1;
- (void)handlePatternLockViewConfirmErrorTransform;
- (void)handlePatternLockViewConfirmTransform;
- (void)initData;
- (void)initLoadingView;
- (void)initView;
- (id)initWithPatternLockScene:(long long)arg1;
@property(nonatomic) _Bool isBlock2Root; // @synthesize isBlock2Root=_isBlock2Root;
@property(nonatomic) _Bool isConfirm; // @synthesize isConfirm=_isConfirm;
- (_Bool)isContinueWhenlockViewResultInValid:(id)arg1;
@property(nonatomic) _Bool isNeedSvrVerify; // @synthesize isNeedSvrVerify=_isNeedSvrVerify;
@property(nonatomic) _Bool isOpSuccess; // @synthesize isOpSuccess=_isOpSuccess;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMPatternLockView *lockView; // @synthesize lockView=_lockView;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (void)modifyPatternLockPwdFail;
- (void)modifyPatternLockPwdSuccess;
- (void)onAlertViewClickCancel;
- (void)onAlertViewClickForgetPwd;
- (void)onCancelPress:(id)arg1;
- (void)onForgetPwdBtnPress:(id)arg1;
- (void)onOpCancel;
- (void)onOpSucess;
- (void)onPwdErrorAlertViewClickCancel;
- (void)onPwdErrorBeyondLimit;
- (void)resetViewPosition;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
@property(nonatomic) unsigned int retryTime; // @synthesize retryTime=_retryTime;
@property(retain, nonatomic) MMPatternLockTipsView *tipsView; // @synthesize tipsView=_tipsView;
- (void)setupNewPatternLockPwdFail;
- (void)setupNewPatternLockPwdSuccess;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(_Bool)arg2;
- (void)startLoading;
- (void)stopLoading;
- (void)updateLeftBarbuttonWhenPresent;
- (void)verifyPatternLockPwdCorrect:(id)arg1;
- (void)verifyPatternLockPwdError;
- (void)verifyPatternLockPwdFail;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

