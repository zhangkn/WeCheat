//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCNewStorageFreeSpaceViewCell.h"

@class NSString, UIButton, UILabel, UIView;

@interface WCNewStorageFreeWechatSpaceViewCell : WCNewStorageFreeSpaceViewCell
{
    NSString *expiredString;
    UILabel *expiredLabel;
    struct CGPoint labelOrigin;
    UILabel *titleLabel;
    UILabel *usedSpaceLabel;
    UILabel *wordingLabel;
    UIButton *actionButton;
    UIView *seperateLine;
    UIView *extraView;
    UIButton *cleanCacheButton;
}

- (void).cxx_destruct;
- (id)actionButton;
@property(retain, nonatomic) UIButton *cleanCacheButton; // @synthesize cleanCacheButton;
- (id)extraView;
- (void)initActionButton;
- (void)initCleanCacheButton;
- (void)initSubViews;
- (void)initTitleLabel;
- (void)initUsedSpaceLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initWordingLabel;
- (void)layoutSubviews;
- (void)onClickCleanCache:(id)arg1;
- (void)onClickExtraView:(id)arg1;
- (void)onClickWeChatUsage:(id)arg1;
- (id)seperateLine;
- (void)setActionButton:(id)arg1;
- (void)setExtraView:(id)arg1;
- (void)setSeperateLine:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUsedSpaceLabel:(id)arg1;
- (void)setWordingLabel:(id)arg1;
- (id)titleLabel;
- (id)usedSpaceLabel;
- (id)wordingLabel;

@end

