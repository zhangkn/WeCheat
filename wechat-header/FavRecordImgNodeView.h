//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavRecordBaseNodeView.h"

#import "FavImagePreViewDelegate-Protocol.h"

@class FavImagePreView, NSString;

@interface FavRecordImgNodeView : FavRecordBaseNodeView <FavImagePreViewDelegate>
{
    FavImagePreView *m_imgPreView;
}

- (void).cxx_destruct;
- (void)addContentSubView;
@property(readonly, nonatomic) FavImagePreView *m_imgPreView; // @synthesize m_imgPreView;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onWillLongPressFavPreImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

