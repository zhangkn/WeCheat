//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NotifyFromMainCtrlDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol EnterpriseVoiceMsgMgrDelegate;

@interface EnterpriseVoiceMsgMgr : MMObject <NotifyFromMainCtrlDelegate>
{
    NSMutableDictionary *_dicMsgSource;
    _Bool _isContinueWrite;
    id <EnterpriseVoiceMsgMgrDelegate> delegate;
}

- (void).cxx_destruct;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (_Bool)WriteAudioFile:(id)arg1 Offset:(unsigned int)arg2 Data:(id)arg3;
@property(nonatomic) __weak id <EnterpriseVoiceMsgMgrDelegate> delegate; // @synthesize delegate;
- (_Bool)downloadVoiceData:(id)arg1;
- (id)genKeyWithChatUsrName:(id)arg1 svrID:(unsigned long long)arg2;
- (void)handleDownloadVoiceMsgFail:(id)arg1;
- (void)handleDownloadVoiceMsgSuc:(id)arg1;
- (void)handleSendVoiceMsgFail:(id)arg1;
- (void)handleSendVoiceMsgSuc:(id)arg1;
- (id)init;
- (id)popMsgSource:(id)arg1;
- (void)pushMsgSource:(id)arg1;
- (_Bool)resendVoiceMsg:(id)arg1;
- (_Bool)sendVoiceMsgByUserData:(id)arg1;
- (_Bool)uploadVoice:(id)arg1;
- (void)wrtieFileOfVoiceMsg:(id)arg1;

@end
