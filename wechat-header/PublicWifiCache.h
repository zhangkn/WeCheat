//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMutableDictionary, PublicWifiDB;

@interface PublicWifiCache : MMObject
{
    NSMutableDictionary *_notRegisterDict;
    PublicWifiDB *_db;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)closeDB;
- (id)convertAPBase:(id)arg1;
@property(retain, nonatomic) PublicWifiDB *db; // @synthesize db=_db;
- (void)dealloc;
- (id)getAPCheckConfig;
- (id)init;
- (void)initDB;
- (_Bool)isApCheckNotRegisterIn12hSinceLastTryWithMac:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *notRegisterDict; // @synthesize notRegisterDict=_notRegisterDict;
- (_Bool)removeApBase:(id)arg1;
- (id)retrivalApAuthForSsid:(id)arg1;
- (id)retrivalApBaseForMac:(id)arg1;
- (void)saveAPCheckConfig:(id)arg1;
- (_Bool)saveApBase:(id)arg1;
- (void)saveApcheckNotRegisterTime:(double)arg1 mac:(id)arg2;
- (_Bool)shouldUserConfirm;
- (void)userConfirm;

@end

