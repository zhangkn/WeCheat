//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBaseContact, CMessageWrap;
@protocol ChatViewModelDelegate;

@interface BaseChatViewModel : NSObject
{
    CBaseContact *m_chatContact;
    double m_layoutWidth;
    double m_cachedHeight;
    id m_cellView;
    int _modelType;
    unsigned long long _splitPosition;
    double _createTime;
    id <ChatViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)cellDataForRow:(unsigned long long)arg1;
- (id)cellIdentifier;
@property(nonatomic) __weak id cellView;
- (id)cellViewClassName;
@property(retain, nonatomic) CBaseContact *chatContact; // @synthesize chatContact=m_chatContact;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) __weak id <ChatViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithChatContact:(id)arg1;
- (_Bool)isDisableEditMode;
- (_Bool)isHeadPart;
- (_Bool)isTailPart;
- (struct CGSize)measure:(struct CGSize)arg1;
@property(readonly, nonatomic) CMessageWrap *messageWrap;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
- (long long)numberOfRowsInSection;
- (void)resetLayoutCache;
- (double)rowHeight;
- (double)sectionHeight;
@property(nonatomic) unsigned long long splitPosition; // @synthesize splitPosition=_splitPosition;
- (_Bool)shouldLayoutIfNeeded;
- (void)updateChatContact:(id)arg1;
- (void)updateLayouts;

@end

