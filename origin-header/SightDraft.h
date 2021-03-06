//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString, VideoUploadStatInfo;

@interface SightDraft : MMObject <PBCoding>
{
    int draftID;
    int date;
    int _sourceForSNSUploadStat;
    NSMutableArray *itemAry;
    VideoUploadStatInfo *_uploadStatInfo;
}

+ (id)draftWithVideoURL:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addItem:(id)arg1;
@property(nonatomic) int date; // @synthesize date;
- (void)dealloc;
@property(nonatomic) int draftID; // @synthesize draftID;
- (id)getItem:(int)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSMutableArray *itemAry; // @synthesize itemAry;
- (void)saveToPhotoLibrary;
- (void)saveToPhotoLibraryWithTips:(_Bool)arg1;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(retain, nonatomic) VideoUploadStatInfo *uploadStatInfo; // @synthesize uploadStatInfo=_uploadStatInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

