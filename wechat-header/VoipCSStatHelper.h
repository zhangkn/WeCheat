//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoipCSStatHelper : NSObject
{
}

+ (id)Gen3rdLog:(struct VoipCS3rdReport_t *)arg1;
+ (id)GenClientLog:(struct VoipCSClientReport_t *)arg1;
+ (id)GenVoipCSChannelLog:(struct VoipCSChannelReport_t *)arg1;
+ (id)GenVoipCSEngineLog:(struct VoipCSEngineReport_t *)arg1;

@end

