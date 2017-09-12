//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeepLinkBitSet, NSString;

@interface DeepLinkDef : NSObject
{
    unsigned int flag;
    CDUnknownBlockType linkBlock;
    NSString *link;
    NSString *linkName;
    DeepLinkBitSet *dlBitset;
}

+ (id)DeepLinkDefWithName:(id)arg1 Link:(id)arg2 PermissionBitSet:(unsigned long long)arg3 LinkBlock:(CDUnknownBlockType)arg4 Flag:(unsigned int)arg5;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) DeepLinkBitSet *dlBitset; // @synthesize dlBitset;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic, getter=getLink) NSString *link; // @synthesize link;
- (id)init;
- (_Bool)isCallDelegate;
- (_Bool)isCallExtension;
@property(nonatomic) __weak CDUnknownBlockType linkBlock; // @synthesize linkBlock;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName;

@end

