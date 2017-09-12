//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMAppAttachFileMgr : MMService <ICdnComMgrExt, PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_msgWrapDict;
    NSMutableDictionary *_msgAttachUrlDict;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)calcMessageWrapFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3;
- (void)checkDownload:(id)arg1;
- (void)checkIfFileExistInSvr:(id)arg1;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2;
- (void)dealloc;
- (unsigned long long)getShareChatRoomMemberMaxCount;
- (id)init;
- (_Bool)isLargeFileMessage:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *msgAttachUrlDict; // @synthesize msgAttachUrlDict=_msgAttachUrlDict;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void)onGetCheckBigFileDownloadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

