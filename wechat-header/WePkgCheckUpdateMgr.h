//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;

@interface WePkgCheckUpdateMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *_arrCheckingPkgIds;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailExtForPkgId:(id)arg1 errCode:(int)arg2;
- (void)callSuccessExtForPkgId:(id)arg1;
- (_Bool)checkUpdateForPkgId:(id)arg1 Scene:(int)arg2;
- (void)copyAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyAtomicSingleFileListToUpdateConfig:(id)arg1 UpdateConfig:(id)arg2;
- (void)copyNonAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyPkgResponseToTmpConfig:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)handleRespCGIWarp:(id)arg1;
- (void)handleSuccessResp:(id)arg1 regConfig:(id)arg2 ResonpseMd5:(id)arg3;
- (id)init;
- (_Bool)isSameAsLastOne:(id)arg1 RegularRespMd5:(id)arg2 PkgId:(id)arg3;
- (void)removeFromCheckingArr:(id)arg1;
- (_Bool)sendReq:(id)arg1 Scene:(int)arg2;
- (void)updateGlobalPkgId2Version:(id)arg1 PkgItem:(id)arg2;

@end

