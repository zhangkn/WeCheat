//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x130 : WloginTlv
{
    unsigned short wDataVer;
    unsigned int dwTime;
    unsigned int dwClientIP;
    unsigned short wClientPort;
    unsigned short wResvLen;
}

- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@property unsigned int dwClientIP; // @synthesize dwClientIP;
@property unsigned int dwTime; // @synthesize dwTime;
@property unsigned short wClientPort; // @synthesize wClientPort;
@property unsigned short wDataVer; // @synthesize wDataVer;
@property unsigned short wResvLen; // @synthesize wResvLen;

@end

