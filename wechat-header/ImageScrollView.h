//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, NSArray, NSString, UIActivityIndicatorView, UIImageView, WXFullScreenGestureRecognizer;
@protocol ImageScrollViewDelegate;

@interface ImageScrollView : MMUIScrollView <FullScreenGestureDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    UIImageView *imageView;
    UIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool m_bIsLongPressHandled;
    WXFullScreenGestureRecognizer *m_gesture;
    struct CGSize m_originSize;
    _Bool _enableDragToClose;
    id <ImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2 FullScreen:(_Bool)arg3;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2 FullScreen:(_Bool)arg3 CornerRadius:(double)arg4;
@property(nonatomic) _Bool enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
- (id)getImage;
- (id)getImageView;
- (id)getScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
@property __weak id <ImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDoubleTap:(id)arg1;
- (void)onFullScreenBackgroupColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onSingleTap:(id)arg1;
- (void)reloadView:(id)arg1 FullScreen:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setOriginSize:(struct CGSize)arg1;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)updateImage:(id)arg1;
- (void)updateScrollable;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

