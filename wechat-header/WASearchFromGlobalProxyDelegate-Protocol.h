//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UISearchBar, UIView;
@protocol YYWebViewInterface><WebSearchInterface;

@protocol WASearchFromGlobalProxyDelegate <NSObject>
@property(retain, nonatomic) UISearchBar *searchBar;

@optional
- (void)onWAProxyCGISearch:(NSDictionary *)arg1;
- (void)onWAProxyHideKeyboard;
- (void)onWAProxySearchInputChanged:(NSDictionary *)arg1;
- (void)onWAProxyWillBeginDetailSearch:(UIView<YYWebViewInterface><WebSearchInterface> *)arg1;
@end

