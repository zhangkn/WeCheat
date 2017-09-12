//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableViewCellInfo, NSIndexPath;

@protocol MMTableViewInfoDelegate <NSObject, UIScrollViewDelegate, tableViewDelegate>

@optional
- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1 Cell:(MMTableViewCellInfo *)arg2;
- (void)commitEditingForRowAtIndexPath:(NSIndexPath *)arg1 Cell:(MMTableViewCellInfo *)arg2;
@end

