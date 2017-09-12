//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISessionStorageDelegate-Protocol.h"

@class MMBaseSessionStorage, MMEnterpriseMainUsrData, NSMutableDictionary, NSString;

@interface MMEnterpriseSubSessionCacher : NSObject <ISessionStorageDelegate>
{
    MMEnterpriseMainUsrData *_mainUsrData;
    NSString *_mainUsrName;
    NSString *_sessionType;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dictUsrname2CellData;
    _Bool _showRedDot;
}

- (void).cxx_destruct;
- (void)addOrUpdateSessionInfo:(id)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)checkSessionInfo:(id)arg1;
- (void)clearMainUsrRedDot;
- (void)clearMainUsrUnreadCount;
- (void)clearNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)clearSessionCache;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)dealloc;
- (void)deleteAllSessions;
- (void)deleteMainUsrData;
- (void)deleteNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)deleteOldVersionSessionCache;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)deleteSessionWithUsrName:(id)arg1;
- (id)getMainUsrDataPath;
- (_Bool)getMainUsrShowRedDot;
- (unsigned int)getMainUsrUnreadCount;
- (unsigned int)getNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (id)getPathForOldSessionCache;
- (_Bool)hasNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (id)importSessions;
- (id)initWithMainUsrName:(id)arg1;
- (void)loadMainUsrData;
@property(readonly, nonatomic) NSString *mainUsrName; // @synthesize mainUsrName=_mainUsrName;
- (void)performCleanUpNoMsgSessions:(id)arg1;
- (void)saveMainUsrData;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoList;
- (id)sessionInfoWithUsrName:(id)arg1;
- (void)setMainUsrShowRedDot;
- (void)setNewArrivalCount:(unsigned int)arg1 withSubSessionUsrName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

