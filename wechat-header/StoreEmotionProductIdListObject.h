//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface StoreEmotionProductIdListObject : MMObject <PBCoding>
{
    NSMutableArray *pids;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (id)instance;
- (void).cxx_destruct;
- (void)addFirstPid:(id)arg1;
- (void)dealloc;
- (void)deletePid:(id)arg1;
- (id)getPids;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSMutableArray *pids; // @synthesize pids;
- (void)savePidToFile:(id)arg1;
- (void)savePidsToFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

