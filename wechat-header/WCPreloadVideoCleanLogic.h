//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCPreloadVideoInfo;

@interface WCPreloadVideoCleanLogic : NSObject
{
    WCPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (void).cxx_destruct;
- (void)addPreloadRecord:(id)arg1;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (id)getPreloadRecordKey:(id)arg1;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (id)getPreloadVideoInfoPath;
- (id)init;
- (_Bool)isAddedTaskOverDailyLimit;
- (void)loadPreloadRecord;
- (void)reloadPreloadRecord;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)removePreloadRecordByLRU;
- (void)removePreloadTempFile:(id)arg1;
- (void)savePreloadInfo;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;

@end

