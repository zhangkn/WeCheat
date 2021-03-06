//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IHeadImageExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WAWebSearchImageTaskDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WAWebSearchMgrDelegate;

@interface WAWebSearchMgr : MMObject <PBMessageObserverDelegate, WAWebSearchImageTaskDelegate, IHeadImageExt>
{
    _Bool _isWorkingForSuggestion;
    _Bool _isWorkingForWeAppSearch;
    unsigned int _lastEventIDForSuggestion;
    unsigned int _lastEventIDForWeAppSearch;
    NSMutableDictionary *_dicHeadImgInfo;
    NSMutableDictionary *_dicCommonImgInfo;
    _Bool _hasLoadWeAppSearchDownloadH5;
    id <WAWebSearchMgrDelegate> _delegate;
    NSString *_newestWeAppQueryText;
    NSString *_respJson;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncGetSearchSuggestion:(id)arg1 withStatParams:(id)arg2;
- (void)asyncSearchWeapp:(id)arg1 withStatParams:(id)arg2;
- (void)cancelSearch;
- (void)cleanWKTmpResourceIfNeeded;
- (void)dealloc;
@property(nonatomic) __weak id <WAWebSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (unsigned int)forceGetVersion;
- (void)forceUpdateWeAppH5;
- (unsigned int)getVersion;
- (id)getWKResourceTmpDir;
- (void)handleSearchReportCgi:(id)arg1;
- (void)handleWeAppGetSuggestionCgi:(id)arg1;
- (void)handleWeAppSearchCgi:(id)arg1;
- (void)handleWebGetSuggestionCgi:(id)arg1;
- (void)handleWebSearchCgi:(id)arg1;
- (id)init;
- (void)internelGetSuggestionUsingFTSCGI:(id)arg1 statParams:(id)arg2;
- (void)internelGetSuggestionUsingUxCGI:(id)arg1 statParams:(id)arg2;
- (void)internelHandleSearchCGI:(unsigned int)arg1 pbMessage:(unsigned int)arg2 response:(id)arg3 respjson:(id)arg4 withQuery:(id)arg5 offset:(double)arg6 updateCode:(int)arg7;
- (void)internelSearchWeAppForText:(id)arg1 usingFTSCGI:(id)arg2 statParams:(id)arg3;
- (void)internelSearchWeAppForText:(id)arg1 usingUxCGI:(id)arg2 statParams:(id)arg3;
- (id)makeWKCopyForRes:(id)arg1 fromFile:(id)arg2;
@property(retain, nonatomic) NSString *newestWeAppQueryText; // @synthesize newestWeAppQueryText=_newestWeAppQueryText;
- (void)onHeadImageChange:(id)arg1;
- (void)onImageFailForUrl:(id)arg1;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestCommonImageList:(id)arg1;
- (void)reportFTSRealTime:(id)arg1;
@property(retain, nonatomic) NSString *respJson; // @synthesize respJson=_respJson;
- (void)setImageResource:(id)arg1 toParams:(id)arg2 withSrcPath:(id)arg3 andBackUpUrl:(id)arg4;
- (void)tryUpdateWeAppSearchH5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

