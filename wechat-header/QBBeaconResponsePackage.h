//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QBBeaconResponsePackage : NSObject
{
    BOOL result;
    BOOL encryType;
    BOOL zipType;
    int cmd;
    long long serverTime;
    NSObject *sBuffer;
    NSString *gateWayIp;
    NSString *encKey;
    NSString *encPubKey;
}

+ (id)initWithWUPModel:(id)arg1;
+ (id)modelObjectWithCmd:(unsigned long long)arg1 data:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int cmd; // @synthesize cmd;
- (void)dealloc;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(retain, nonatomic) NSString *gateWayIp; // @synthesize gateWayIp;
@property(nonatomic) BOOL result; // @synthesize result;
@property(retain, nonatomic) NSObject *sBuffer; // @synthesize sBuffer;
@property(nonatomic) long long serverTime; // @synthesize serverTime;
@property(nonatomic) BOOL zipType; // @synthesize zipType;

@end

