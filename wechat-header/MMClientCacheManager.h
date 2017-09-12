//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMClientCacheManager : MMService <IMsgExt, MMService, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (void)doDReport;
- (void)doSSReport:(unsigned long long)arg1;
- (id)getDataByScene:(unsigned int)arg1;
- (id)getDataWithLogin;
- (id)getDataWithoutLogin;
- (id)init;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)reportExtInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

