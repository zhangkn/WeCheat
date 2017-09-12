//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioPlayer, NSError;

@protocol AVAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayerBeginInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer *)arg1 error:(NSError *)arg2;
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withOptions:(unsigned long long)arg2;
@end

