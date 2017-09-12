//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALoadingViewController.h"

@class DotLoadingView, MMTimer, MMUILabel, MMWebImageView, NSString, UIView;

@interface WANavLoadingViewController : WALoadingViewController
{
    unsigned long long _initTime;
    unsigned long long _appearTime;
    UIView *m_fakeNavBar;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    DotLoadingView *m_loadingView;
    MMWebImageView *m_backImageView;
    NSString *m_weappColorStr;
    int m_weappNavMode;
    NSString *m_weappBackgroundColorStr;
    MMTimer *m_waitTipsTimer;
    MMUILabel *m_tipsLabel;
}

- (void).cxx_destruct;
- (void)configUI;
- (void)dealloc;
- (void)initContactTitle;
- (void)initImageView;
- (void)initLoadingView;
- (void)initLogoView;
- (void)initTipslabel;
- (void)initView;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;
- (void)onReturn;
- (void)reportLoadingStayTime;
- (void)setThumbImage:(id)arg1;
- (void)setupNavMode;
- (void)showDownloadingProgressView;
- (void)showTipsLabel;
- (void)startEnterAppAnimation;
- (void)updateContactTitleWithNavMode:(int)arg1;
- (void)updateViewBaseOnWeAppViewConfig;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

