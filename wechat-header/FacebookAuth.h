//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class FBSDKLoginManager;

@interface FacebookAuth : MMObject
{
    int m_uiFacebookUsageType;
    FBSDKLoginManager *m_fbLogin;
}

- (void).cxx_destruct;
- (void)SaveData;
- (void)clearToken;
- (void)fbDidExtendToken;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(_Bool)arg1;
- (id)getAccessToken;
- (id)init;
@property(nonatomic) int m_uiFacebookUsageType; // @synthesize m_uiFacebookUsageType;
- (void)reAuth;
- (void)requestNewPermission;
- (void)tryAuth;

@end

