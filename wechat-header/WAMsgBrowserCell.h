//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CMessageWrap, MMUILabel, MMWebImageView;

@interface WAMsgBrowserCell : MMUIView
{
    CMessageWrap *m_msgWrap;
    MMWebImageView *m_iconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_nameLabel;
    MMUILabel *m_titleLabel;
    MMUILabel *m_userLabel;
}

+ (id)createCellViewByMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getContactDisplayName:(id)arg1;
- (id)getIconUrl;
- (id)getSourceText;
- (id)getWeAppName;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithMsgWrap:(id)arg1;

@end

