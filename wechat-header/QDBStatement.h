//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QDBStatement : NSObject
{
    void *_statement;
    NSString *_query;
    _Bool _inUse;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
@property _Bool inUse; // @synthesize inUse=_inUse;
@property(retain) NSString *query; // @synthesize query=_query;
- (void)reset;
@property void *statement; // @synthesize statement=_statement;

@end

