//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EnterpriseSearchContactCellData : NSObject
{
    unsigned int _matchField;
    NSString *_userName;
    NSString *_displayName;
    NSString *_headImageUrl;
    NSString *_matchText;
    NSArray *_keywords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) unsigned int matchField; // @synthesize matchField=_matchField;
@property(retain, nonatomic) NSString *matchText; // @synthesize matchText=_matchText;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

