//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class FavoritesItem, MMHeadImageView, UILabel, UIView;

@interface FavDetailHeaderView : MMUIView
{
    MMHeadImageView *m_headImgView;
    UILabel *m_fromLabel;
    UILabel *m_sourceTimeLabel;
    UIView *m_separateLine;
    FavoritesItem *m_favItem;
}

+ (double)getFavDetailHeaderHeight:(id)arg1;
- (void).cxx_destruct;
- (void)initFromLabel;
- (void)initHeaderImgView;
- (void)initSeperateLine;
- (void)initSrcTimeLabel;
- (void)initView;
- (id)initWithFavItem:(id)arg1;
- (void)layoutSubviews;

@end

