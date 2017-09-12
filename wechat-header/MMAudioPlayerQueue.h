//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CommonPlayerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface MMAudioPlayerQueue : NSObject <CommonPlayerDelegate>
{
    NSMutableArray *_m_audioQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)checkQueue;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_audioQueue; // @synthesize m_audioQueue=_m_audioQueue;
- (void)onCommonPlayerError:(id)arg1;
- (void)onCommonPlayerPlayEnd;
- (void)playSoundWithData:(id)arg1 format:(unsigned long long)arg2;
- (void)playSoundWithPath:(id)arg1 format:(unsigned long long)arg2;
- (id)playerWithFormat:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

