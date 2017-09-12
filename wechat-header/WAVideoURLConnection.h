//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLConnection.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "WAVideoRequestTaskDelegate-Protocol.h"

@class NSMutableArray, NSString, WAVideoRequestTask;
@protocol WAVideoURLConnectionDelegate;

@interface WAVideoURLConnection : NSURLConnection <WAVideoRequestTaskDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _paused;
    WAVideoRequestTask *_task;
    id <WAVideoURLConnectionDelegate> _delegate;
    NSMutableArray *_pendingRequests;
    NSString *_tempPath;
}

- (void).cxx_destruct;
- (void)dealWithLoadingRequest:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WAVideoURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailLoadingWithTask:(id)arg1 WithError:(long long)arg2;
- (void)didFinishLoadingWithTask:(id)arg1;
- (void)didReceiveVideoDataWithTask:(id)arg1;
- (void)fillInContentInformation:(id)arg1;
- (id)getSchemeVideoURL:(id)arg1;
- (id)init;
- (void)pause;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)processPendingRequests;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (_Bool)respondWithDataForRequest:(id)arg1;
- (void)resume;
- (void)setDownloadPath:(id)arg1;
@property(retain, nonatomic) WAVideoRequestTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
- (void)task:(id)arg1 didReceiveVideoLength:(unsigned long long)arg2 mimeType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

