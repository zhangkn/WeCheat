//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MotionDetectorDelegate-Protocol.h"

@class MotionDetector, NSString;

@interface UploadDetectLogic : MMObject <MotionDetectorDelegate>
{
    int _retryTimes;
    struct CGSize _qmpSize;
    int _motionState;
    _Bool _isForOcr;
    MotionDetector *_motionDetector;
    int _uploadTimes;
    _Bool _canUpload;
    struct timeval _lastProcessTime;
}

- (void).cxx_destruct;
- (_Bool)canUpload;
- (void)cancelUpload;
- (void)dealloc;
- (void)didUpload;
- (void)feedbackCameraFocused;
- (void)feedbackMotionStateChanged:(int)arg1;
- (id)init;
- (id)initWithFocusEngineSize:(struct CGSize)arg1 IsForOcr:(_Bool)arg2;
@property(nonatomic) int motionState; // @synthesize motionState=_motionState;
- (void)process:(char *)arg1;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
- (void)start;
- (void)stop;
- (void)uploadRetry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

