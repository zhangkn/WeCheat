//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSRecursiveLock, NSString;

@interface PSTNSyncMgr : MMService <PBMessageObserverDelegate, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    int mRoomId;
    long long mRoomKey;
    long long mCallSeq;
    _Bool m_isDoingSync;
    unsigned int m_nCalledStatus;
    unsigned int m_nStatusSyncKey;
    int mAcceptDataFlag;
    MMTimer *m_syncTimer;
    NSMutableArray *_mOplogList;
    NSRecursiveLock *_mOplogLock;
}

- (void).cxx_destruct;
- (void)HandlePSTNSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendSyncRequestFor;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2 andCallSeq:(long long)arg3;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSession;
- (void)StopSyncTimer;
- (void)check_next_sync;
- (void)forceCheck_next_sync;
- (unsigned int)getCalledStatus;
- (int)getRoomId;
- (long long)getRoomKey;
- (unsigned int)getStatusSyncKey;
- (id)init;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList=_mOplogList;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock=_mOplogLock;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)setAcceptDataFlag:(int)arg1;
- (void)setCalledStatus:(unsigned int)arg1;
- (void)setStatusSyncKey:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
