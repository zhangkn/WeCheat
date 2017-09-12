//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "CNetworkStatusExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMResBatchDownloadMgr-Protocol.h"
#import "MMResBatchDownloadMgrDelegate-Protocol.h"
#import "MMResDownloadMgrDelegate-Protocol.h"
#import "MMResInfoMgr-Protocol.h"
#import "MMResourceDownloadMgr-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMResBatchDownloadMgr, MMResInfoMgr, MMResourceDownloadMgr, NSString;

@interface MMResourceService : MMService <MMResDownloadMgrDelegate, MMResBatchDownloadMgrDelegate, IMsgExt, CNetworkStatusExt, MMService, MMResInfoMgr, MMResourceDownloadMgr, MMResBatchDownloadMgr, PBMessageObserverDelegate>
{
    MMResInfoMgr *_resInfoMgr;
    MMResourceDownloadMgr *_resDownloadMgr;
    MMResBatchDownloadMgr *_batchResDownloadMgr;
}

- (void).cxx_destruct;
- (void)ForceUpdateErrorHandler:(id)arg1;
- (void)ForceUpdateErrorHandler:(id)arg1 ErrorType:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnResUpdateFinishOnMainThread:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)addBatchDownloadTask:(id)arg1;
- (void)addDownloadTask:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)checkAllResUpdate;
- (void)checkAllTestResUpdate;
- (void)checkAndReloadDownloadTask;
- (void)checkResUpdate:(unsigned int)arg1;
- (void)checkTestResUpdate:(unsigned int)arg1 WithSubType:(unsigned int)arg2;
- (void)clearABTestData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (void)createDownloadTask:(id)arg1;
- (void)dealloc;
- (void)deleteAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 ForceWithoutLogin:(_Bool)arg3;
- (id)getAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)getCheckResUpdateRequest:(id)arg1;
- (id)getResData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 ErrorCode:(long long *)arg3;
- (id)getResInfo:(unsigned int)arg1;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3;
- (id)getTestList;
- (void)handleDownloadTask:(id)arg1 downloadData:(id)arg2;
- (id)init;
- (_Bool)insertNewResInfo:(id)arg1;
- (_Bool)isForceUpdateMessageReturn:(id)arg1;
- (_Bool)isNeedToDownloadNonWebRes:(id)arg1;
- (_Bool)isRequestInNonAuth;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (id)parseCacheNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDecryptNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDeleteNode:(struct XmlReaderNode_t *)arg1;
- (void)parseNewXml:(id)arg1;
- (void)processResCacheRequest:(id)arg1 Scene:(int)arg2;
- (void)processResDecryptRequest:(id)arg1 Scene:(int)arg2;
- (void)processResDeleteRequest:(id)arg1 Scene:(int)arg2;
- (const char *)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)reloadDownloadTask;
- (void)saveAESKeyInKeyChain:(id)arg1 WithResType:(unsigned int)arg2 WithSubtype:(unsigned int)arg3 WithKeyVersion:(unsigned int)arg4 WithEID:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

