//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IAudioPlayerDelegate <NSObject>

@optional
- (void)onAudioEnd;
- (void)onAudioPause;
- (void)onAudioPlay;
- (void)onAudioUpdate:(CDStruct_1b6d18a9)arg1 total:(CDStruct_1b6d18a9)arg2;
@end

