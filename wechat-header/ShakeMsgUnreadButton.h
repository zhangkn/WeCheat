//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "ShakeMgrExt-Protocol.h"

@class MMWebImageView;

@interface ShakeMsgUnreadButton : UIButton <ShakeMgrExt>
{
    MMWebImageView *oIconImageView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initView;
- (void)onShakeMsgUnreadCountChanged;
- (void)updateSubViews;

@end

