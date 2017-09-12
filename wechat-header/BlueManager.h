//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BlueAdapterDelegate-Protocol.h"
#import "CBCentralManagerDelegate-Protocol.h"

@class BlueAdapterBase, CBCentralManager, NSString;
@protocol BlueAdapterDelegate, OS_dispatch_queue;

@interface BlueManager : NSObject <CBCentralManagerDelegate, BlueAdapterDelegate>
{
    CBCentralManager *_bleManager;
    _Bool _stateUpdateFlag;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    BlueAdapterBase *adapter[2];
    NSObject<BlueAdapterDelegate> *_delegate;
}

+ (long long)getDIDbyMACString:(id)arg1 AndConnProto:(id)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) CBCentralManager *bleManager; // @synthesize bleManager=_bleManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)cleanUpAllDevices;
- (void)closeProfile:(long long)arg1;
- (void)closeSession:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (int)connectSession:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (void)dealloc;
@property __weak NSObject<BlueAdapterDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)enable;
- (long long)getDIDbySessionID:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (int)getDeviceType:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (int)getState;
- (id)init;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onDeviceFound:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceLost:(long long)arg1;
- (void)onSessionClosed:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnected:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)readSession:(long long)arg1:(char *)arg2:(int)arg3;
- (_Bool)scan;
- (_Bool)scanAll;
- (_Bool)scanBle:(_Bool)arg1;
- (_Bool)scanEa;
- (_Bool)scanForWDevice;
@property _Bool stateUpdateFlag; // @synthesize stateUpdateFlag=_stateUpdateFlag;
- (void)stopScan;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (void)writeSession:(long long)arg1:(const char *)arg2:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

