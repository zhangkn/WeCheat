//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IVoiceSearchExt <NSObject>

@optional
- (void)OnEndRecord;
- (void)OnError:(int)arg1 andSearchId:(unsigned int)arg2;
- (void)OnGetSearchResult:(NSArray *)arg1 andSearchId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnStartRecord;
@end

