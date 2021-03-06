//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSnsDelayShowInfo : MMObject <PBCoding>
{
    _Bool needDelayInViewLifeCycle;
    unsigned int respTimeStamp;
    unsigned int delayInterval;
    unsigned int showTimeStamp;
    NSString *layerId;
    NSString *expId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int delayInterval; // @synthesize delayInterval;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
@property(nonatomic) _Bool needDelayInViewLifeCycle; // @synthesize needDelayInViewLifeCycle;
- (_Bool)parseDelayShowInfo:(id)arg1;
@property(nonatomic) unsigned int respTimeStamp; // @synthesize respTimeStamp;
@property(nonatomic) unsigned int showTimeStamp; // @synthesize showTimeStamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

