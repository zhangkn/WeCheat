//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBizInfoGroup, WCPayTenpaySecureCtrlItem;
@protocol WCPayCreditPayFillAllIdentifierInfoViewControllerDelegate;

@interface WCPayCreditPayFillAllIdentifierInfoViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCBaseTextFieldItem *m_nameTextFieldItem;
    WCPayTenpaySecureCtrlItem *m_idNumberTextFieldItem;
    WCBizInfoGroup *m_group;
    id <WCPayCreditPayFillAllIdentifierInfoViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)initTextFieldItem;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onNext;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

