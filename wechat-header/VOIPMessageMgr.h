//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MonoServiceMsgDelegate-Protocol.h"
#import "MonoServiceMsgLogicDelegate-Protocol.h"
#import "VoIPPushKitExt-Protocol.h"
#import "VoipGetRoomInfoCgiDelegate-Protocol.h"

@class NSString, VoipGetRoomInfoCgi;

@interface VOIPMessageMgr : MMService <MonoServiceMsgDelegate, MonoServiceMsgLogicDelegate, VoipGetRoomInfoCgiDelegate, MMService, IMsgExt, VoIPPushKitExt>
{
    VoipGetRoomInfoCgi *m_getRoomInfoCgi;
}

+ (id)genInviteMessageFromVoipMonoMsg:(id)arg1;
+ (id)genMessageForCancleVoip:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3 InviteType:(unsigned int)arg4 CreateTime:(unsigned int)arg5;
+ (void)reportAckWithCallResult:(int)arg1 ByVoipMsg:(id)arg2;
+ (_Bool)startVoipViewByVoipMonoMsg:(id)arg1;
- (void).cxx_destruct;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (void)handleVoipInvite:(id)arg1 withMessageWrap:(id)arg2;
- (void)handleVoipRemind:(id)arg1 MsgWrap:(id)arg2;
- (id)init;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIExist;
- (_Bool)isMonoServiceUIWorking;
@property(retain, nonatomic) VoipGetRoomInfoCgi *m_getRoomInfoCgi; // @synthesize m_getRoomInfoCgi;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onVoipGetRoomInfoCgiConnectFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiOk:(id)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(id)arg1;
- (void)receiveAnsweredFromNotify:(id)arg1;
- (void)receiveCancelFromNotify:(id)arg1;
- (void)receiveCancelMsgFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveInviteFromNotify:(id)arg1;
- (void)receiveInviteFromSync:(id)arg1 MsgWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

