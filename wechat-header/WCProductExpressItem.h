//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCProductExpressItem : NSObject
{
    unsigned int expressID;
    float price;
    NSString *name;
    NSString *expressDesc;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *expressDesc; // @synthesize expressDesc;
@property(nonatomic) unsigned int expressID; // @synthesize expressID;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) float price; // @synthesize price;

@end

