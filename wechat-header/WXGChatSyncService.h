//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WXGChatSyncDataPackerDelegate-Protocol.h"

@class CdnUploadTaskInfo, NSDate, NSString, WXGChatSyncDataPacker;

@interface WXGChatSyncService : MMService <ICdnComMgrExt, PBMessageObserverDelegate, WXGChatSyncDataPackerDelegate, IOnlineClientMgrExt, MMService>
{
    NSString *m_uploadingFileName;
    NSString *m_uploadingFilePath;
    WXGChatSyncDataPacker *m_dataPacker;
    _Bool m_startSync;
    long long m_sessionListCount;
    long long m_sessionInfoCount;
    long long m_msgCount;
    long long m_timeLimit;
    _Bool m_pcSyncClose;
    _Bool m_macSyncClose;
    unsigned int m_dataSize;
    NSDate *m_startSyncDate;
    NSDate *m_startPack;
    NSString *m_pemPublicKey;
    unsigned int m_pcVersion;
    unsigned int m_macVersion;
    unsigned int m_deviceType;
    _Bool _partnerDeviceLogin;
    CdnUploadTaskInfo *_currentUploadInfo;
}

+ (void)hexStringToUnsignedChar:(id)arg1 output:(char **)arg2 outputLength:(unsigned int *)arg3;
+ (id)unsignedcharToHexString:(char *)arg1 withSize:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
@property(retain, nonatomic) CdnUploadTaskInfo *currentUploadInfo; // @synthesize currentUploadInfo=_currentUploadInfo;
- (void)dealloc;
- (_Bool)getMacSyncCloseSetting;
- (unsigned int)getMacVersion;
- (long long)getMsgCount;
- (_Bool)getPCSyncCloseSetting;
- (unsigned int)getPCVersion;
- (long long)getSessionInfoCount;
- (long long)getSessionListCount;
- (long long)getTimeLimit;
- (id)init;
- (void)onChatSyncDataPackFinishWithFilePath:(id)arg1;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (void)p_checkABTest;
@property(nonatomic) _Bool partnerDeviceLogin; // @synthesize partnerDeviceLogin=_partnerDeviceLogin;
- (_Bool)sendAppMessageWith:(id)arg1;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2;
- (void)startUploadDataToCDNWithFilePath:(id)arg1;
- (void)stopSync;
- (void)syncSetting;
- (void)trySendAppMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

