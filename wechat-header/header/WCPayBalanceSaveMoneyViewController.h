//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayBalanceSaveMoneyViewControllerDelegate;

@interface WCPayBalanceSaveMoneyViewController : WCPayBaseViewController
{
    _Bool m_bNeedBindCard;
    id <WCPayBalanceSaveMoneyViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnHistoryOrderDetailBack;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (void)internalPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)selectNeedBindCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
