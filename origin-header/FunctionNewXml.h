//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FunctionNewXml : NSObject <PBCoding>
{
    unsigned int cmdid;
    unsigned int opType;
    unsigned int retryCount;
    unsigned int retryInterval;
    unsigned int reportid;
    unsigned int successkey;
    unsigned int failKey;
    unsigned int finalFailKey;
    unsigned int nextRetryTime;
    unsigned int createTime;
    unsigned long long version;
    NSString *functionMsgId;
    NSString *cgiName;
    NSString *cgiPath;
    NSString *customBuff;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cgiName; // @synthesize cgiName;
@property(retain, nonatomic) NSString *cgiPath; // @synthesize cgiPath;
@property(nonatomic) unsigned int cmdid; // @synthesize cmdid;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *customBuff; // @synthesize customBuff;
@property(nonatomic) unsigned int failKey; // @synthesize failKey;
@property(nonatomic) unsigned int finalFailKey; // @synthesize finalFailKey;
@property(retain, nonatomic) NSString *functionMsgId; // @synthesize functionMsgId;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int nextRetryTime; // @synthesize nextRetryTime;
@property(nonatomic) unsigned int opType; // @synthesize opType;
@property(nonatomic) unsigned int reportid; // @synthesize reportid;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(nonatomic) unsigned int retryInterval; // @synthesize retryInterval;
@property(nonatomic) unsigned int successkey; // @synthesize successkey;
@property(nonatomic) unsigned long long version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

