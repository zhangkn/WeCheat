//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADVideoWrap : NSObject
{
    NSString *adID;
    NSString *publishID;
    NSString *uxInfo;
    unsigned long long startTime;
    NSMutableArray *arrPlayInfo;
    unsigned int scene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adID; // @synthesize adID;
@property(retain, nonatomic) NSMutableArray *arrPlayInfo; // @synthesize arrPlayInfo;
- (id)init;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;

@end

