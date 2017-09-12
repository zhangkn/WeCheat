//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXCustomWebViewControllerDelegate-Protocol.h"

@class DeepLinkDef, MMWebViewController, NSDictionary, NSError, NSString, NSURL, UIView;
@protocol YYWebViewInterface;

@protocol MMWebViewDelegate <WXCustomWebViewControllerDelegate>

@optional
- (void)accessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (_Bool)canAccessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)onWebViewDidFinishLoad:(UIView<YYWebViewInterface> *)arg1;
- (void)onWebViewDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)onWebViewDidStartLoad:(UIView<YYWebViewInterface> *)arg1;
- (void)onWebViewWillClose:(NSDictionary *)arg1;
- (void)onWebViewWillRotateToInterfaceOrientation:(long long)arg1;
- (void)setCanShake:(_Bool)arg1;
- (NSURL *)webViewFailToLoad:(NSError *)arg1;
- (void)webViewReturn:(MMWebViewController *)arg1;
@end

