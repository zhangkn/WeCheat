//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WAAppTaskDB : NSObject
{
    NSString *_appID;
    WCTDatabase *_db;
    WCTTable *_tableLocalStorageMainInfo;
    WCTTable *_tableLocalStorageDataInfo;
}

- (void).cxx_destruct;
- (void)clearLocalStorage;
- (void)close;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)dealloc;
- (id)getLocalStorageAllKeys;
- (void)getLocalStorageData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)arg1;
- (unsigned long long)getLocalStorageMainStorageLength;
- (id)initWithAppID:(id)arg1;
- (void)open;
- (void)openTable;
- (_Bool)removeLocalStorageDataWithKey:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)setLocalStorageData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 lastModifyTime:(unsigned int)arg4;
- (_Bool)setLocalStorageMainStorageLength:(unsigned long long)arg1 lastModifyTime:(unsigned int)arg2;
@property(retain) WCTTable *tableLocalStorageDataInfo; // @synthesize tableLocalStorageDataInfo=_tableLocalStorageDataInfo;
@property(retain) WCTTable *tableLocalStorageMainInfo; // @synthesize tableLocalStorageMainInfo=_tableLocalStorageMainInfo;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;

@end

