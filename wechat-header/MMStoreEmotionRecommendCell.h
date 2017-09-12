//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "EmoticonRecommendMgrExt-Protocol.h"

@class UIImageView, UILabel;

@interface MMStoreEmotionRecommendCell : UICollectionViewCell <EmoticonRecommendMgrExt>
{
    UILabel *_emotionTitleLabel;
    UIImageView *_storeImageView;
    UIImageView *_m_newBadge;
}

- (void).cxx_destruct;
- (void)OnEmoticonRecommendNewStateChanged:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *m_newBadge; // @synthesize m_newBadge=_m_newBadge;
@property(retain, nonatomic) UIImageView *storeImageView; // @synthesize storeImageView=_storeImageView;
- (void)setupButton;
- (void)setupFrameView;
- (void)setupLabel;
- (void)setupViews;
- (void)updateNew:(_Bool)arg1;

@end

