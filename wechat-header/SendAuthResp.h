//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString;

@interface SendAuthResp : BaseResp
{
    NSString *code;
    NSString *state;
    NSString *lang;
    NSString *country;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code;
@property(retain, nonatomic) NSString *country; // @synthesize country;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) NSString *state; // @synthesize state;

@end

