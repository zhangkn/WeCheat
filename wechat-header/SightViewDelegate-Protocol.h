//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SightView;

@protocol SightViewDelegate <NSObject>

@optional
- (void)onChangeDownloadMode:(unsigned long long)arg1;
- (void)onClickIconViewOfSightView:(SightView *)arg1;
- (void)onResumeSightView:(SightView *)arg1;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onSightProgressBarHidden;
- (void)onSightViewPlayItemCleared:(SightView *)arg1;
- (void)onStackSightView:(SightView *)arg1;
- (void)onStartToPlayVideo;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (_Bool)sightView:(SightView *)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(SightView *)arg1;
@end

