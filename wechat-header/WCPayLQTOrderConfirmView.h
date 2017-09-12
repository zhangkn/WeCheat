//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, WCPayTenpayPasswordCtrlItem;
@protocol WCPayLQTOrderConfirmViewDelegate;

@interface WCPayLQTOrderConfirmView : MMUIView <WCBaseInfoItemDelegate>
{
    unsigned int _money;
    id <WCPayLQTOrderConfirmViewDelegate> _delegate;
    MMUIView *_contentView;
    WCPayTenpayPasswordCtrlItem *_pwdTextFieldItem;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)cancelBtnClick;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayLQTOrderConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideView;
- (id)initLQTConfirmViewWithFrame:(struct CGRect)arg1 money:(unsigned int)arg2 delegate:(id)arg3;
@property(nonatomic) unsigned int money; // @synthesize money=_money;
- (void)onIOS8_3BtnClick;
- (void)onPayBtnClick;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *pwdTextFieldItem; // @synthesize pwdTextFieldItem=_pwdTextFieldItem;
- (void)setupContentView;
- (void)setupSubView;
- (void)showView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

