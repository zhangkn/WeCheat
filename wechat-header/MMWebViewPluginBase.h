//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IMMWebViewPluginProtocol-Protocol.h"

@class MMWebViewController, NSString;

@interface MMWebViewPluginBase : MMObject <IMMWebViewPluginProtocol>
{
    MMWebViewController *_webViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setWebViewOwner:(id)arg1;
@property(readonly, nonatomic) __weak MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

