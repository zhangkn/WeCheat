//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "WAPackageDownloadLogicDelegate-Protocol.h"
#import "WAPackageInfoCacheLogicDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WAMsgNodeImageDownloadLogic, WAPackageDownloadLogic;

@interface WAMsgNodeResourceMgr : MMService <WAPackageDownloadLogicDelegate, WAPackageInfoCacheLogicDelegate, MMService>
{
    NSMutableDictionary *_appidToMd5List;
    WAPackageDownloadLogic *_pkgDownloadLogic;
    NSMutableDictionary *_dictPkgInfoCacheLogic;
    NSMutableDictionary *_dictPkgUrlToUserdata;
    WAMsgNodeImageDownloadLogic *_imageDownloadLogic;
}

- (void).cxx_destruct;
- (void)clearMemCache;
- (void)downloadImageByUrl:(id)arg1 appId:(id)arg2 statId:(id)arg3 scene:(unsigned int)arg4;
- (id)getFile:(id)arg1 withAppId:(id)arg2 version:(unsigned long long)arg3 debugMode:(unsigned int)arg4 scene:(unsigned int)arg5;
- (id)getImage:(id)arg1 withAppId:(id)arg2 version:(unsigned long long)arg3 debugMode:(unsigned int)arg4 statId:(id)arg5 scene:(unsigned int)arg6;
- (id)getImageByAppId:(id)arg1 md5:(id)arg2;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 scene:(unsigned int)arg2;
- (id)getPkgInfoCacheLogicWithScene:(unsigned int)arg1;
- (id)getScriptWithAppId:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned int)arg3 scene:(unsigned int)arg4;
- (id)init;
- (void)insertImage:(id)arg1 ByAppId:(id)arg2 md5:(id)arg3;
- (_Bool)isScriptExistWithAppId:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned int)arg3 scene:(unsigned int)arg4;
- (_Bool)loadPkgInfoLocalCache:(id)arg1 version:(unsigned long long)arg2 debugMode:(unsigned int)arg3 checksum:(id)arg4 scene:(unsigned int)arg5;
- (void)markSafeWithAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)reportCostTimeWithReportItem:(id)arg1 eventId:(unsigned long long)arg2 result:(_Bool)arg3 beginTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5 dataSize:(unsigned int)arg6 isSync:(_Bool)arg7;
- (void)updateScriptPkgWithAppId:(id)arg1 url:(id)arg2 version:(unsigned long long)arg3 debugMode:(unsigned int)arg4 checksum:(id)arg5 scene:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

