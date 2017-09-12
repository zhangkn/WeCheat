//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class NSString;

@interface WCPayNetImageResource : NSObject <MMImageLoaderObserver>
{
    NSString *_m_url;
    CDUnknownBlockType _m_block;
    NSString *_m_cacheFolder;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 cacheFolder:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType m_block; // @synthesize m_block=_m_block;
@property(retain, nonatomic) NSString *m_cacheFolder; // @synthesize m_cacheFolder=_m_cacheFolder;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url=_m_url;
- (id)md5ForString:(id)arg1;
- (void)startWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

