//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "NewChatRoomMemberItemViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCreateNewGroupViewControllerDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCGroup, WCOpLog;

@interface WCClassifyMembersViewController : MMUIViewController <WCActionSheetDelegate, tableViewDelegate, NewChatRoomMemberItemViewDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, WCFacadeExt, WCCreateNewGroupViewControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WCGroup *_group;
    NSMutableArray *_arrGroupTempMember;
    NSString *_tempGroupName;
    NSMutableDictionary *_dicGroupOutsiderMember;
    NSMutableDictionary *_dicGroupMemberView;
    NSMutableArray *_arrGroupMember;
    MMTableView *_tableView;
    _Bool _deleteStatus;
    WCOpLog *_wcOpLog;
    _Bool m_hasAddMemberWhenOnDone;
    _Bool m_hasDelMemberWhenOnDone;
    _Bool m_hasReturnAddMemberResponse;
    _Bool m_hasReturnDelMemberResponse;
}

- (void).cxx_destruct;
- (void)OnWCCreatNewGroupName:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *arrGroupMember; // @synthesize arrGroupMember=_arrGroupMember;
@property(retain, nonatomic) NSMutableArray *arrGroupTempMember; // @synthesize arrGroupTempMember=_arrGroupTempMember;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberView; // @synthesize dicGroupMemberView=_dicGroupMemberView;
@property(retain, nonatomic) NSMutableDictionary *dicGroupOutsiderMember; // @synthesize dicGroupOutsiderMember=_dicGroupOutsiderMember;
- (long long)getColCount;
- (id)getDefaultGroupName;
- (id)getGroupName;
@property(retain, nonatomic) WCGroup *group; // @synthesize group=_group;
- (void)initBlacklistFooterView;
- (void)initData;
- (void)initFooterView;
- (void)initGroupTempMember;
- (void)initOutsiderFooterView;
- (void)initView;
- (id)initWithWCGroup:(id)arg1;
- (void)loadMemberList;
- (void)loadOutsiderMembers;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
- (void)makeGroupNameCell:(id)arg1;
- (void)modOutsiderGroup;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)onCancel;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteGroup;
- (void)onDeleteMember:(id)arg1;
- (void)onDismiss;
- (void)onDone;
- (void)onLongPressEx:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onSelectRoundCell;
- (void)onWCDeleteGroupReturn:(_Bool)arg1 groupID:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)openContactInfo:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)reloadMember:(id)arg1;
- (void)reloadMemberListAndView;
- (void)resetBlackListControlStatus;
- (void)setShowRemoveMember;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *tempGroupName; // @synthesize tempGroupName=_tempGroupName;
- (_Bool)shouldModGroup;
- (void)showAlert:(id)arg1;
- (void)startLoadingWithTitle:(id)arg1;
- (void)stopLoading;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tryDeleteGroup;
- (void)updateNavigation;
- (void)updateTitle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

