//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MttWkProxyInfo : NSObject
{
    _Bool _is64os;
    NSString *_phoneID;
    NSString *_segName;
    NSString *_segtionName;
    long long _offset;
    NSString *_rootMemory;
    long long _checkOffset;
    NSString *_checkClass;
    NSString *_checkMethod;
}

+ (id)filePath;
+ (id)proxyInfoFromFile;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *checkClass; // @synthesize checkClass=_checkClass;
@property(retain, nonatomic) NSString *checkMethod; // @synthesize checkMethod=_checkMethod;
@property(nonatomic) long long checkOffset; // @synthesize checkOffset=_checkOffset;
@property(nonatomic) _Bool is64os; // @synthesize is64os=_is64os;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *phoneID; // @synthesize phoneID=_phoneID;
@property(retain, nonatomic) NSString *rootMemory; // @synthesize rootMemory=_rootMemory;
- (void)saveToFileWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *segName; // @synthesize segName=_segName;
@property(retain, nonatomic) NSString *segtionName; // @synthesize segtionName=_segtionName;

@end

