//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class AVCaptureDevice;
@protocol MotionDetectorDelegate;

@interface MotionDetector : MMObject
{
    id <MotionDetectorDelegate> _delegate;
    _Bool _isInit;
    _Bool _isFocusLibInit;
    AVCaptureDevice *_defaultCaptureDevice;
    _Bool _focuseEngineRet[2];
    int _state;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <MotionDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focuseEngineProcess:(char *)arg1;
- (id)getGrayScaleImageData:(id)arg1;
- (id)init;
- (int)initFocuseEngineWithSize:(struct CGSize)arg1 isForOcr:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)releaseFocuseEngine;
- (void)start;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void)stop;

@end

