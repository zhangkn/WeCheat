//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCFacadeExt-Protocol.h"

@class NSMutableDictionary, NSString, WCMediaItem;
@protocol WCBGImgLogicNotity;

@interface WCBGImgLogic : MMObject <WCFacadeExt>
{
    id <WCBGImgLogicNotity> m_delFacade;
    WCMediaItem *m_lastUploadItem;
    NSMutableDictionary *m_bgUserInfoMap;
    NSString *m_lastDownloadMediaID;
}

- (void).cxx_destruct;
- (void)SetBGImgByImg:(id)arg1;
- (void)SetBGImgByMedia:(id)arg1;
- (id)backgroundImageByContact:(id)arg1;
- (id)bgUserInfoMap;
- (void)dealloc;
- (_Bool)hasBGImg:(id)arg1;
- (id)hashForImageUrl:(id)arg1;
- (id)init;
- (_Bool)isBGImgLikedForUser:(id)arg1;
@property(nonatomic) __weak id <WCBGImgLogicNotity> m_delFacade; // @synthesize m_delFacade;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)saveSelfWCBackground:(id)arg1;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (_Bool)setLocalBGImgForUser:(id)arg1 BGUserInfo:(id)arg2;
- (id)tryLoadSelfWCBackground;
- (void)trySaveSelfWCBackground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

