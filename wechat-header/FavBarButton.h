//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMUILabel, UIImageView, UIView;

@interface FavBarButton : UIButton
{
    UIView *_divTopLine;
    UIImageView *_arrowIcon;
    MMUILabel *_label;
    double _pixelLineAndLabelHor;
    double _pixelLineAndLabelVer;
    double _pixelLabelAndArrowHor;
    double _arrowHeight;
    double _arrowWidth;
    double _fontSize;
    double _lineHeight;
    double _maxWidth;
    struct CGSize _labelSize;
}

- (void).cxx_destruct;
- (struct CGSize)calFavBarButtonSize;
- (id)init;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)setLabelText:(id)arg1;

@end

