//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FavSightViewDelegate-Protocol.h"

@class FavSightView, MMUILabel, NSString, SightIconView, SimpleImgInfo, UIImageView;
@protocol FavSightViewDelegate;

@interface MMFullScreenItemView : UIView <FavSightViewDelegate>
{
    SightIconView *m_sightIconView;
    MMUILabel *m_hintLabel;
    _Bool m_isItemShowing;
    FavSightView *sightView;
    UIImageView *imageView;
    _Bool _isReady;
    SimpleImgInfo *_imgInfo;
    id <FavSightViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)FavDataExpiredViewResize;
- (void)HideDataExpiredView;
@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
- (void)initContentView:(id)arg1;
- (_Bool)isItemShowing;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void)onClick;
- (void)onExitFullScreen;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onHide;
- (void)onShow;
- (void)releaseContentView;
- (void)restartDownload;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSightDownFail;
- (void)setSightDownFinsh;
- (void)setSightFinishedLength:(int)arg1 TotalLength:(int)arg2;
- (void)setVideoAutoPlayAfterDownload:(_Bool)arg1;
- (void)showFavDataExpiredView;
- (void)updateImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

