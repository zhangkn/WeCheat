//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol RecoverDataManagerDelegate <NSObject>

@optional
- (void)onAddRecoverData:(NSString *)arg1 order:(unsigned long long)arg2;
- (void)onAddUploadData:(NSString *)arg1 order:(unsigned long long)arg2;
- (void)onRecoverProgressUpdate:(float)arg1;
@end

