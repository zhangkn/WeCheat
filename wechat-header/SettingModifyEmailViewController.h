//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IUpdateProfileMgrExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "settingModifyEmailDelegate-Protocol.h"

@class MMTableViewInfo, NSString, UITextField;
@protocol settingModifyEmailDelegate;

@interface SettingModifyEmailViewController : AccountBaseViewController <IUpdateProfileMgrExt, MessageObserverDelegate, settingModifyEmailDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    UITextField *m_textField;
    NSString *m_nsLastEmail;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bEdit;
    _Bool m_bHasPwd;
    _Bool m_bSaveAndReturn;
    id <settingModifyEmailDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)BindOk;
- (void)CgiFail:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)UnBindOk;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)initView;
- (_Bool)isEdit;
- (_Bool)isExistEmail;
- (_Bool)isVerify;
@property(nonatomic) _Bool m_bEdit; // @synthesize m_bEdit;
@property(nonatomic) _Bool m_bHasPwd; // @synthesize m_bHasPwd;
@property(nonatomic) _Bool m_bSaveAndReturn; // @synthesize m_bSaveAndReturn;
@property(nonatomic) __weak id <settingModifyEmailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastEmail; // @synthesize m_nsLastEmail;
@property(retain, nonatomic) UITextField *m_textField; // @synthesize m_textField;
- (void)makeEmailCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onEdit;
- (void)onProfileChange;
- (void)onReturn;
- (void)onSave;
- (void)onUnBind;
- (void)onUnBindAccount;
- (void)onUnBindConfirm;
- (void)saveNewEmail;
- (void)sendValidateEmail;
- (void)startLoading;
- (void)stopLoading;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)updateBarItem;
- (void)updateFooterView;
- (void)updateTableCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

