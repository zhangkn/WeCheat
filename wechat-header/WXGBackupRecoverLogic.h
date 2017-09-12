//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXGBackupBasicLogic.h"

#import "WXGBackupRecoverHelperDelegate-Protocol.h"

@class NSString, WXGBackupRecoverHelper, WXGChatLogProtoHandler;

@interface WXGBackupRecoverLogic : WXGBackupBasicLogic <WXGBackupRecoverHelperDelegate>
{
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupRecoverHelper *m_recoverHelper;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastSessionName;
    _Bool m_bFirstTag;
    _Bool m_bStopService;
}

- (void).cxx_destruct;
- (void)confirmLogic;
- (id)initWithProtoHandler:(id)arg1 withProcessQueue:(id)arg2;
- (void)onData:(id)arg1 writeToFileFinsh:(_Bool)arg2;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)resendService;
- (_Bool)sendData:(id)arg1;
- (void)sendDataPushResponse:(id)arg1;
- (void)sendDataTagResponseForDataTag:(id)arg1;
- (void)sendRecoverConfirm;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)sendStartResponseWithStatus:(int)arg1;
- (void)startService;
- (void)stopService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

