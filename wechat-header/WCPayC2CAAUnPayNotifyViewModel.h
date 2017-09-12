//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSMutableArray, NSString, UIFont;

@interface WCPayC2CAAUnPayNotifyViewModel : CommonMessageViewModel
{
    NSMutableArray *_contentTextStyles;
    double _translatedLineY;
    double _contentMidY;
    NSString *_contentText;
    UIFont *_contentTextFont;
    double _labelWidth;
    long long _parserType;
    struct CGSize _contentTextSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)calculateContentTextSize;
- (_Bool)canShowTranslateBottomView;
- (_Bool)canShowTranslatedText;
- (id)cellViewClassName;
@property(nonatomic) double contentMidY; // @synthesize contentMidY=_contentMidY;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) UIFont *contentTextFont; // @synthesize contentTextFont=_contentTextFont;
@property(nonatomic) struct CGSize contentTextSize; // @synthesize contentTextSize=_contentTextSize;
@property(retain, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=_contentTextStyles;
- (_Bool)isShowSourceView;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(nonatomic) long long parserType; // @synthesize parserType=_parserType;
- (void)setLinkHighlighted:(_Bool)arg1 url:(id)arg2;
@property(nonatomic) double translatedLineY; // @synthesize translatedLineY=_translatedLineY;
- (id)translateInfo;

@end

