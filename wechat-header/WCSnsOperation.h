//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WCSnsDelayShowInfo, WCSnsPreLoadInfo, WCSnsRepeatUrlInfo, WCSnsSocialInfluenceInfo;

@interface WCSnsOperation : MMObject <PBCoding>
{
    WCSnsSocialInfluenceInfo *socialInfluenceInfo;
    WCSnsPreLoadInfo *preloadInfo;
    WCSnsDelayShowInfo *delayShowInfo;
    WCSnsRepeatUrlInfo *repeatUrlInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsDelayShowInfo *delayShowInfo; // @synthesize delayShowInfo;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) WCSnsPreLoadInfo *preloadInfo; // @synthesize preloadInfo;
@property(retain, nonatomic) WCSnsRepeatUrlInfo *repeatUrlInfo; // @synthesize repeatUrlInfo;
@property(retain, nonatomic) WCSnsSocialInfluenceInfo *socialInfluenceInfo; // @synthesize socialInfluenceInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

