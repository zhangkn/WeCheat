//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface MMAlbumDataProvider : MMObject
{
}

+ (void)AllMMAlbumsWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (void)FetchLastMMAssetWith:(CDUnknownBlockType)arg1 inSecond:(double)arg2;
+ (void)FetchMMAlbumWithID:(id)arg1 With:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 shouldIncludeVideo:(_Bool)arg4 isOnlyShowVideo:(_Bool)arg5;
+ (void)FirstMMAlbumWith:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 shouldIncludeVideo:(_Bool)arg3 isOnlyShowVideo:(_Bool)arg4;
+ (void)internalInitAlbumChangeObserver;
+ (_Bool)isAuthorize;
+ (_Bool)isUserAuthorize;
+ (void)requestAuthorizeIfNeededWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)tryInitAlbumChangeObserver;
+ (void)tryUpdateAlbumChangeObserver;

@end

