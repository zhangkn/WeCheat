//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewAskAuthorizationLogicExt-Protocol.h"

@class JSEvent;

@interface WebviewJSEventHandler_getLatestAddress : WebviewJSEventHandlerBase <IWebviewAskAuthorizationLogicExt>
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;
- (void)startGetLatestAddress;

@end

