//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMiniProgramObject : NSObject
{
    _Bool _withShareTicket;
    NSString *webpageUrl;
    NSString *userName;
    NSString *path;
    NSData *_hdImageData;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData=_hdImageData;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;

@end

