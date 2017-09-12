//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSString;

@interface WCDBManager : MMService <MMService>
{
    struct map<std::__1::pair<int, int>, int, std::__1::less<std::__1::pair<int, int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<int, int>, int>>> _idkeyInfo;
    struct map<int, WCDBCorruptReport *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, WCDBCorruptReport *>>> _reports;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearCorruptNum:(int)arg1;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)reportErrorToKV:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

