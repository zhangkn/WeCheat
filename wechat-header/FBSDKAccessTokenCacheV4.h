//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKKeychainStore;

@interface FBSDKAccessTokenCacheV4 : NSObject
{
    FBSDKKeychainStore *_keychainStore;
}

- (void).cxx_destruct;
- (void)cacheAccessToken:(id)arg1;
- (void)clearCache;
- (id)fetchAccessToken;
- (id)init;

@end

