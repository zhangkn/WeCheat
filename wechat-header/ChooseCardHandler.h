//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCCardChooseViewControllerDelegate-Protocol.h"

@class NSString, NSURL;

@interface ChooseCardHandler : MMObject <WCCardChooseViewControllerDelegate>
{
    NSString *_bundleId;
    NSString *_appId;
    NSURL *_aUrl;
}

- (void).cxx_destruct;
- (void)cancelChooseCard;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)chooseCard;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)startChooseCardWithBundleId:(id)arg1 withAppId:(id)arg2 withUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

