//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController, WAAppTaskExtInfo, WAPermissionResult, WAWebViewController;

@protocol WAWebViewDelegate <NSObject>

@optional
- (NSString *)askFrameContentFromWebView:(WAWebViewController *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3 fromWebView:(WAWebViewController *)arg4;
- (_Bool)checkWebViewRunMode:(NSString *)arg1;
- (void)enterBackgroundFrom:(WAWebViewController *)arg1 mode:(long long)arg2 animate:(_Bool)arg3;
- (WAWebViewController *)getFirstWebViewFrom:(WAWebViewController *)arg1;
- (WAWebViewController *)getLastWebViewFrom:(WAWebViewController *)arg1;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (WAWebViewController *)getPreviousWebViewFromWebView:(WAWebViewController *)arg1;
- (WAWebViewController *)getTabChildWebViewWithRelativeURL:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (WAAppTaskExtInfo *)getTaskExtInfo;
- (unsigned long long)getWebViewDepthInStack;
- (_Bool)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (_Bool)isForceEnableClose;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(_Bool)arg2;
- (WAWebViewController *)popWebViewCount:(int)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)publishPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)triggerTaskRouteToHomePage:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didLoadFrameContent:(NSString *)arg2;
- (void)webView:(WAWebViewController *)arg1 didPresent:(UIViewController *)arg2;
- (void)webViewBeforeClickReturnButton:(WAWebViewController *)arg1;
- (void)webViewClickExitButton:(WAWebViewController *)arg1;
- (void)webViewDidAppear:(WAWebViewController *)arg1;
- (void)webViewDidBePoped:(WAWebViewController *)arg1;
- (void)webViewDidDisappear:(WAWebViewController *)arg1;
- (void)webViewDidPush:(WAWebViewController *)arg1;
- (void)webViewDidSwitchTab:(WAWebViewController *)arg1;
- (void)webViewDidTerminateInContentProcess:(WAWebViewController *)arg1;
- (void)webViewInjectScriptFail:(WAWebViewController *)arg1;
- (_Bool)webViewIsFirstPage:(WAWebViewController *)arg1;
- (_Bool)webViewIsSameDepthWithFirstPage:(WAWebViewController *)arg1;
- (void)webViewOnBeforeEveluateIndexData:(WAWebViewController *)arg1;
- (void)webViewOnPageReload:(WAWebViewController *)arg1 withRouteInfo:(NSDictionary *)arg2;
@end

