//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "IFavoritesExt-Protocol.h"
#import "IRecordDownloadExt-Protocol.h"

@class NSString, UIImageView, UIView;
@protocol FavImagePreViewDelegate, RecordNodeDataSource;

@interface FavImagePreView : MMUIImageView <IFavoritesExt, IRecordDownloadExt>
{
    UIView *m_maskView;
    UIImageView *m_imgPreView;
    NSString *m_imageLocalPath;
    unsigned int imageDataSize;
    MMUIImageView *m_imgvBack;
    MMUIImageView *m_imgvFront;
    unsigned int m_progressLength;
    _Bool m_bIsImageExit;
    _Bool m_bIsSourceImg;
    _Bool m_bIsLongPressHandled;
    id <FavImagePreViewDelegate> m_delegate;
    id <RecordNodeDataSource> dataSource;
}

+ (struct CGSize)GetPreSizeByRecordDataSource:(id)arg1;
+ (struct CGSize)GetPreSizeByRecordDataSource:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnLongPressFavImage;
- (id)compressImage:(id)arg1;
@property(retain, nonatomic) id <RecordNodeDataSource> dataSource; // @synthesize dataSource;
- (void)dealloc;
- (void)hideMaskView;
- (void)initData;
- (void)initProgressView;
- (id)initWithDataSource:(id)arg1;
@property(nonatomic) __weak id <FavImagePreViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_imageLocalPath; // @synthesize m_imageLocalPath;
- (void)onBeginLongPress;
- (void)onClickFavImage;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)pressedEvents;
- (void)showMaskView;
- (void)startDownloadFavItem;
- (void)startLoadImage;
- (void)startLoadImageWithGCD;
- (void)startLoadImageWithGCD:(_Bool)arg1;
- (void)startLoadImageWithMaxWidth:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateProgressFinishedLength:(int)arg1 TotalLength:(int)arg2;
- (void)windowHide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

