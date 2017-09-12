//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "MMVideoPlayerViewDelegate-Protocol.h"

@class NSString, UISlider;

@interface WAWebViewPlugin_VideoPlayer : WAWebViewPlugin_embedView <MMVideoPlayerViewDelegate>
{
    _Bool _didAppear;
    Class VideoClass;
    struct CGPoint _contentOffset;
    struct CGRect _webViewFrame;
    struct CGRect _mainViewFrame;
    _Bool _statusBarBlack;
    _Bool _interuptExternalMusic;
    long long _videoNum;
    UISlider *_volumeViewSlider;
}

- (void).cxx_destruct;
- (void)appWillResignActive:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)dealloc;
- (void)disableFullScreen;
- (void)enableFullScreen:(_Bool)arg1 landscape:(_Bool)arg2 video:(id)arg3;
- (void)enableWebViewScroll:(_Bool)arg1;
- (id)getCurrentSnapshot;
- (id)getVideoPlayer:(unsigned int)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
- (id)insertVideo:(id)arg1 pos:(struct CGRect)arg2 videoId:(unsigned int)arg3 parentId:(unsigned int)arg4;
- (_Bool)isForground;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)onVideoStateChange:(long long)arg1;
- (void)onVolumeChange:(double)arg1;
- (void)onWeAppEnterBackground:(id)arg1;
- (void)onWeAppEnterForeground;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (void)pauseAllVideos:(_Bool)arg1;
- (void)pauseVideoTemp:(_Bool)arg1;
- (_Bool)removeChildView:(unsigned int)arg1;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

