//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCBaseControlLogicDeleagte-Protocol.h"

@class NSMutableArray, NSString;
@protocol MMUIViewControllerDelegate, WCBaseControlLogicDeleagte;

@interface WCBaseControlLogic : MMObject <WCBaseControlLogicDeleagte>
{
    NSMutableArray *m_arrVC;
    unsigned int m_uiLogicStatus;
    unsigned int m_tag;
    unsigned long long m_uiStartedTime;
    id <MMUIViewControllerDelegate> m_vcRootDelegate;
    id <WCBaseControlLogicDeleagte> m_logicDelegate;
}

- (void).cxx_destruct;
- (void)addTopViewController:(id)arg1;
- (void)cancel;
- (void)checkStopLogic;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(_Bool)arg1;
- (void)dismissCurrentViewWithAnimated:(_Bool)arg1;
- (id)getCurrentViewController;
- (void)gotoRootViewControllerAndStopLogicWithAnimated:(_Bool)arg1;
- (void)gotoRootViewControllerWithAnimated:(_Bool)arg1;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Animation:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 Animation:(_Bool)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 showNavigation:(_Bool)arg4 Animation:(_Bool)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 showNavigation:(_Bool)arg4 Animation:(_Bool)arg5 transitioningDelegate:(id)arg6;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(_Bool)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(_Bool)arg5 Animation:(_Bool)arg6;
- (id)gotoViewControllerHideNavigation:(Class)arg1 withData:(id)arg2 Animation:(_Bool)arg3;
- (id)init;
- (_Bool)isLogicCancel;
- (_Bool)isLogicCompleteOK;
@property(readonly, nonatomic) __weak id <WCBaseControlLogicDeleagte> m_logicDelegate; // @synthesize m_logicDelegate;
@property(nonatomic) unsigned int m_tag; // @synthesize m_tag;
@property(readonly, nonatomic) unsigned long long m_uiStartedTime; // @synthesize m_uiStartedTime;
@property(readonly, nonatomic) __weak id <MMUIViewControllerDelegate> m_vcRootDelegate; // @synthesize m_vcRootDelegate;
- (_Bool)onError:(id)arg1;
- (void)pause;
- (void)presentViewController:(id)arg1 Animated:(_Bool)arg2 showNavigation:(_Bool)arg3;
- (void)presentViewController:(id)arg1 Animated:(_Bool)arg2 showNavigation:(_Bool)arg3 transitioningDelegate:(id)arg4;
- (void)pushViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 Animated:(_Bool)arg2 transitioningDelegate:(id)arg3;
- (void)removeTopViewController;
- (void)resume;
- (void)setRootViewControllerDelegate:(id)arg1;
- (void)setlogicDelegate:(id)arg1;
- (void)showLoadingOK:(id)arg1;
- (void)startLoading;
- (void)startLoadingWithTip:(id)arg1;
- (void)startLogic;
- (void)stopLoading;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

