//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDWebServerBodyReader-Protocol.h"

@class GCDWebServerResponse, NSString;
@protocol GCDWebServerBodyReader;

@interface GCDWebServerBodyEncoder : NSObject <GCDWebServerBodyReader>
{
    GCDWebServerResponse *_response;
    id <GCDWebServerBodyReader> _reader;
}

- (void)close;
- (id)initWithResponse:(id)arg1 reader:(id)arg2;
- (_Bool)open:(id *)arg1;
- (id)readData:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
