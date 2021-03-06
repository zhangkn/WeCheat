//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "AUAudioDataSource-Protocol.h"
#import "AVAudioPlayerDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "IAUAudioDeviceExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrComparerExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IRemoteControlCheckExt-Protocol.h"
#import "IWXTalkPresentExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class AVAudioPlayer, MMTimer, NSData, NSRecursiveLock, NSString, WXTalkDNSController, WXTalkRoomData, WXTalkStatusReportHelper, WXTalkieComponent;

@interface WXTalkMgr : MMService <AUAudioDataSource, IRemoteControlCheckExt, AVAudioPlayerDelegate, CNetworkStatusExt, IAUAudioDeviceExt, MMService, PBMessageObserverDelegate, IWXTalkPresentExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrComparerExt, MMKernelExt>
{
    _Bool _isInTalkRoom;
    _Bool _isRealInTalkRoom;
    MMTimer *_regetMicTimer;
    _Bool _isPause;
    _Bool _isPlayingBeginSound;
    _Bool _isGettingRoomMember;
    _Bool _isRecording;
    NSData *_giveupMicSound;
    _Bool _hasPlayGetMicSound;
    _Bool _isWantToTalk;
    unsigned int _scene;
    AVAudioPlayer *_player;
    WXTalkStatusReportHelper *_reportHelper;
    WXTalkRoomData *roomData;
    WXTalkieComponent *component;
    WXTalkDNSController *wxTalkDNSController;
    NSRecursiveLock *audioEncLock;
    NSRecursiveLock *audioDecLock;
    MMTimer *wxTalkTimer;
    struct __sFILE *recordDumpFile;
}

- (void).cxx_destruct;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)CanEnterThisRoom:(id)arg1;
- (void)CloseRecordDumpFile;
- (void)CloseWXTalkMode:(_Bool)arg1;
- (void)CloseWXTalkModeAndNotifyUI:(_Bool)arg1;
- (void)CreateRecordDumpFile;
- (void)DumpToRecordFile:(char *)arg1 withDataLen:(unsigned int)arg2;
- (void)ForceStop;
- (void)GetMicrophone;
- (void)GetUnknowMemberByMemberId:(unsigned int)arg1;
- (void)GiveupMicrophone;
- (void)InitAll;
- (_Bool)IsOpenAnyWXTalkMode;
- (_Bool)IsOpenWXTalkMode:(id)arg1;
- (_Bool)IsRealInTalkRoom;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)NotifyMainThreadCurrentSpeakingStatus:(id)arg1;
- (void)NotifyMainThreadEngineError;
- (void)NotifyMainThreadEnterRoomOK;
- (void)NotifyMainThreadHasTalkingData;
- (void)NotifyMainThreadNoTalkingData;
- (void)OnEngineError:(int)arg1;
- (void)OnOpenEngineSuccess;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (_Bool)OpenWXTalkMode:(id)arg1;
- (void)Pause;
- (void)PlayBeginSound;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)ReportNobodyTalking;
- (void)Restart;
- (void)SendEnterTalkRoomRequest;
- (void)SendExitTalkRoomRequest;
- (void)SendGetMicrophoneRequest;
- (void)SendGiveupMicrophoneRequest;
- (void)SendHeartBeatRequest;
- (void)SendRegetMicrophoneRequest;
- (void)SetCurrentSpeakingMember:(id)arg1;
- (void)StartPlay;
- (void)StartRecord;
- (void)StartSession;
- (void)StartTalk;
- (void)StopRecord;
- (void)StopReportNobodyTalking;
- (void)StopSession;
- (void)StopTalk;
- (void)TellOthersAllMembersExitRoom;
- (void)TellOthersWhoEnterOrExitRoom:(id)arg1;
- (void)TimerCheck;
- (void)UnInitAll;
@property(retain, nonatomic) NSRecursiveLock *audioDecLock; // @synthesize audioDecLock;
- (void)audioDeviceForceStop:(id)arg1;
- (void)audioDevicePause:(id)arg1;
- (void)audioDeviceResetCallback:(id)arg1;
- (void)audioDeviceRestart:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *audioEncLock; // @synthesize audioEncLock;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)checkIfOfflineAndNeedReEnter:(id)arg1;
- (long long)compareSessionInfo:(id)arg1 toInfo:(id)arg2;
@property(retain, nonatomic) WXTalkieComponent *component; // @synthesize component;
- (void)dealloc;
- (void)getComparer:(id *)arg1 ForSelector:(int)arg2;
- (void)handleBeginInterruption;
- (void)handleEndInterruption;
- (void)handleEnterTalkRoomResponse:(id)arg1;
- (void)handleExitTalkRoomResponse:(id)arg1;
- (void)handleGetMicrophoneResponse:(id)arg1;
- (void)handleGetTalkRoomMemberResponse:(id)arg1;
- (void)handleHeartBeatResponse:(id)arg1;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckShouldFinishRecord;
- (_Bool)isGetDataReady;
- (void)onKickQuit;
- (void)onModifyContact:(id)arg1;
- (void)onPreQuit;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)reOpenWXTalkMode:(id)arg1;
@property(nonatomic) struct __sFILE *recordDumpFile; // @synthesize recordDumpFile;
- (void)resetData;
- (int)retToErrType:(int)arg1;
@property(retain, nonatomic) WXTalkRoomData *roomData; // @synthesize roomData;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)sendGiveupMicrophoneSound;
@property(retain, nonatomic) WXTalkDNSController *wxTalkDNSController; // @synthesize wxTalkDNSController;
@property(retain, nonatomic) MMTimer *wxTalkTimer; // @synthesize wxTalkTimer;
- (void)startRegetMicLogic;
- (void)stopPlaySound;
- (void)stopRegetMicLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

