//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, WCProductActionItemInfo;

@interface WCProductActionItemCacheInfo : NSObject
{
    WCProductActionItemInfo *_itemInfo;
    UIView *_pushView;
    UIView *_popView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCProductActionItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(retain, nonatomic) UIView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIView *pushView; // @synthesize pushView=_pushView;

@end

