//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface MemSig : NSObject <NSCoding>
{
    NSString *sigName;
    unsigned int dwAppid;
    NSData *sig;
    NSData *sigKey;
}

- (void)dealloc;
- (id)description;
@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSData *sig; // @synthesize sig;
@property(retain, nonatomic) NSData *sigKey; // @synthesize sigKey;
@property(copy, nonatomic) NSString *sigName; // @synthesize sigName;

@end
