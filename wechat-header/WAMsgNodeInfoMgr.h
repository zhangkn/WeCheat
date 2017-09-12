//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodeInfoMgr : MMService <MMService>
{
    NSMutableDictionary *_dictPkgInfoList;
}

- (void).cxx_destruct;
- (void)deletePkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 isTemp:(_Bool)arg3 scene:(unsigned int)arg4;
- (void)deleteStablePkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)deleteTempPkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)getPathOfPkgInfo:(_Bool)arg1 scene:(unsigned int)arg2;
- (id)getPkgInfoDict:(_Bool)arg1 scene:(unsigned int)arg2;
- (id)getPkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 isTemp:(_Bool)arg3 scene:(unsigned int)arg4;
- (id)getStablePkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)getTempPkgInfoWithAppId:(id)arg1 debugMode:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)keyForPkgInfoDictWithScene:(unsigned int)arg1 isTemp:(_Bool)arg2;
- (void)loadPkgInfoData:(_Bool)arg1 scene:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)savePkgInfoData:(_Bool)arg1 scene:(unsigned int)arg2;
- (void)setPkgInfo:(id)arg1 isTemp:(_Bool)arg2;
- (void)setStablePkgInfo:(id)arg1;
- (void)setTempPkgInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

