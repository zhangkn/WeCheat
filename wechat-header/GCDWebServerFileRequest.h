//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerRequest.h"

@class NSString;

@interface GCDWebServerFileRequest : GCDWebServerRequest
{
    NSString *_temporaryPath;
    int _file;
}

- (void).cxx_destruct;
- (_Bool)close:(id *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;
- (_Bool)open:(id *)arg1;
@property(readonly, nonatomic) NSString *temporaryPath; // @synthesize temporaryPath=_temporaryPath;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;

@end

