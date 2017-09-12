//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IClearDataMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class ForwardMessageLogicController, MMTimer, NSMutableDictionary, NSString;

@interface MMShareExtMgr : MMService <MMKernelExt, IMMNewSessionMgrExt, ICdnComMgrExt, PBMessageObserverDelegate, IMsgExt, IClearDataMgrExt, ForwardMessageLogicDelegate, MMService>
{
    ForwardMessageLogicController *m_forwardLogic;
    _Bool _sessionDidChanged;
    _Bool _isMsgFailChecking;
    _Bool _didHandleShareExtEventAfterActive;
    MMTimer *_msgFailCkeckTimer;
    NSMutableDictionary *_msgClientIdDict;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnUpdatedCdnDnsInfo:(id)arg1 snsCdnInfo:(id)arg2 appCdnInfo:(id)arg3;
- (void)addAppmsgClientID:(id)arg1;
- (void)addImageMsgClientID:(id)arg1;
- (void)addVideoMsgClientID:(id)arg1;
- (void)clearShareExtResource;
- (unsigned long long)clearShareExtResourceInternal;
- (void)createShareSessionFileIfNeed;
- (void)dealloc;
@property(nonatomic) _Bool didHandleShareExtEventAfterActive; // @synthesize didHandleShareExtEventAfterActive=_didHandleShareExtEventAfterActive;
- (id)genMsgByTransmitFileData:(id)arg1;
- (id)genMsgByTransmitImageData:(id)arg1;
- (id)genMsgByTransmitUrlData:(id)arg1;
- (id)genMsgByTransmitVideoData:(id)arg1;
- (void)genMsgFailClientIdDict;
- (id)getCurrentViewController;
- (id)getRecentShareSessionWithSessionList:(id)arg1;
- (id)getUserNamesOnContactsListMaxCount:(unsigned int)arg1;
- (void)handleAppMsgNewXml:(id)arg1;
- (void)handleAppMsgSendStatus:(id)arg1;
- (void)handleAppMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleImageMsgNewXml:(id)arg1;
- (void)handleImageMsgSendStatus:(id)arg1;
- (void)handleImageMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleMessageUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleShareExtEventAfterServiceActive;
- (void)handleShareExtFavFileUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavImageUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavRequestAfterAppActive;
- (void)handleShareExtFavUrlUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavVideoUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtIdKeyReportAfterAppActive;
- (void)handleShareExtMessageFailRequestAfterServiceActive;
- (void)handleShareExtTimelineFailRequestAfterAppActive;
- (void)handleTimelineUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleVideoMsgNewXml:(id)arg1;
- (void)handleVideoMsgSendStatus:(id)arg1;
- (void)handleVideoMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (_Bool)hasFailMessageTask;
@property(nonatomic) _Bool isMsgFailChecking; // @synthesize isMsgFailChecking=_isMsgFailChecking;
- (_Bool)isSupportExtension;
@property(retain, nonatomic) NSMutableDictionary *msgClientIdDict; // @synthesize msgClientIdDict=_msgClientIdDict;
@property(retain, nonatomic) MMTimer *msgFailCkeckTimer; // @synthesize msgFailCkeckTimer=_msgFailCkeckTimer;
- (_Bool)needRefreshExtraShareSession;
- (void)onAuthOK;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onMsgFailCheckTimeout;
- (void)onNeedReload;
- (void)onPreQuit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)refershExtensionKey;
- (void)refreshExtraSessionListData;
- (void)refreshExtraSessionListUpdateTime;
- (void)refreshExtraShareSessionData;
- (void)refreshServerIPForExtension;
- (void)refreshShareSessionData;
- (void)refreshShareSessionIfNeed;
- (void)removeAppMsgID:(id)arg1;
- (void)removeImageMsgID:(id)arg1;
- (void)removeMessageMetaDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
- (void)removeVideoMsgID:(id)arg1;
- (void)reportSendMsgFailIdKeyWithStatuscode:(long long)arg1;
- (void)reportSendTimelineFailIdKeyWithStatuscode:(long long)arg1;
- (_Bool)saveImageMsgImg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)saveImageMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (void)saveVideoMsgFileData:(id)arg1 videoInfo:(id)arg2;
@property(nonatomic) _Bool sessionDidChanged; // @synthesize sessionDidChanged=_sessionDidChanged;
- (void)shareMessageToFriend:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

