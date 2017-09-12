//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class CMMotionManager, NSString;
@protocol NSObject><ActionRecognitionDelegate;

@interface ActionRecognition : NSObject <UIAccelerometerDelegate>
{
    CMMotionManager *mMotionMgr;
    float mGFactor;
    _Bool mIsCloseToEarRecognEnabled;
    _Bool mStartProximityState;
    _Bool mIsCloseToEar;
    _Bool mIsShakeRecognEnabled;
    id <NSObject><ActionRecognitionDelegate> delegate;
}

- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (void)closeToEarRecognByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <NSObject><ActionRecognitionDelegate> delegate; // @synthesize delegate;
- (void)disableProximity;
- (void)enableProximity;
- (id)init;
- (_Bool)isCloseToEarRecogning;
- (_Bool)isShakeRecogning;
- (void)proximityChange:(id)arg1;
- (void)registerNotify;
- (void)startCloseToEarRecogn;
- (void)startShakeRecognByFactor:(float)arg1;
- (void)stopCloseToEarRecogn;
- (void)stopShakeRecogn;
- (void)unregisterNotify;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

