//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WAVideoPlayerCoreDelegate <NSObject>

@optional
- (_Bool)isForground;
- (void)onCacheUpdate:(double)arg1;
- (void)onCurrentTimeUpdate:(double)arg1;
- (void)onLoadingBegin;
- (void)onLoadingEnd;
- (void)onNetWorkError:(long long)arg1;
- (void)onStateChange:(long long)arg1;
- (void)onTotalTimeUpdate:(double)arg1;
- (void)onVideoPlayEnd;
@end

