//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCardPkgMsgButton : NSObject
{
    unsigned int actionType;
    NSString *actionText;
    NSString *actionUrl;
}

- (void).cxx_destruct;
- (_Bool)IsActionValid;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
- (void)dealloc;

@end

