//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIImage;
@protocol MMVideoPlayerViewDelegate;

@protocol WAStreamPlayerInterface <NSObject>
@property(nonatomic) _Bool autoPlay;
- (void)disableScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1;
@property(nonatomic) _Bool enablePageGesture;
- (unsigned int)getControlsMask;
- (UIImage *)getCurrentSnapshot;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2;
- (_Bool)isFullScreen;
@property(nonatomic) _Bool loop;
@property(nonatomic) _Bool needUpdateEvent;
@property(nonatomic) unsigned long long orientation;
- (void)pause;
- (long long)pauseCount;
- (void)pausePlayAndLoading;
- (void)pauseTemp:(_Bool)arg1;
- (void)play:(_Bool)arg1;
- (void)seek:(unsigned int)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(UIColor *)arg2;
- (void)setControls:(unsigned int)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)setDuration:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setObjectFit:(long long)arg1;
- (void)setPlayBackRate:(float)arg1;
@property(nonatomic) _Bool showDanmu;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate;
- (void)setVideoFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int videoId;
- (void)setVideoPath:(NSString *)arg1;
- (void)setVideoThumb:(NSString *)arg1;
- (void)stop;
@end

