//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WCCardOperationRegion : MMObject
{
    unsigned int _type;
    unsigned int _endTime;
    NSString *_text;
    NSString *_url;
    NSString *_thumbUrl;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
- (_Bool)operationAvalid;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end
