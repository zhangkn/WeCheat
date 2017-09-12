//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IDownloadImageExt-Protocol.h"
#import "IEnterpriseMsgExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class CMessageWrap, ImageAutoControl, NSMutableArray, NSString;

@interface ImageAutoDownloadMgr : MMService <MMService, IMsgExt, IDownloadImageExt, IEnterpriseMsgExt>
{
    NSMutableArray *m_arrChatQueue;
    NSMutableArray *m_arrBackGroundQueue;
    CMessageWrap *m_CurDownloadingMsg;
    unsigned int m_uiStatus;
    ImageAutoControl *m_oImageAutoControl;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (void)ClearChatQueue;
- (unsigned int)GetQueueType:(id)arg1;
- (void)InternalAddMsgToQueue:(id)arg1 Msg:(id)arg2;
- (_Bool)IsImageShouldDownload:(id)arg1;
- (_Bool)IsInDownloadQueue:(id)arg1 Queue:(id)arg2;
- (_Bool)IsMsgCanDownload:(id)arg1 CheckNotify:(_Bool)arg2;
- (_Bool)IsMsgCanDownloadForExp:(id)arg1 CheckNotify:(_Bool)arg2;
- (_Bool)IsMsgDownloaded:(id)arg1;
- (_Bool)IsQueueCheckNotify:(id)arg1;
- (void)LoadControlData;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnBeginDownloadAppData:(id)arg1;
- (void)OnBeginDownloadAppData:(id)arg1 Brand:(id)arg2;
- (void)OnBeginDownloadVideo:(id)arg1;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)RemoveMsgFromQueue:(id)arg1 ByChatName:(id)arg2;
- (void)RemoveMsgFromQueue:(id)arg1 Msg:(id)arg2;
- (void)ResumeBackGroundQueue;
- (void)SaveControlData;
- (void)StartAutoDownloadFromChat:(id)arg1;
- (_Bool)StartDownloadMsgFromQueue:(id)arg1;
- (void)StopBackGroundQueue;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CMessageWrap *m_CurDownloadingMsg; // @synthesize m_CurDownloadingMsg;
- (void)onServiceReloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

