//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSData, WCCardPkgDB;
@protocol WCCardSyncMgrDelegate;

@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate>
{
    NSData *_syncKeyBuffer;
    WCCardPkgDB *_wcCardPkgDB;
    id <WCCardSyncMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearSyncKey;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSyncKeyBufferFilePath;
- (void)handleWCCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)initDB:(id)arg1;
- (void)loadSyncKeyBuffer;
- (void)reloadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer:(id)arg1;
- (void)syncByNotify:(unsigned int)arg1 Scene:(unsigned int)arg2;

@end

