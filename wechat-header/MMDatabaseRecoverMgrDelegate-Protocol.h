//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMDatabaseRecoverMgrDelegate <NSObject>
- (void)onAutoRecoverEndWithResult:(_Bool)arg1 errorMsg:(NSString *)arg2;
- (void)onRecoverProgressUpdate:(float)arg1;
@end

