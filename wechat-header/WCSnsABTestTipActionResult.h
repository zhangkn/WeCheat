//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCSnsABTestTipActionResult : NSObject
{
    int tipViewType;
    unsigned long long buttonCount;
    unsigned long long buttonClickedIndex;
    int buttonActionType;
}

@property(nonatomic) int buttonActionType; // @synthesize buttonActionType;
@property(nonatomic) unsigned long long buttonClickedIndex; // @synthesize buttonClickedIndex;
@property(nonatomic) unsigned long long buttonCount; // @synthesize buttonCount;
- (id)genStatInfo;
- (id)init;
@property(nonatomic) int tipViewType; // @synthesize tipViewType;

@end
