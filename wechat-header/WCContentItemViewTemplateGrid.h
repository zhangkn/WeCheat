//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCImageFullScreeViewMgrExt-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"

@class MMAdaptiveLabel, MMImageGridView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, WCMediaItem;

@interface WCContentItemViewTemplateGrid : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCImageViewDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt>
{
    MMAdaptiveLabel *_descriptionView;
    MMImageGridView *_imageGridView;
    UIButton *_moreButton;
    UIButton *_moreImageButton;
    WCMediaItem *m_currentMediaItem;
    NSMutableArray *m_arrMediaItem;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    NSMutableSet *_setScaleOutMediaIndex;
    NSMutableSet *_setScaleInMediaIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)addFavorite;
- (_Bool)canEditImage;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)hideMenu;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)onClickWCCanvasImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWCImage:(id)arg1 needEdit:(_Bool)arg2;
- (void)onCloseCanvasPageView;
- (void)onDownloadFinish:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onEditImage:(id)arg1;
- (void)onExposeFromImage:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationWillHide;
- (void)shareToOpenSDK;
- (void)startEditImage;
- (void)throwUrlMessage;
- (void)tryLogClickBigImage;
- (void)tryLogThumbImageLoadedEffiency:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

