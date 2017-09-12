//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString;

@interface AppNoteMessageViewModel : CommonMessageViewModel
{
    NSString *m_titleText;
    NSString *m_contentText;
    double m_titleHeight;
    double m_contentHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) NSString *contentText;
@property(readonly, nonatomic) int imageCount;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceIcon;
- (id)sourceTitle;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) NSString *titleText;

@end

