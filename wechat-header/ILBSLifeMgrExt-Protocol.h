//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LbsLifeData, NSString;

@protocol ILBSLifeMgrExt <NSObject>
- (void)OnAutoSearchLBSLife:(LbsLifeData *)arg1 Keyword:(NSString *)arg2 NextQueryInterval:(double)arg3 Error:(int)arg4 IsStartFromFirst:(_Bool)arg5;
- (void)OnGetLBSLife:(LbsLifeData *)arg1 Error:(int)arg2;
- (void)OnSearchLBSLife:(LbsLifeData *)arg1 Keyword:(NSString *)arg2 Error:(int)arg3 IsStartFromFirst:(_Bool)arg4;
@end

