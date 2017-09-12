//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class CTRichTextView, NSString, PasswordLogic, UIButton, WCAccountBindPhoneControlLogic, WCAccountTextFieldItem, WCBaseKeyboardToolBar;
@protocol WCAccountSetPasswordViewControllerDelegate;

@interface WCAccountSetPasswordViewController : WCAccountBaseViewController <ILinkEventExt, WCAccountBindPhoneControlLogicDelegate, PasswordLogicDelegate, UIAlertViewDelegate>
{
    id <WCAccountSetPasswordViewControllerDelegate> m_delegate;
    PasswordLogic *m_setPasswdLogic;
    PasswordLogic *m_verifyPasswdLogic;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldVerifyPwdItem;
    WCAccountTextFieldItem *m_textFieldFirstPwdItem;
    WCAccountTextFieldItem *m_textFieldSecondPwdItem;
    CTRichTextView *m_bottomView;
    UIButton *m_doneBtn;
    UIButton *m_showBtn;
    NSString *m_nsHeaderTitle;
    NSString *m_nsHeaderTip;
    NSString *m_nsTicket;
    unsigned int m_uiTicketType;
    _Bool m_bShowTip;
    _Bool m_bShow;
    unsigned long long m_scene;
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)checkEnable;
- (void)dealloc;
- (void)doChangePassword;
- (void)doVerifyPassword;
- (id)init;
- (_Bool)isChangeScene;
- (_Bool)isFromServerControl;
- (_Bool)isSetScene;
- (_Bool)isVerifyScene;
- (void)onFindPwdBindPhone;
- (void)onFindPwdChangePhone;
- (void)onFindPwdSend;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSecondNext;
- (void)onShowBtnClick;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)setPasswordOK:(id)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setShowTip:(_Bool)arg1;
- (void)setTicket:(id)arg1;
- (void)setTicketType:(unsigned int)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)textFieldTextDidChange:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)updateView;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

