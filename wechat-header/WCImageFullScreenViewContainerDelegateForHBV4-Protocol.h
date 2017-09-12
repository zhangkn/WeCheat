//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, UIViewController, WCDataItem, WCMediaItem;

@protocol WCImageFullScreenViewContainerDelegateForHBV4 <NSObject>
- (void)animationHideWithRotate;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onExposeWithDataItem:(WCDataItem *)arg1;
- (MMUIViewController *)onGetViewController;
- (void)onGreetingTipBtnClicked;
- (void)onLongPressedWithMediaItem:(WCMediaItem *)arg1;
- (void)onPushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@end

