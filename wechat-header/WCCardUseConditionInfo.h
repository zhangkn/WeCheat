//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSArray, NSString;

@interface WCCardUseConditionInfo : MMObject
{
    NSString *_title;
    NSArray *_outerTagList;
    NSArray *_innerTagList;
    NSArray *_detailField;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSArray *detailField; // @synthesize detailField=_detailField;
@property(retain, nonatomic) NSArray *innerTagList; // @synthesize innerTagList=_innerTagList;
@property(retain, nonatomic) NSArray *outerTagList; // @synthesize outerTagList=_outerTagList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

