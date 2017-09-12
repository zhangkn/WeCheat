//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayPickerViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSString, WCPayPickerView;

@interface WCPayOfflinePaySettingViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate, UIAlertViewDelegate>
{
    _Bool _didAutoShowedPickCardView;
    _Bool _shouldAutoPresentChooseCardView;
    MMTableView *_tableView;
    NSArray *_choices;
    WCPayPickerView *_m_pickerView;
}

- (void).cxx_destruct;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(retain, nonatomic) NSArray *choices; // @synthesize choices=_choices;
- (void)clearOfflinePayAndPopWithoutAlert;
- (id)currentCardText;
- (void)dealloc;
@property(retain, nonatomic) WCPayPickerView *m_pickerView; // @synthesize m_pickerView=_m_pickerView;
- (id)makeCellForChangeLimit;
- (id)makeCellForPayCard;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButton:(id)arg1;
- (void)onChooseCardIndex:(long long)arg1;
- (void)onChooseCardText:(id)arg1;
- (void)onCloseOfflinePay;
- (void)onOperate:(id)arg1;
- (void)onSelectChangeCard:(id)arg1;
- (void)onSelectChangeLimit:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
@property(nonatomic) _Bool shouldAutoPresentChooseCardView; // @synthesize shouldAutoPresentChooseCardView=_shouldAutoPresentChooseCardView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tipsLabelForChangePayCard;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

