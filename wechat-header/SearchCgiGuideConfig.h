//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SearchCgiGuideConfig : NSObject
{
    NSString *_vertTitle;
    NSMutableArray *_arrVertEntryData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrVertEntryData; // @synthesize arrVertEntryData=_arrVertEntryData;
- (id)getTitleForBusinessType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *vertTitle; // @synthesize vertTitle=_vertTitle;

@end

