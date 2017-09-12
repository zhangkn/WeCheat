//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WAAppItemManagerExtension-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;
@protocol WAMainListStarLogicDelegate;

@interface WAMainListStarLogic : MMObject <WAAppItemManagerExtension>
{
    _Bool _isEnableStarLogic;
    NSMutableArray *_starItems;
    id <WAMainListStarLogicDelegate> _delegate;
    NSMutableSet *_starSet;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WAMainListStarLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteStarItem:(id)arg1;
- (void)fetchLocalStarData;
- (unsigned int)getStarNumberLimitation;
- (_Bool)hasStarData;
- (id)init;
@property(nonatomic) _Bool isEnableStarLogic; // @synthesize isEnableStarLogic=_isEnableStarLogic;
- (_Bool)isItemStared:(id)arg1;
- (_Bool)isItemStaredInLocal:(id)arg1;
- (_Bool)isReachStarCountLimit;
- (void)onWeAppItemStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemUnStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppStaredItemsInfoUpdated:(id)arg1 scene:(unsigned int)arg2;
- (void)registerExtensions;
- (_Bool)removeStarItem:(id)arg1;
@property(retain, nonatomic) NSMutableArray *starItems; // @synthesize starItems=_starItems;
@property(retain, nonatomic) NSMutableSet *starSet; // @synthesize starSet=_starSet;
- (id)sortStarItems:(id)arg1;
- (id)starItem:(id)arg1;
- (void)unregisterExtensions;
- (_Bool)unstarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

