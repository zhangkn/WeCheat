//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ScanQRCodeUrlPrefixHandler.h"

#import "WCBaseControlMgrExt-Protocol.h"

@class NSString;

@interface ScanQRCodeTransferUrlHandler : ScanQRCodeUrlPrefixHandler <WCBaseControlMgrExt>
{
}

- (void)dealloc;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)reportCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

