//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface EnterpriseSessionControllerMenuView : UIButton <CAAnimationDelegate>
{
    UIImageView *m_viewBg;
    UIView *m_viewContent;
}

- (void).cxx_destruct;
- (void)addItemWithTitle:(id)arg1 imageName:(id)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)addLine;
- (void)animateHideAction;
- (void)animateShowInView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)onHideAction;
- (void)updateSubviewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

