//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMDelegateProxy, NSMutableArray, NSString, UICollectionView;
@protocol MMMultiSelectedContactDisplayViewDelegate;

@interface MMMultiSelectedContactDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    MMDelegateProxy<MMMultiSelectedContactDisplayViewDelegate> *_delegate;
    NSMutableArray *_contactList;
    UICollectionView *_collectionView;
    long long _layoutMode;
}

+ (double)getDisplayViewHeight;
- (void).cxx_destruct;
- (void)addContactSpecialMode:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *contactList; // @synthesize contactList=_contactList;
- (void)dealloc;
@property(nonatomic) __weak MMDelegateProxy<MMMultiSelectedContactDisplayViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (unsigned long long)findAndRemoveContact:(id)arg1;
- (id)genContactItemViewWithContact:(id)arg1;
- (double)getContentInterSpacing;
- (double)getContentLeftOffset;
- (double)getContentLineSpacing;
- (double)getContentTopOffset;
- (double)getDisplayItemLen;
- (id)getDisplayViewInNormalState;
- (void)handleAddNewContact:(id)arg1;
- (void)handleRemoveContact:(id)arg1;
- (void)handleSetExistContacts:(id)arg1;
- (void)initData;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isContactExist:(id)arg1;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (_Bool)needTwoRowLayoutCalc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)removeContactSpecialMode:(id)arg1;
- (void)resetCollectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

