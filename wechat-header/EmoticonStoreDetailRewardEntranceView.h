//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, RichTextView, UIButton, UICollectionView, UILabel;
@protocol EmotionStoreDetailRewardEntranceDelegate;

@interface EmoticonStoreDetailRewardEntranceView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ILinkEventExt>
{
    UILabel *m_begWordLabel;
    UIButton *m_redRewardBtn;
    RichTextView *m_donorsCountLabel;
    UICollectionView *m_donorsView;
    NSArray *m_donors;
    id <EmotionStoreDetailRewardEntranceDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configSubviews;
@property(nonatomic) __weak id <EmotionStoreDetailRewardEntranceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onRewardButtonClick;
- (double)updateViewWithPid:(id)arg1 RewardInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

