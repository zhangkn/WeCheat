//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OpenUDID : NSObject
{
}

+ (id)_generateFreshOpenUDID;
+ (id)_getDictFromPasteboard:(id)arg1;
+ (void)_setDict:(id)arg1 forPasteboard:(id)arg2;
+ (void)setOptOut:(_Bool)arg1;
+ (id)value;
+ (id)valueWithError:(id *)arg1;

@end

