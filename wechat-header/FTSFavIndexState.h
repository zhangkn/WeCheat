//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableSet, NSString;

@interface FTSFavIndexState : NSObject <PBCoding>
{
    unsigned int curLocalId;
    NSMutableSet *arrUpdateLocalId;
    NSMutableSet *arrDeleteLocalId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *arrDeleteLocalId; // @synthesize arrDeleteLocalId;
@property(retain, nonatomic) NSMutableSet *arrUpdateLocalId; // @synthesize arrUpdateLocalId;
@property(nonatomic) unsigned int curLocalId; // @synthesize curLocalId;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

