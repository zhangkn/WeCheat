//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class NSString, UIImageView, UILabel;

@interface BSSLoadMoreItemView : BSSBaseItemView
{
    UIImageView *_imgView;
    UILabel *_contentLabel;
    NSString *_title;
}

+ (double)heightForItem;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (id)initLoadmoreItemViewWithTitle:(id)arg1;
- (void)initView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

