//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@interface GameMessageViewModel : CommonMessageViewModel
{
    unsigned int m_gameType;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
@property(readonly, nonatomic) unsigned int gameType; // @synthesize gameType=m_gameType;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned int realGameIndex;

@end

