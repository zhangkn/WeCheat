//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindow.h"

@class UIImageView;
@protocol MultiTalkMainWindowDelegate;

@interface MultiTalkMainWindow : MMWindow
{
    _Bool _m_hasStartQuitAnimation;
    id <MultiTalkMainWindowDelegate> m_mainWindowDelegate;
    UIImageView *m_blurView;
}

- (void).cxx_destruct;
- (void)collapseWithAnimation;
- (void)collapseWithAnimationDidStop;
- (void)dealloc;
- (void)extendFromCollapseWithAnimation;
- (void)extendWithAnimation;
- (_Bool)hasStartQuitAnimation;
- (id)init;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(nonatomic) _Bool m_hasStartQuitAnimation; // @synthesize m_hasStartQuitAnimation=_m_hasStartQuitAnimation;
@property(nonatomic) __weak id <MultiTalkMainWindowDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate;
- (void)quitWithAnimation;
- (void)quitWithAnimationDidStop;

@end

