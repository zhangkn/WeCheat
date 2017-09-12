//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "EmoticonAddToServerLogicDelegate-Protocol.h"
#import "EmoticonOperateCgiDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class EmoticonOperateCgi, NSMutableArray, NSString;

@interface EmoticonBackupOperateMgr : MMService <EmoticonOperateCgiDelegate, EmoticonAddToServerLogicDelegate, MMService>
{
    NSMutableArray *m_addLogicList;
    EmoticonOperateCgi *_m_operateCgi;
}

- (void).cxx_destruct;
- (void)addBackupEmoticonToServer:(id)arg1;
- (void)dealloc;
- (void)deleteBackupEmoticonFromServer:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_addLogicList; // @synthesize m_addLogicList;
@property(retain, nonatomic) EmoticonOperateCgi *m_operateCgi; // @synthesize m_operateCgi=_m_operateCgi;
- (void)onEmoticonAddToServerFailed:(id)arg1 isOverLimit:(_Bool)arg2;
- (void)onEmoticonAddToServerOk:(id)arg1;
- (void)onEmoticonOperateFailed:(id)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 opCode:(unsigned long long)arg3;
- (void)stickyBackupEmoticonToServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

