//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString, NSURL;

@interface OpenProfileHandler : MMObject
{
    NSString *_appID;
    NSString *_bundleID;
    NSURL *_infoUrl;
}

- (void).cxx_destruct;
- (void)cancelOpenProfile;
- (void)createWechatOpenProfile;
- (void)dealloc;
- (void)startHandleOpenProfile:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;

@end

