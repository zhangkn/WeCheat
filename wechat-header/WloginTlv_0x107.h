//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x107 : WloginTlv
{
    unsigned short wPicType;
    unsigned char cCapType;
    unsigned short wPicSize;
    unsigned char cPicRetType;
}

@property(nonatomic) unsigned char cCapType; // @synthesize cCapType;
@property(nonatomic) unsigned char cPicRetType; // @synthesize cPicRetType;
- (int)encode:(id)arg1;
@property(nonatomic) unsigned short wPicSize; // @synthesize wPicSize;
@property(nonatomic) unsigned short wPicType; // @synthesize wPicType;

@end

