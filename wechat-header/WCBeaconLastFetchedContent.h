//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCBeaconLastFetchedContent : MMObject <PBCoding>
{
    NSString *mpLogo;
    NSString *title;
    NSString *desc;
    NSString *picUrl;
    NSString *jumpUrl;
    NSString *uuid;
    NSString *major;
    NSString *minor;
    double distance;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) double distance; // @synthesize distance;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(copy, nonatomic) NSString *major; // @synthesize major;
@property(copy, nonatomic) NSString *minor; // @synthesize minor;
@property(copy, nonatomic) NSString *mpLogo; // @synthesize mpLogo;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

