//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicItem : NSObject
{
    unsigned int musicstatus;
    NSString *key;
    NSString *title;
    NSString *photourl;
    NSString *musicurl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key;
@property(nonatomic) unsigned int musicstatus; // @synthesize musicstatus;
@property(retain, nonatomic) NSString *musicurl; // @synthesize musicurl;
@property(retain, nonatomic) NSString *photourl; // @synthesize photourl;
@property(retain, nonatomic) NSString *title; // @synthesize title;

@end

