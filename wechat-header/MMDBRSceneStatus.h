//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMDBRecoverContext, NSString;

@interface MMDBRSceneStatus : NSObject
{
    NSString *m_sceneName;
    MMDBRecoverContext *m_recoverContext;
}

- (void).cxx_destruct;
- (void)clearRecoverContext;
- (_Bool)hasAutoRecoverDB;
@property(retain, nonatomic) MMDBRecoverContext *m_recoverContext; // @synthesize m_recoverContext;
@property(retain, nonatomic) NSString *m_sceneName; // @synthesize m_sceneName;

@end

