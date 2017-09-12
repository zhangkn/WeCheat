//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMDBRRepairerExt-Protocol.h"
#import "MMDBRestore-Protocol.h"

@class MMSessionSetting, NSCache, NSMutableDictionary, NSString, WCTDatabase, WCTTable;

@interface MMSessionDB : NSObject <MMDBRRepairerExt, MMDBRestore>
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    NSCache *m_preLoadSessionCache;
    WCTTable *m_tableSessionDeleteInfo;
}

- (void).cxx_destruct;
- (void)ASyncFulFillSession:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)AddSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (_Bool)DeleteOutOfDateSessionDeleteInfo;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (void)FulFillSession:(id)arg1;
- (void)FulFillSessions:(id)arg1;
- (id)GetAllSession;
- (id)GetAllSession:(_Bool *)arg1;
- (id)GetSessionDeleteInfo:(id)arg1;
- (unsigned int)GetSessionFailCount;
- (long long)GetSessionImportTime;
- (unsigned int)GetSessionVersion;
- (void)ImportSessions:(id)arg1;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (void)SetSessionImported;
- (void)SetSessionVersion:(unsigned int)arg1;
- (void)UpdateSessionFilePath:(id)arg1;
- (_Bool)dbAddOrModifySession:(id)arg1;
- (_Bool)dbAddOrModifySessions:(id)arg1;
- (_Bool)dbDeleteSession:(id)arg1;
- (_Bool)dbDeleteSessions:(id)arg1;
- (void)dbImportSessions:(id)arg1;
- (void)dbUpdateSessionFilePath:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initDB;
- (void)onRenewMMDB;
- (void)saveSessionSetting;
- (void)tryLoadSessionSetting;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

