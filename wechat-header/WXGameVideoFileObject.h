//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXGameVideoFileObject : NSObject
{
    NSData *videoFileData;
    NSString *videoUrl;
    NSString *thumbUrl;
}

+ (id)object;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSData *videoFileData; // @synthesize videoFileData;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;

@end

