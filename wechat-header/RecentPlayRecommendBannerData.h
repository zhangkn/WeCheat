//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString, RecentPlayBannerB;

@interface RecentPlayRecommendBannerData : MMObject <PBCoding>
{
    NSString *bannerABigPicUrl;
    NSString *bannerAJumpUrl;
    RecentPlayBannerB *bannerB;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bannerABigPicUrl; // @synthesize bannerABigPicUrl;
@property(retain, nonatomic) NSString *bannerAJumpUrl; // @synthesize bannerAJumpUrl;
@property(retain, nonatomic) RecentPlayBannerB *bannerB; // @synthesize bannerB;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)parse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

