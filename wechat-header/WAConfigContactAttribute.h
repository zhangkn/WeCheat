//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAppBrandInfo;

@interface WAConfigContactAttribute : NSObject
{
    CAppBrandInfo *_appBrandInfo;
}

- (void).cxx_destruct;
- (unsigned int)backgroundMaxRunningTimeInterval;
- (unsigned int)backgroundNetworkInterruptedTimeout;
- (_Bool)canKeepAliveByAudioPlay;
- (id)downloadFileDomainList;
- (unsigned int)downloadFileMaxConcurrentCount;
- (unsigned int)fileStorageMaxSizeMB;
- (id)initWithAppBrandInfo:(id)arg1;
- (unsigned int)lifeSpanAfterSuspend;
- (unsigned int)lifeSpanBeforeSuspend;
- (unsigned int)localStorageMaxSizeMB;
- (id)requestDomainList;
- (unsigned int)requestMaxConcurrentCount;
- (id)uploadFileDomainList;
- (unsigned int)uploadFileMaxConcurrentCount;
- (id)webSocketDomainList;
- (unsigned int)webViewMaxDepth;

@end

