//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x11d : WloginTlv
{
    unsigned int dwAppid;
    NSData *acSigKey;
    NSData *acSig;
}

@property(retain) NSData *acSig; // @synthesize acSig;
@property(retain) NSData *acSigKey; // @synthesize acSigKey;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@property unsigned int dwAppid; // @synthesize dwAppid;

@end

