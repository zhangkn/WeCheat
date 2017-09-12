//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "ZoomingScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIView, UIWindow, ZoomingScrollView;

@interface SingleImageBrowser : MMUIViewController <UIScrollViewDelegate, ZoomingScrollViewDelegate, WCActionSheetDelegate>
{
    UIImage *_image;
    ZoomingScrollView *_pagingScrollView;
    UIView *_senderViewForAnimation;
    struct CGRect _senderViewOriginalFrame;
    UIWindow *_applicationWindow;
    CDUnknownBlockType _onForwardMsg;
    CDUnknownBlockType _onSaveToAlbum;
    CDUnknownBlockType _onAddToFavorites;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToFavorites;
- (void)animateView:(id)arg1 toFrame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)contentSizeForPagingScrollView;
- (void)dismissPhotoBrowserAnimated:(_Bool)arg1;
- (void)forwardMessage;
- (id)initWithImage:(id)arg1 animatedFromView:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onAddToFavorites; // @synthesize onAddToFavorites=_onAddToFavorites;
@property(copy, nonatomic) CDUnknownBlockType onForwardMsg; // @synthesize onForwardMsg=_onForwardMsg;
- (void)onLongPress:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onSaveToAlbum; // @synthesize onSaveToAlbum=_onSaveToAlbum;
- (void)onZoomingScrollViewSingleTap;
- (void)performCloseAnimation;
- (void)performPresentAnimation;
- (void)saveImageToAlbum;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

