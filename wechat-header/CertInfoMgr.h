//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CertInfoMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_dicCertInfo;
    _Bool m_bUpdating;
    unsigned int m_uiUpdateCount;
    NSDate *m_tLastUpdate;
}

+ (id)GetPathOfIcon:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)CheckUpdate;
- (void)CreateUpdateEvent;
- (unsigned int)GetBitSet:(unsigned int)arg1;
- (id)GetCertIconByKey:(unsigned int)arg1;
- (id)GetCertInfoByKey:(unsigned int)arg1 Update:(_Bool)arg2;
- (unsigned int)GetCertInfoVersion;
- (void)LoadCertInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SaveCertInfo;
- (void)SaveIcon:(id)arg1 Data:(id)arg2;
- (void)UpdateCertInfo:(unsigned int)arg1 Version:(unsigned int)arg2 Time:(unsigned int)arg3 Desc:(id)arg4 Icon:(id)arg5 HDIcon:(id)arg6;
- (void)UpdateInfoTime;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *m_dicCertInfo; // @synthesize m_dicCertInfo;
@property(retain, nonatomic) NSDate *m_tLastUpdate; // @synthesize m_tLastUpdate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

