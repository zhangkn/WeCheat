//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface GetMessageFromWXReq : BaseReq
{
    NSString *lang;
    NSString *country;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *country; // @synthesize country;
- (id)init;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;

@end

