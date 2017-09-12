//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSDictionary, NSString, WAWebViewController;

@protocol WAAppTaskLoaderContextDelegate <NSObject>
- (void)abortChildPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)abortFirstPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)cancelFirstPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)cancelLoadingAndAlertMsg:(NSString *)arg1 title:(NSString *)arg2;
- (void)cancelLoadingAndJumpToH5:(NSString *)arg1;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(NSString *)arg2 childExtraInfo:(NSDictionary *)arg3 fromParentWebView:(WAWebViewController *)arg4;
- (NSArray *)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)onBeforePushWebView;
- (void)onPushChildWebViewDidAppear;
- (void)onPushWebViewDidAppear;
- (void)removeAllParentWebViewFromChild:(WAWebViewController *)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeChildWebView:(WAWebViewController *)arg1 fromParentWebView:(WAWebViewController *)arg2;
- (void)removeParentWebView:(WAWebViewController *)arg1;
- (void)setupAppServiceAndWebViewWithAppID:(NSString *)arg1 contact:(CContact *)arg2 baseURL:(NSString *)arg3 pageRelativeURL:(NSString *)arg4 getWebView:(id *)arg5;
- (void)setupTaskForSpecificPageMode;
@end

