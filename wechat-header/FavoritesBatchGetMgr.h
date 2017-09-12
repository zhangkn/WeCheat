//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "INetworkStatusMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesItemDB, NSMutableArray;
@protocol FavoritesBatchGetMgrDelegate;

@interface FavoritesBatchGetMgr : MMObject <PBMessageObserverDelegate, INetworkStatusMgrExt>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchGetArray;
    id <FavoritesBatchGetMgrDelegate> _delegate;
    _Bool _isGetting;
    unsigned int _autoBatchGetCount;
    _Bool _hasStartBatchGet;
}

- (void).cxx_destruct;
- (void)HandleBatchGetFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)TryStartBatchGet;
- (void)addBatchGetFavoritesItemList:(id)arg1;
- (void)asyncDoAddNewItemList:(id)arg1;
- (_Bool)checkConflict:(id)arg1 vs:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <FavoritesBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)initDB:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (_Bool)shouldBetchGetAll;

@end

