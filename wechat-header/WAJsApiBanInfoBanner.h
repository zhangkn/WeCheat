//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseWebViewBanener.h"

@class MMUILabel, NSDictionary, NSString;

@interface WAJsApiBanInfoBanner : WABaseWebViewBanener
{
    MMUILabel *m_noticeLabel;
    NSDictionary *m_jsApiNameMap;
    NSString *_jsapiName;
}

- (void).cxx_destruct;
- (id)init;
- (void)initBannerView;
- (void)initJsApiNameMap;
@property(copy, nonatomic) NSString *jsapiName; // @synthesize jsapiName=_jsapiName;
- (void)onClose;

@end

