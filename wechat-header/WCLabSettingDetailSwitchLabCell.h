//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UISwitch, UIView;

@interface WCLabSettingDetailSwitchLabCell : UITableViewCell
{
    UIView *_topLineView;
    UIView *_bottomLineView;
    MMUILabel *_label;
    UISwitch *_labSwitch;
}

+ (double)height;
- (void).cxx_destruct;
- (void)configureWithLabItem:(id)arg1;
- (void)initLabel;
- (void)initLines;
- (void)initSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UISwitch *labSwitch; // @synthesize labSwitch=_labSwitch;
- (void)layoutSubviews;

@end

