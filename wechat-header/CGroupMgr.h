//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "NotifyFromEventDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CGroupDB, CGroupOpLog, NSMutableArray, NSString;

@interface CGroupMgr : MMService <MMService, NotifyFromEventDelegate, PBMessageObserverDelegate, IMsgExt>
{
    CGroupDB *m_oGroupDB;
    CGroupOpLog *m_oGroupOpLog;
    NSMutableArray *m_gettingMemberDetailQueue;
    NSMutableArray *m_gettingInfoQueue;
}

+ (_Bool)IsReservedGroupTopic:(id)arg1;
- (void).cxx_destruct;
- (_Bool)AddGroupMember:(id)arg1 withMemberList:(id)arg2 withDesp:(id)arg3;
- (_Bool)ApproveGroupMember:(id)arg1 withInviterName:(id)arg2 withInviteeList:(id)arg3 withTicket:(id)arg4 withUserData:(id)arg5;
- (int)CanDonateChatRoom;
- (int)CanUpgradeChatRoom;
- (_Bool)ChangeChatRoomAccessType:(id)arg1 type:(unsigned int)arg2;
- (_Bool)ChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2;
- (_Bool)CreateGroup:(id)arg1 withMemberList:(id)arg2;
- (_Bool)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)ForceUpdateChatRoomContact:(id)arg1;
- (_Bool)GetChatRoomInfo:(id)arg1;
- (_Bool)GetChatRoomMemberDetail:(id)arg1;
- (_Bool)GetChatRoomUpgradeStatus:(id)arg1;
- (_Bool)GetEntireChatRoomMemberDetail:(id)arg1;
- (id)GetGroupMember:(id)arg1;
- (id)GetGroupMemberUserList:(id)arg1 chatRoomMemList:(id)arg2;
- (id)GetGroupMemberWithOutMyself:(id)arg1;
- (id)HandleCreateChatRoomOK:(id)arg1;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2 withInviterScene:(unsigned int)arg3 withTicket:(id)arg4 withUserData:(id)arg5;
- (_Bool)IsUsrInChatRoom:(id)arg1 Usr:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)OnAddChatRoomMember:(id)arg1;
- (void)OnApproveGroupMember:(id)arg1;
- (void)OnChangeChatRoomOwnerResp:(id)arg1;
- (int)OnCreateChatRoom:(id)arg1;
- (void)OnDeleteChatRoomMemberResponse:(id)arg1;
- (void)OnGetChatRoomInfoResp:(id)arg1;
- (void)OnGetChatRoomMemberDetail:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnInviteChatRoomMemberResp:(id)arg1;
- (void)OnOplogResp:(id)arg1;
- (void)OnOplogRespForChangeChatRoomAccessType:(id)arg1 Resp:(id)arg2;
- (void)OnOplogRespForModTopic:(id)arg1 Resp:(id)arg2;
- (void)OnSetChatRoomDescResp:(id)arg1;
- (void)OnUpdateContact:(id)arg1;
- (void)OnUpgradeChatRoom:(id)arg1;
- (_Bool)QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)SetChatRoomDesc:(id)arg1 Desc:(id)arg2 Flag:(unsigned int)arg3;
- (_Bool)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)SetShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (_Bool)SetUndeliverCountOpen:(_Bool)arg1 forGroup:(id)arg2;
- (_Bool)ShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)UnShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)UpgradeChatRoom:(id)arg1;
- (void)addChatMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
- (void)addCreateMsg:(id)arg1 ContactList:(id)arg2;
- (void)addReceiveVerifyMsgSystemMsg:(id)arg1 Msg:(id)arg2;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (void)dealloc;
- (id)genContactFromMemberResp:(id)arg1;
- (id)genVerifyMsgDesc:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (void)onGetChatRoomUpgradeStatus:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

