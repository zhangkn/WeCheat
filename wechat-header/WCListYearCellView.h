//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UILabel;

@interface WCListYearCellView : MMTableViewCell
{
    UILabel *_yearLabel;
}

+ (double)heightOfCellWithYear:(long long)arg1;
- (void).cxx_destruct;
- (void)configureWithYear:(long long)arg1;
- (id)init;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;

@end

