//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, MMUIImageView, NSString, WCCardChooseSubPeopleLabelView;

@interface WCCardChoosePeopleLabelView : MMUIView
{
    NSString *_mainWording;
    NSString *_mainText;
    NSString *_subText;
    MMUIButton *_settingButton;
    MMUIImageView *_peopleImageView;
    WCCardChooseSubPeopleLabelView *_subPeopleView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(retain, nonatomic) NSString *mainWording; // @synthesize mainWording=_mainWording;
@property(retain, nonatomic) MMUIImageView *peopleImageView; // @synthesize peopleImageView=_peopleImageView;
@property(retain, nonatomic) MMUIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) WCCardChooseSubPeopleLabelView *subPeopleView; // @synthesize subPeopleView=_subPeopleView;
@property(retain, nonatomic) NSString *subText; // @synthesize subText=_subText;

@end

