//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIGestureRecognizer, UIScrollView, UIView;

@protocol MMImageScrollViewHelperDelegate <NSObject>

@optional
- (void)addGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)bBanDoubleTap;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
- (UIScrollView *)getScrollView;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)arg1;
@property(nonatomic) double zoomScale;
- (void)setZoomScale:(float)arg1 animated:(_Bool)arg2;
- (UIView *)viewForZooming;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
@end

