//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMDBRRepairer : NSObject
{
    unsigned int m_tableNum;
    unsigned int m_startTime;
    unsigned int m_timeLength;
    unsigned long long m_dbSizeBefore;
    unsigned long long m_dbSizeAfter;
    unsigned long long m_diskRestSpaceBefore;
}

+ (_Bool)IsDiskSpaceLowWithAssist:(id)arg1 andGetRestSize:(unsigned long long *)arg2 suggustSize:(unsigned long long *)arg3;
+ (unsigned long long)diskRestSpace;
+ (void)recordDBPath:(id)arg1 size:(unsigned long long *)arg2;
+ (id)stringWithDate;
- (_Bool)RepairDatabase:(id)arg1 getError:(id *)arg2;
- (void)backupBeforeRepair:(id)arg1 withAssist:(id)arg2;
- (_Bool)backupOldDBPath:(id)arg1 toDir:(id)arg2 andRenewWithNewDBPath:(id)arg3 assist:(id)arg4 error:(id *)arg5;
- (void)createDir:(id)arg1;
- (void)createFile:(id)arg1;
- (void)dealloc;
- (id)errorWithCode:(unsigned long long)arg1 Description:(id)arg2;
- (_Bool)exportDBWithPath:(id)arg1 toSQLFile:(id)arg2 error:(id *)arg3;
- (id)generateBackupDBDir:(id)arg1;
- (_Bool)importDBPath:(id)arg1 fromSQLFile:(id)arg2 error:(id *)arg3;
- (id)init;
@property(nonatomic) unsigned long long m_dbSizeAfter; // @synthesize m_dbSizeAfter;
@property(nonatomic) unsigned long long m_dbSizeBefore; // @synthesize m_dbSizeBefore;
@property(nonatomic) unsigned long long m_diskRestSpaceBefore; // @synthesize m_diskRestSpaceBefore;
@property(nonatomic) unsigned int m_startTime; // @synthesize m_startTime;
@property(nonatomic) unsigned int m_tableNum; // @synthesize m_tableNum;
@property(nonatomic) unsigned int m_timeLength; // @synthesize m_timeLength;
- (void)markEndTime;
- (void)markStartTime;
- (void)removeFile:(id)arg1;
- (_Bool)repairDBWithPath:(id)arg1 exportSQLPath:(id)arg2 exportDBPath:(id)arg3 backupDBDir:(id)arg4 assist:(id)arg5 error:(id *)arg6;
- (void)resetData;

@end

