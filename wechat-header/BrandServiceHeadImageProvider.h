//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IContactMgrExt-Protocol.h"

@class NSMutableDictionary;

@interface BrandServiceHeadImageProvider : NSObject <IContactMgrExt>
{
    NSMutableDictionary *m_headImageCache;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)headImageForUrl:(id)arg1:(id)arg2;
- (id)init;
- (void)onMemoryWarnning;
- (void)onModifyContact:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;

@end

