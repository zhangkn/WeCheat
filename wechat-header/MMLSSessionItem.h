//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface MMLSSessionItem : NSObject <NSCoding>
{
    unsigned int _msgCount;
    unsigned int _msgOldestTime;
    unsigned int _msgNewestTime;
    NSString *session;
    NSString *userName;
    unsigned long long fileSize;
    NSMutableArray *_sessionItemArray;
    long long _msgBeginTime;
    long long _msgEndTime;
}

+ (_Bool)sessionItemCompareItem:(id)arg1 withItem:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long msgBeginTime; // @synthesize msgBeginTime=_msgBeginTime;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) long long msgEndTime; // @synthesize msgEndTime=_msgEndTime;
@property(nonatomic) unsigned int msgNewestTime; // @synthesize msgNewestTime=_msgNewestTime;
@property(nonatomic) unsigned int msgOldestTime; // @synthesize msgOldestTime=_msgOldestTime;
@property(retain, nonatomic) NSString *session; // @synthesize session;
@property(retain, nonatomic) NSMutableArray *sessionItemArray; // @synthesize sessionItemArray=_sessionItemArray;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end

