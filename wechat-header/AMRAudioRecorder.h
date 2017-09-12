//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

@class NSRecursiveLock;

@interface AMRAudioRecorder : BaseAudioRecorder
{
    NSRecursiveLock *mPrepareSentLock;
    _Bool mIsPrepareSent;
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
}

- (void).cxx_destruct;
- (void)MainThreadStopRecord;
- (void)createAMRFile:(id)arg1;
- (id)init;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)prepareBuffers;
- (_Bool)prepareRecord;
- (_Bool)prepareRecordButNotNotify;
- (_Bool)prepareSend;
- (void)record;
- (void)setDataFormat;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)stopButNotNotify;

@end

