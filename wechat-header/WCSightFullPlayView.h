//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SightViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class NSString, SightView, UIActivityIndicatorView, UIButton, WCMediaItem;
@protocol WCSightFullPlayViewDelegate;

@interface WCSightFullPlayView : UIView <UIActionSheetDelegate, WCFacadeExt, SightViewDelegate>
{
    _Bool m_bIsLongPressHandled;
    _Bool m_isSightVisible;
    _Bool m_bIsMute;
    _Bool m_bIsAdAttachSight;
    UIView *m_fullScreenContent;
    SightView *_sightView;
    _Bool m_bHasStartedDownLoadingVideo;
    _Bool m_bCachedRealDownloadProgress;
    unsigned long long m_videoRestPlayTime;
    UIButton *m_playAttachVideoButton;
    _Bool m_isImageReady;
    _Bool m_isSightReady;
    unsigned long long index;
    UIActivityIndicatorView *mActivityIndicator;
    WCMediaItem *m_mediaData;
    id <WCSightFullPlayViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)UnRegister;
- (void)cacheFakeProgressValue;
- (void)clearPlay;
- (void)clearSight;
- (void)dealloc;
- (void)displaySightwithMediaItem:(id)arg1;
- (void)downloadImage;
- (void)downloadSight;
- (void)fullPlay;
- (id)getImage;
- (id)getProcessCacheKey;
- (id)getShowTime:(unsigned long long)arg1;
- (int)getSightDownloadType;
- (id)getSightPath;
- (unsigned long long)getVideoTotalTime;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (id)initWithMediaData:(id)arg1;
- (id)initWithMediaData:(id)arg1 isMute:(_Bool)arg2;
- (_Bool)isSightVideoExist;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) _Bool m_bIsMute; // @synthesize m_bIsMute;
@property(nonatomic) __weak id <WCSightFullPlayViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(readonly, nonatomic) _Bool m_isSightReady; // @synthesize m_isSightReady;
@property(nonatomic) _Bool m_isSightVisible; // @synthesize m_isSightVisible;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
- (void)makeFakeProgress;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickSightView:(id)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onLongPressSightView:(id)arg1;
- (void)onOrientationChanged;
- (void)pausePlay;
- (void)playSight;
- (struct CGRect)playerRectWithScreenOrientation:(_Bool)arg1;
- (void)register;
- (void)reloadSight;
- (void)reloadSightPreviewImage;
- (void)resumePlay;
- (void)rotateToOrientation:(_Bool)arg1;
- (void)setContentViewTop:(double)arg1;
- (void)setDataAndView:(id)arg1;
- (void)setPlayAttachVideoButtonFrame;
- (_Bool)shouldAutoDownloadSight;
- (_Bool)shouldShowDetailBtn;
- (void)showDetailButton;
- (void)showDownloadTooSlow;
- (void)showPlayAllVideoButton;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (void)silentPlay;
- (void)stopSight;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

