//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableView.h"

@protocol WCCardPkgBackTableViewDelegate;

@interface WCCardPkgBackTableView : MMTableView
{
    double _maxHeight;
    id <WCCardPkgBackTableViewDelegate> _wx_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (void)reloadData;
@property(nonatomic) __weak id <WCCardPkgBackTableViewDelegate> wx_delegate; // @synthesize wx_delegate=_wx_delegate;
- (void)updateLayout;

@end

