//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBBeaconBaseInterface : NSObject
{
}

+ (_Bool)enableAnalytics:(id)arg1 gatewayIP:(id)arg2;
+ (_Bool)onUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (void)setAdditionalInfo:(id)arg1;
+ (void)setAppKey:(id)arg1;
+ (void)setGUID:(id)arg1;
+ (void)setSDKVersion:(id)arg1;
+ (void)setUserId:(id)arg1;

@end
