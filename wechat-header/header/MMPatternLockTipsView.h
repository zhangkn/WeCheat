//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMPatternLockTipsView : UIView
{
    long long _curScene;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
- (void)animationShake;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
- (void)dealloc;
- (id)initTipsViewWithFrame:(struct CGRect)arg1 andPatternScene:(long long)arg2;
- (void)initView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setupFirstTips;
- (void)updateContentInBlock;
- (void)updateContentInComfirm;
- (void)updateContentInComfirmError;
- (void)updateContentInPwdErrorWithRetryTime:(long long)arg1 animated:(_Bool)arg2;
- (void)updateContentInResultInvalid;
- (void)updateContentInSetup;

@end
