//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "BlueAdapterDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"
#import "IWCDeviceAccountMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCDeviceAuthLogicDelegate-Protocol.h"
#import "WCDeviceM7LogicDelegate-Protocol.h"
#import "WCDeviceNetworkLogicMgrDelegate-Protocol.h"
#import "WCDeviceSendDataToManufacturSvrLogicDelegate-Protocol.h"
#import "WCDeviceWifiStateLogicDelegate-Protocol.h"

@class BlueManager, NSMutableArray, NSMutableDictionary, NSString, WCDeviceAuthLogic, WCDeviceM7Logic, WCDeviceNetworkLogicMgr, WCDeviceSendDataToManufacturSvrLogic, WCDeviceWifiStateLogic;

@interface WCDeviceBrandMgr : MMService <MMService, WCDeviceAuthLogicDelegate, WCDeviceNetworkLogicMgrDelegate, WCDeviceSendDataToManufacturSvrLogicDelegate, WCDeviceWifiStateLogicDelegate, WCDeviceM7LogicDelegate, IMsgExt, BlueAdapterDelegate, IWCDeviceAccountMgrExt, IContactMgrExt, IPreEnterWechatLogicExt>
{
    WCDeviceAuthLogic *_authLogic;
    WCDeviceSendDataToManufacturSvrLogic *_sendDataLogic;
    WCDeviceNetworkLogicMgr *_networkLogic;
    WCDeviceWifiStateLogic *_wifiStateLogic;
    WCDeviceM7Logic *_m7Logic;
    unsigned int _scanMode;
    unsigned int _lastSyncModeScanTime;
    unsigned int _canTimingSyncTime;
    unsigned int _lastUploadStepCount;
    unsigned int _lastUploadHKStepCount;
    unsigned int _lastUploadM7StepCount;
    unsigned int _uploadingHKStepCount;
    unsigned int _uploadingM7StepCount;
    NSMutableDictionary *_devMaxSeqDic;
    long long _lastReportBTStateTime;
    _Bool _m_isScanning;
    int _m_appState;
    unsigned int _m_lastGetBoundDevTime;
    int _m_uploadStepScene;
    BlueManager *m_blueMgr;
    NSMutableDictionary *m_devices;
    NSMutableArray *m_tasks;
    NSMutableArray *m_bindingDevices;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (int)__channelConnectStateToChannelState:(int)arg1;
- (id)__findChannelByChannelId:(long long)arg1;
- (id)__findDeviceByDeviceId:(long long)arg1;
- (void)__findDeviceIdAndChannelIdBySessionId:(long long)arg1:(long long *)arg2:(long long *)arg3;
- (long long)__findDeviceIdByChannelId:(long long)arg1;
- (long long)__findDisconnectingDeviceIdByChannelId:(long long)arg1;
- (id)__getTimeString;
- (void)__onSessionCreated:(long long)arg1:(long long)arg2:(long long)arg3;
- (void)__stopChannel:(long long)arg1:(long long)arg2;
- (void *)__unpackPbData:(unsigned short)arg1:(const struct AutoBuffer *)arg2;
- (void)batchSearchWCDeviceByDevice:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (_Bool)c2objc_accessoryPushReq2Buf:(long long)arg1:(struct AutoBuffer *)arg2;
- (_Bool)c2objc_accessoryResp2Buf:(long long)arg1:(struct AutoBuffer *)arg2;
- (_Bool)c2objc_closeBluetoothSession:(long long)arg1;
- (_Bool)c2objc_connectBluetoothSession:(long long)arg1;
- (_Bool)c2objc_createBluetoothSessionByDeviceId:(long long)arg1 andChannelId:(long long)arg2;
- (void)c2objc_onAccessoryChannelConnectStateChanged:(long long)arg1:(int)arg2:(int)arg3:(int)arg4;
- (void)c2objc_onAccessoryCmdEnd:(long long)arg1:(int)arg2:(int)arg3:(const char *)arg4;
- (void)c2objc_onAccessoryRecvPack:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(const struct AutoBuffer *)arg4:(int)arg5;
- (_Bool)c2objc_sendData:(const struct AutoBuffer *)arg1 toBluetooth:(long long)arg2;
- (_Bool)canScanBlueToothDevice;
- (_Bool)canStartAutoSync;
- (_Bool)canStartTimingSync;
- (_Bool)checkDeviceReqValidity:(long long)arg1 Seq:(unsigned short)arg2;
- (void)closeProfile:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)dealloc;
- (void)enableBluetooth;
- (void)exchange:(id)arg1;
- (id)genInitRespTask:(int)arg1 DID:(unsigned long long)arg2 Seq:(unsigned short)arg3:(struct _MmBp__InitRequest *)arg4:(struct AutoBuffer *)arg5;
- (id)getBeginDate;
- (long long)getBleDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (id)getBlueMgr;
- (int)getBlueToothState;
- (int)getChannelState:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (long long)getDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)getEaDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (_Bool)getHKAuthorizationStatus;
- (unsigned int)getLastHealthkitStep;
- (unsigned int)getLastM7Step;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (unsigned int)getTimingSyncCurrentTime;
- (int)getWCDeviceWifiState:(id)arg1;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)handleWCDeviceReq:(long long)arg1 Seq:(unsigned short)arg2 CmdID:(unsigned short)arg3 Req:(const void *)arg4;
- (_Bool)hasBlueToothDevice;
- (_Bool)hasM7Device;
- (id)init;
- (_Bool)isDeviceAuthed:(long long)arg1;
- (_Bool)isMyMobileSupportBLE;
- (_Bool)isSendTo3rdServer:(id)arg1 ForType:(int)arg2;
- (_Bool)isSendToH5:(id)arg1 ForType:(int)arg2;
@property(nonatomic) int m_appState; // @synthesize m_appState=_m_appState;
@property(retain, nonatomic) NSMutableArray *m_bindingDevices; // @synthesize m_bindingDevices;
@property(retain, nonatomic) BlueManager *m_blueMgr; // @synthesize m_blueMgr;
@property(retain, nonatomic) NSMutableDictionary *m_devices; // @synthesize m_devices;
@property(nonatomic) _Bool m_isScanning; // @synthesize m_isScanning=_m_isScanning;
@property(nonatomic) unsigned int m_lastGetBoundDevTime; // @synthesize m_lastGetBoundDevTime=_m_lastGetBoundDevTime;
@property(retain, nonatomic) NSMutableArray *m_tasks; // @synthesize m_tasks;
@property(nonatomic) int m_uploadStepScene; // @synthesize m_uploadStepScene=_m_uploadStepScene;
- (_Bool)needScanBlueToothDevice;
- (void)onBatchSearchWCDeviceResponse:(id)arg1 Scene:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onDeviceFound:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceLost:(long long)arg1;
- (void)onGetSportDeviceListResponse:(id)arg1 dataSourceFaqURL:(id)arg2 ErrorCode:(int)arg3;
- (void)onGotDeviceStepObject:(id)arg1;
- (void)onHandleMsgEnd:(id)arg1 ErrCode:(int)arg2;
- (void)onPreEnterWechatDone;
- (void)onSearchWCDeviceResponse:(id)arg1;
- (void)onSendAirKissHelpUrlReq:(id)arg1 device:(id)arg2;
- (void)onSendSearchBLEHardDevice:(id)arg1 device:(id)arg2;
- (void)onSendSearchWifiHardDevice:(id)arg1 extData:(id)arg2;
- (void)onSendWCDeviceBindResponse:(id)arg1 Ticket:(id)arg2 Error:(id)arg3;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 deviceId:(id)arg2 bAllUnbind:(_Bool)arg3 Error:(id)arg4;
- (void)onSendWCDevicesGetOperTicketResponse:(id)arg1 reqTicketList:(id)arg2 ErrorCode:(int)arg3;
- (void)onSessionClosed:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnected:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (void)onStateChange:(int)arg1;
- (void)onUpdateMyDeviceAttrResponse:(id)arg1 Error:(int)arg2;
- (void)onUploadDeviceStepReponse:(id)arg1 stepCount:(unsigned int)arg2 HKStepCount:(unsigned int)arg3 M7StepCount:(unsigned int)arg4 sourceWhiteList:(id)arg5 ErrorCode:(int)arg6;
- (void)onWCDeviceAccountBound:(id)arg1;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)onWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)onhandleWifiStateUpdateMsgEnd:(id)arg1 Status:(unsigned int)arg2;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)scan:(id)arg1;
- (int)scanProfile;
- (void)sendDecodeErrorToDevice:(long long)arg1;
- (void)sendGetHardDeviceHelpUrl:(id)arg1;
- (void)sendGetSportDeviceListReq;
- (long long)sendPushData:(id)arg1 ToDevice:(id)arg2 andDeviceType:(id)arg3 withType:(int)arg4;
- (void)sendPushDataToDevice:(id)arg1;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendSwitchBackgroundPushWithOpToDevice:(int)arg1;
- (void)sendUpdateMyDeviceAttrReq:(id)arg1 alias:(id)arg2 isMain:(unsigned int)arg3;
- (void)sendUploadBlueProfileStepReq:(id)arg1 stepCount:(unsigned int)arg2;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceUnbindRequestWithDeviceType:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;
- (void)startAutoSyncModeScan;
- (int)startChannel:(long long)arg1;
- (int)startTask:(id)arg1;
- (void)startTimingSync;
- (void)stopAutoSyncModeScan;
- (void)stopChannel:(long long)arg1;
- (void)stopScan;
- (void)stopSyncModeDevice:(id)arg1;
- (void)stopTask:(long long)arg1;
- (void)stopTimingSyncModeScan;
- (void)subscribeWifiStateUpdateFor:(id)arg1 ReqType:(unsigned int)arg2;
- (void)switchDeviceMode:(_Bool)arg1 DID:(long long)arg2 EnterOrExitChatView:(_Bool)arg3;
- (void)tryReportBlueState;
- (void)tryUploadM7OrHealthKitStepCount:(_Bool)arg1 scene:(int)arg2;
- (void)tryUploadStepOnObserver;
- (void)uploadStepOnLaunch;
- (void)willEnterForeground;
- (void)willResignActive;
- (void)willSuspend;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

