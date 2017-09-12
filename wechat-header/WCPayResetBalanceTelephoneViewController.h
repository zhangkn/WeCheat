//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCBizTipViewDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayCVVItem, WCPayPhoneTextItem, WCPayValidDateItem;
@protocol WCPayResetBalanceTelephoneViewControllerDelegate;

@interface WCPayResetBalanceTelephoneViewController : WCPayBaseViewController <ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
}

- (void).cxx_destruct;
- (void)CheckData;
- (void)FillCardNumberCancel;
- (void)OnClearAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)footerTipAction:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)scanAction:(id)arg1;
- (void)setAutoFilledCardNumber;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setShowedFavorInfo;
- (void)setTitle:(id)arg1;
- (void)showDetailTip;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

