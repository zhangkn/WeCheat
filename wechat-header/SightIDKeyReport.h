//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SightIDKeyReport : NSObject
{
}

+ (void)reportCompressVideoFailed;
+ (void)reportDownloadResult:(_Bool)arg1;
+ (void)reportUploadC2CAlbumVideo:(id)arg1 selectedKbpsLevel:(int)arg2 containsWXTag:(_Bool)arg3;
+ (void)reportUploadC2CRecordVideo:(id)arg1;
+ (void)reportUploadResult:(_Bool)arg1;
+ (void)reportUploadSize:(unsigned int)arg1;
+ (void)reportUploadSnsAlbumVideo:(id)arg1 containsWXTag:(_Bool)arg2;
+ (void)reportUploadSnsRecordVideo:(id)arg1;

@end

