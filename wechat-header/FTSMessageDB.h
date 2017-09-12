//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSDB, NSMutableDictionary, NSRecursiveLock;

@interface FTSMessageDB : NSObject
{
    FTSDB *_database;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dicValidUserName;
    NSMutableDictionary *_dicValidUserNameId;
    NSMutableDictionary *_dicInvalidUserNameId;
}

- (void).cxx_destruct;
- (_Bool)createAllTable;
@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void)dealloc;
- (_Bool)deleteInvalidRowsInChatTable:(unsigned int)arg1;
- (_Bool)deleteRowInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)deleteRowInUserNameIDTable:(unsigned int)arg1;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (_Bool)hasInvalidRowsInChatTable;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastMsg:(id)arg2;
- (_Bool)insertRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)insertRowsInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (id)queryText:(id)arg1;
- (id)queryText:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (void)reloadDB;
- (void)tryCacheUserNameIdTable;
- (id)tryGetValidIndexItemByUserName:(id)arg1;
- (id)tryGetValidIndexItemByUserNameId:(unsigned int)arg1;
- (_Bool)updateInvalidUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNameInvalid:(id)arg1;
- (_Bool)updateUserNextCursorMesId:(id)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserPreCursorMesId:(id)arg1 cursorMesId:(unsigned int)arg2;

@end

