//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, UILabel, UIView;

@interface MMTableViewHeaderView : MMUIView
{
    UIView *_selectedBackgroundView;
    UIView *_selectedLineView;
    UILabel *_selectedLabel;
    UIImageView *_selectedStarImageView;
    UILabel *_titleLabel;
    UIImageView *_starImageView;
    UIImageView *_backgroundImageView;
    double _selectCompletion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)reloadView;
@property(nonatomic) double selectCompletion; // @synthesize selectCompletion=_selectCompletion;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

