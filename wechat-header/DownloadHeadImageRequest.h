//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DownloadHeadImageRequest : NSObject
{
    unsigned char category;
    unsigned int requestCount;
    NSString *userName;
    NSString *url;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char category; // @synthesize category;
- (id)init;
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end

