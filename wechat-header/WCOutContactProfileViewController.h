//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt-Protocol.h"
#import "InviteFriendLogicDelegate-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContactVerifyLogic, MMHDHeadImageView, MMTableView, NSArray, NSMutableArray, NSString, WCOutInviteFriendLogic, WCOutPhoneContact;

@interface WCOutContactProfileViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate, InviteFriendLogicDelegate>
{
    WCOutPhoneContact *m_contact;
    MMTableView *m_tableView;
    NSMutableArray *m_sectionKeyArray;
    NSMutableArray *m_cellKeyForOtherSectionArray;
    NSArray *m_recentCallLists;
    NSArray *m_phoneLists;
    double m_nameLabel_X;
    _Bool m_isShowAllRecentCallCell;
    _Bool m_isShowGreenBtn;
    CContactVerifyLogic *m_oContactVerifyLogic;
    MMHDHeadImageView *m_HDHeadImageView;
    WCOutInviteFriendLogic *_inviteFriendLogic;
}

- (void).cxx_destruct;
- (void)addNewCall:(id)arg1;
- (id)baseInfoCellWithInfo:(id)arg1;
- (void)configData;
- (void)configModel;
- (void)configTableView;
- (void)configTableViewFooterView;
- (void)configTableViewHeaderView;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)dealloc;
- (void)didPressedAddFriendButton;
- (void)didPressedInviteBtn;
- (id)getFirstPhoneNumber;
- (id)initWithWCOutPhoneContact:(id)arg1;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
- (int)numberOfRowForRecentCallSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onContactVerifyFail;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
- (id)phoneWithLabelCellAtRow:(unsigned long long)arg1 InTableView:(id)arg2;
- (id)recentCallCellAtRow:(unsigned long long)arg1;
- (void)savePhoneNumToAddressBook;
- (id)showAllRecentCallCell;
- (void)showAllRecentCallItems;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateWCOutContacts:(id)arg1;
- (void)updateWCOutContactsInfo;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

