//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class WCCardUsedStoreInfo;
@protocol WCCardUsedStoreViewDelegate;

@interface WCCardUsedStoreView : MMUIView
{
    WCCardUsedStoreInfo *_usedStoreInfo;
    id <WCCardUsedStoreViewDelegate> _delegate;
}

+ (double)calHeight:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardUsedStoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUsedStoreInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onMakeACall;
- (void)onNavgation;

@end

