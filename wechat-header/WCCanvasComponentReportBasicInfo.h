//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WCCanvasComponentReportBasicInfo : MMObject
{
    unsigned int _exposureCount;
    NSString *_cid;
    unsigned long long _stayTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (id)dictionaryRepresentation;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
- (id)init;
- (id)initWithCid:(id)arg1;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;

@end

