//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCCardMsgTips : MMObject <PBCoding>
{
    unsigned int newCount;
    unsigned int lastUpdateTime;
    NSString *nsTipWording;
    NSString *nsTipIconUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
- (void)loadCardMsgTipsFromCache;
@property(nonatomic) unsigned int newCount; // @synthesize newCount;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording;
- (id)pathForCardMsgTips;
- (void)saveCardMsgTipsToCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

