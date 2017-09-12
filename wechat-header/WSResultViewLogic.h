//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSWebViewLogic.h"

#import "YYWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest;

@interface WSResultViewLogic : WSWebViewLogic <YYWebViewDelegate>
{
    _Bool _hasLoadedForMainH5;
    _Bool _hasLoadedForDetailH5;
    NSString *_lastInputText;
    struct timeval _lastInputTime;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasLoadMainPage;
- (id)initWithWebView:(id)arg1;
- (void)loadFile:(id)arg1;
- (void)loadUrlRequest:(id)arg1;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)prepareForDetailSearch:(id)arg1;
- (void)safeSendQueryChangedJSEvent:(id)arg1;
- (void)sendSearchWAWidgetAttrChanged:(id)arg1;
- (void)updateLocalSuggestion:(id)arg1;
- (id)urlFromParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

