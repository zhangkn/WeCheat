//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXMediaMessage : NSObject
{
    NSString *title;
    NSString *description;
    NSData *thumbData;
    NSString *mediaTagName;
    id mediaObject;
    NSString *messageExt;
    NSString *messageAction;
}

+ (id)message;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *description; // @synthesize description;
- (id)init;
@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
- (void)setThumbImage:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title;

@end

