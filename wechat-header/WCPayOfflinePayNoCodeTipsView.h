//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, UIButton, UIImageView;
@protocol WCPayOfflinePayNoCodeTipsViewDelegate;

@interface WCPayOfflinePayNoCodeTipsView : MMUIView
{
    id <WCPayOfflinePayNoCodeTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    UIButton *_refreshBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOfflinePayNoCodeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableRefreshBtn;
- (void)enableRefreshBtn;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (id)initNoCodeTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 tipsWording:(id)arg3;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
- (void)refreshBtnPress:(id)arg1;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setupContentView:(id)arg1;

@end

