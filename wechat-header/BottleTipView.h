//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol BottleTipViewDelegate><NSObject;

@interface BottleTipView : UIView
{
    UIImageView *mBackGroundView;
    UIImageView *mTipIconView;
    UILabel *mTipTextLabel;
    UILabel *mTitleTextLabel;
    UIView *mTitleLine;
    UIButton *mTipButton1;
    UIButton *mTipButton2;
    id <BottleTipViewDelegate><NSObject> delegate;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <BottleTipViewDelegate><NSObject> delegate; // @synthesize delegate;
- (void)fadeShow;
- (void)hideShow;
- (id)init;
- (void)initView;
- (void)readfade;
- (void)reset;
- (void)setBackImage:(id)arg1;
- (void)setLeftTipButtonTitle:(id)arg1 andRightTipButtonTitle:(id)arg2;
- (void)setTipButtonTitle:(id)arg1;
- (void)setTipIcon:(id)arg1;
- (void)setTipText:(id)arg1;
- (void)setTipTextColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)show;
- (void)toggleButton1:(id)arg1;
- (void)toggleButton2:(id)arg1;
- (void)updateView;

@end

