//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"

@class FavoritesItem, NSString, RichTextView, UILabel, UIScrollView;

@interface FavDebugXMLViewController : MMUIViewController <ILinkEventExt>
{
    UIScrollView *m_scrollView;
    FavoritesItem *m_favItem;
    UILabel *m_syncLabel;
    UILabel *m_favIdLabel;
    RichTextView *m_textLabel;
    NSString *m_copyedText;
}

- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)initFavIdLabel;
- (void)initSyncLabel;
- (void)initTextLabel;
- (id)initWithFavItem:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

