//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CMailContactInfo : NSObject <NSCoding>
{
    NSString *mSyncInfo;
    NSMutableDictionary *mMailContactDic;
}

- (void).cxx_destruct;
- (void)LoadMailContactData;
- (void)SaveMailContactData;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *mMailContactDic; // @synthesize mMailContactDic;
@property(retain, nonatomic) NSString *mSyncInfo; // @synthesize mSyncInfo;

@end

