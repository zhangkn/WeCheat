//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "CNetworkStatusExt-Protocol.h"
#import "EmoticonDownloadProxyDelegate-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary;

@interface CEmoticonDownloadMgr : MMObject <EmoticonDownloadProxyDelegate, CNetworkStatusExt>
{
    NSMutableDictionary *m_downloadCgiDic;
    OrderedDictionary *m_notDownloadQueue;
    NSMutableDictionary *m_downloadInfoDic;
    unsigned int m_downloadCgiMaxCount;
    NSRecursiveLock *_m_oLock;
}

- (void).cxx_destruct;
- (void)InitWithDB:(id)arg1 Lock:(id)arg2;
- (_Bool)IsMsgInDownloadQueue:(id)arg1 n64SvrID:(long long)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)addToDownloadInfoDicWithMsgWrap:(id)arg1;
- (_Bool)checkDownload;
- (void)dealloc;
- (void)deleteMsgForChat:(id)arg1 n64SvrID:(long long)arg2;
- (void)downloadFail:(id)arg1;
- (id)downloadInfoForChat:(id)arg1 n64SvrID:(long long)arg2;
- (void)downloadOK:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
- (void)migrateFromDB:(id)arg1 Lock:(id)arg2;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onSimCardNetTypeChange;
- (void)resumeDownload;
- (void)startDownload:(id)arg1 highPriority:(_Bool)arg2;
- (void)stopDownloadByChatName:(id)arg1;
- (void)stopDownloadByChatName:(id)arg1 n64SvrID:(long long)arg2;
- (void)updateDownloadCgiMaxCount;
- (void)upgradePriorityForMsgWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

