//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface ShakeTvHistoryItem : MMObject <PBCoding>
{
    unsigned int createTime;
    NSString *iconUrl;
    NSString *title;
    NSString *desc;
    NSString *brandUserName;
    NSString *deeplinkJumpUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandUserName; // @synthesize brandUserName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *deeplinkJumpUrl; // @synthesize deeplinkJumpUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

