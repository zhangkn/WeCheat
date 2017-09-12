//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSLock, NSMutableSet, NSString;

@interface ClientCheckMgr : MMObject <IMsgExt, MMKernelExt, PBMessageObserverDelegate>
{
    NSLock *_lock;
    NSMutableSet *_setImageList;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)addImage:(const char *)arg1;
- (id)arrToString:(id)arg1;
- (void)checkConsistency:(id)arg1;
- (void)checkHook:(id)arg1;
- (void)checkHookWithSeq:(unsigned int)arg1;
- (void)dealloc;
- (id)expandFilePath:(id)arg1;
- (id)getImageList;
- (id)init;
- (void)onAuthOK;
- (void)registerAddImageCallBack;
- (void)reportAppList:(id)arg1;
- (void)reportFileConsistency:(id)arg1 fileName:(id)arg2 offset:(unsigned int)arg3 bufferSize:(unsigned int)arg4 seq:(unsigned int)arg5;
- (id)runningProcesses;
- (void)test;
- (void)test1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

