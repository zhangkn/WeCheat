//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSString, UIButton, WCGiftCardData;
@protocol WCMultiGiftDelegate;

@interface WCMultiGiftView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isHide;
    double _maxWidth;
    double _minHeight;
    WCGiftCardData *_giftCardData;
    id <WCMultiGiftDelegate> _delegate;
    MMTableView *_giftTableView;
    UIButton *_footerButton;
    NSArray *_acceptedCardList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *acceptedCardList; // @synthesize acceptedCardList=_acceptedCardList;
- (void)configTableSize;
- (id)createTableViewFooterView;
@property(retain, nonatomic) id <WCMultiGiftDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doHideLogic;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
@property(retain, nonatomic) MMTableView *giftTableView; // @synthesize giftTableView=_giftTableView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isHide; // @synthesize isHide=_isHide;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
