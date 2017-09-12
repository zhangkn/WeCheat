//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, WCPayNetImageResource;

@interface WCPayBaseMessageViewModel : CommonMessageViewModel
{
    NSString *_iconUrl;
    unsigned long long _bubbleType;
    WCPayNetImageResource *_m_iconImageResource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bubbleType; // @synthesize bubbleType=_bubbleType;
@property(readonly, nonatomic) NSString *descText;
- (void)getIconImageResource:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) double iconSize;
@property(readonly, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (_Bool)isShowSourceView;
@property(retain, nonatomic) WCPayNetImageResource *m_iconImageResource; // @synthesize m_iconImageResource=_m_iconImageResource;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceIcon;
- (id)sourceTitle;
@property(readonly, nonatomic) NSString *titleText;
- (void)updateBgBubbleType:(unsigned long long)arg1;

@end

