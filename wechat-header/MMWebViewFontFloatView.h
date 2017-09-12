//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

#import "MMStepSliderDelegate-Protocol.h"

@class MMStepSlider, NSString, UIImageView;
@protocol MMWebViewFontFloatViewDelegate;

@interface MMWebViewFontFloatView : MMUIButton <MMStepSliderDelegate>
{
    UIImageView *viewBg;
    unsigned int m_uiFontType;
    MMStepSlider *m_slider;
    id <MMWebViewFontFloatViewDelegate> m_delegate;
    _Bool m_bAnimating;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)delayShow;
- (void)initSlider:(unsigned int)arg1;
- (id)initWithFontType:(unsigned int)arg1 attachToView:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak id <MMWebViewFontFloatViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)mmSliderViewChange:(unsigned int)arg1;
- (void)onClose;
- (void)showUp;
- (void)slideOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

