//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol BaseScanLogicDelegate <NSObject>

@optional
- (void)didShowScanResult;
- (float)getBottomBarHeight;
- (struct CGRect)getContentRect;
- (UIViewController *)getMainViewController;
- (double)getZoomFactor;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onPlaySound;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)onScanCodeFinish;
- (void)onScanEnds;
- (void)onSetCameraZoomFactor:(double)arg1;
- (void)onShowAlertWording;
- (void)onStartLoading;
- (void)onStartScanAnimation;
- (void)onStopLoading;
- (void)onStopScanAnimation;
- (void)onUpdateWording;
@end

