//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString, UIView, WCShareCardData;

@interface WCShareCardItemView : MMUIView
{
    _Bool _bForCard;
    NSArray *_shareCardList;
    WCShareCardData *_curDisplayShareCard;
    UIView *_cardBgView;
    UIView *_shadowView;
    UIView *_coverView;
    UIView *_cardBgContainerView;
    NSString *_shareUsernameText;
}

+ (double)LocalCityShareCardEmptyTipsHeight;
+ (double)ShareCardGatherViewHeight;
+ (id)genLocalCityEmptyTipsCellContentView;
- (void).cxx_destruct;
- (id)genCardBgView;
- (id)genLogoView;
- (id)genNewItemView;
- (_Bool)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (id)genTagItemViewWithTagItem:(id)arg1;
- (id)genTagListView;
- (void)initViewForShareCard;
- (id)initWithShareCard:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end

