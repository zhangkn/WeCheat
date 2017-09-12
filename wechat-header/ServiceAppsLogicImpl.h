//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayWalletChangeExt-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface ServiceAppsLogicImpl : MMObject <WCPayLogicMgrExt, WCPayWalletChangeExt, PBMessageObserverDelegate>
{
    NSArray *_serviceAppsList;
    NSMutableArray *_tempList;
    _Bool _isUpdating;
    _Bool _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned int _lastUpdateTime;
    NSMutableArray *_validJumpUrlList;
}

- (void).cxx_destruct;
- (id)GetPathOfServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)InitValidJumpUrl;
- (_Bool)IsServiceAppDataValid:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)NativeUrlIsValid:(id)arg1;
- (void)OnSetUserWallet:(id)arg1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (void)checkAndUpdateAppIcon;
- (void)dealloc;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (id)getAppInfoDataRootDir;
- (id)getAttachmentViewServiceAppsList:(id)arg1;
- (id)getServiceAppsList:(id)arg1;
- (_Bool)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)arg1;
- (id)init;
- (void)loadData;
- (void)loadServiceAppsListFromFile;
- (_Bool)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)onWCPayWalletChange;
- (void)saveServiceAppsList;
- (void)setServiceAppNotShowNew:(id)arg1;
- (_Bool)updateServiceAppsList;
- (_Bool)updateServiceAppsListWithOffset:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

