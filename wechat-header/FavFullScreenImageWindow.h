//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class FavFullScreenImageViewController;
@protocol FavFullScreenImageViewDelegate;

@interface FavFullScreenImageWindow : MMUIWindow
{
    FavFullScreenImageViewController *m_controller;
    id <FavFullScreenImageViewDelegate> m_delegate;
    _Bool _m_canSelect;
    _Bool _m_useAlphaAnimation;
}

+ (void)freeFavFullScreenView;
+ (id)getFavFullScreenView;
- (void).cxx_destruct;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (id)init;
@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) __weak id <FavFullScreenImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_useAlphaAnimation; // @synthesize m_useAlphaAnimation=_m_useAlphaAnimation;
- (void)onMemoryWarning;

@end

