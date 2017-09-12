//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "IAutoVerifySMSExt-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar, WCUITextField;
@protocol WCAccountPhoneVerifyViewControllerDelegate;

@interface WCAccountPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, UITextFieldDelegate>
{
    UIButton *m_noCodeBtn;
    UIButton *m_doneBtn;
    WCUITextField *m_textFieldVerifyCode;
    WCAccountTextFieldItem *m_textFieldVerifyCodeItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCAccountPhoneVerifyViewControllerDelegate> m_delegate;
    long long m_iCountDown;
    long long m_iCount;
    long long m_stypeType;
    long long m_fbReg;
    long long m_qqReg;
    long long m_emailReg;
    _Bool m_bFirstLoop;
    _Bool m_bShowCloseSafeDevice;
    UIButton *m_btnQQReg;
}

- (void).cxx_destruct;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (void)initView;
- (_Bool)isFBClose;
- (_Bool)isShowEmailReg;
- (_Bool)isShowQQReg;
- (void)jumpToUnProtectPage;
- (_Bool)needCount;
- (void)onCloseSafeDevice;
- (void)onNext;
- (void)onNoCodeClicked:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (_Bool)recoverFromArchive:(id)arg1;
- (void)reportTime:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showCloseSafeDevice;
- (void)startTimer;
- (void)stopTimer;
- (void)updateSendVerifyCodeButton;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

