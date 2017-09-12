//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCImageFullScreenViewControllerDelegateV4-Protocol.h"

@class NSString, WCImageFullScreenViewControllerForHBV4;
@protocol WCImageFullScreenWindowDelegate;

@interface WCImageFullScreenWindowForHBV4 : MMUIWindow <WCImageFullScreenViewControllerDelegateV4>
{
    WCImageFullScreenViewControllerForHBV4 *m_controller;
    id <WCImageFullScreenWindowDelegate> _wc_delegate;
}

- (void).cxx_destruct;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (void)dealloc;
- (id)init;
- (void)onAnimateFadeOut;
- (void)onViewBePopByMsgBar;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationShowWillStart;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) id <WCImageFullScreenWindowDelegate> wc_delegate; // @synthesize wc_delegate=_wc_delegate;
- (void)showErrorTip:(id)arg1;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (void)windowHideToLeft;
- (void)windowNeed2Hide;
- (void)windowNeed2Show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

