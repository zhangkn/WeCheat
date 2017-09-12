//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MMSightRecordView : UIView
{
    long long _state;
    UIView *_outerDotBg;
    UIView *_outerDotBlurBg;
    UIView *_outerDot;
    UIView *_innerDot;
}

- (void).cxx_destruct;
- (id)frameAnimationFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *innerDot; // @synthesize innerDot=_innerDot;
@property(retain, nonatomic) UIView *outerDot; // @synthesize outerDot=_outerDot;
@property(retain, nonatomic) UIView *outerDotBg; // @synthesize outerDotBg=_outerDotBg;
@property(retain, nonatomic) UIView *outerDotBlurBg; // @synthesize outerDotBlurBg=_outerDotBlurBg;
- (id)radiusAnimationFrom:(double)arg1 to:(double)arg2;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)setupSubViews;
- (void)stateTransitionAnimation;

@end

