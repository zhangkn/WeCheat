//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x100 : WloginTlv
{
    unsigned short wDBBufVer;
    unsigned int dwSSOVer;
    unsigned int dwAppID;
    unsigned int dwSubAppID;
    unsigned int dwAppClientVer;
    unsigned int dwGetSig;
}

@property(nonatomic) unsigned int dwAppClientVer; // @synthesize dwAppClientVer;
@property(nonatomic) unsigned int dwAppID; // @synthesize dwAppID;
@property(nonatomic) unsigned int dwGetSig; // @synthesize dwGetSig;
@property(nonatomic) unsigned int dwSSOVer; // @synthesize dwSSOVer;
@property(nonatomic) unsigned int dwSubAppID; // @synthesize dwSubAppID;
- (int)encode:(id)arg1;
@property(nonatomic) unsigned short wDBBufVer; // @synthesize wDBBufVer;

@end

