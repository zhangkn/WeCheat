//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IFavAudioPlayerExt-Protocol.h"

@class FavAudioInfo, NSString, UIButton, UILabel, UISlider;
@protocol WNNoteVoicePlayViewDelegate;

@interface WNNoteVoicePlayView : UIView <IFavAudioPlayerExt>
{
    UIView *m_containerView;
    UIButton *m_playBtn;
    UILabel *m_timeLabel;
    UILabel *m_totalTimeLabel;
    UISlider *m_slider;
    _Bool m_dragSliderWhenPlaying;
    FavAudioInfo *_audioInfo;
    id <WNNoteVoicePlayViewDelegate> _playDelegate;
}

- (void).cxx_destruct;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnPlayError:(id)arg1;
@property(retain, nonatomic) FavAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
- (void)dealloc;
- (void)doChangeProgress;
- (void)endChangeProgress;
- (id)getTimeText:(unsigned int)arg1;
- (void)initView;
- (id)initWithFavAudioInfo:(id)arg1;
- (_Bool)isCurrentControllForPlayer;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)playBtnClicked;
@property(nonatomic) __weak id <WNNoteVoicePlayViewDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
- (void)quit;
- (void)stop;
- (void)updateProgress:(unsigned int)arg1 Animated:(_Bool)arg2;
- (void)updateStatusPlaying:(_Bool)arg1;
- (void)willChangeProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

