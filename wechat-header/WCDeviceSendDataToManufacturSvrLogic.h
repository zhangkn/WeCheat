//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol WCDeviceSendDataToManufacturSvrLogicDelegate;

@interface WCDeviceSendDataToManufacturSvrLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_tasks;
    int m_appState;
    id <WCDeviceSendDataToManufacturSvrLogicDelegate> _delegate;
    long long _m_sessionId;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)__clearTaskById:(long long)arg1;
- (id)__findTaskBySessionId:(long long)arg1;
- (id)__findTaskByTaskId:(long long)arg1;
- (void)__sendRespToDevice:(id)arg1:(int)arg2:(struct AutoBuffer *)arg3;
- (void)clearTimeoutTask;
- (void)dealloc;
@property(nonatomic) __weak id <WCDeviceSendDataToManufacturSvrLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleDeviceLost:(unsigned long long)arg1;
- (void)handleDeviceSendDataToManufacturerSvrReq:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(struct _MmBp__SendDataRequest **)arg4 SessionBuffer:(id)arg5;
- (void)handleSendMessageResponse:(unsigned long long)arg1 Device:(id)arg2 Error:(id)arg3;
- (void)handleSendWCDeviceMessageResponse:(id)arg1;
- (void)handleSvrResp:(id)arg1;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (id)init;
@property long long m_sessionId; // @synthesize m_sessionId=_m_sessionId;
- (void)sendWCDeviceMessageRequest:(id)arg1;
- (void)sendWCDeviceMessageRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)willEnterForeground;
- (void)willSuspend;

@end

