//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMutableString;

@interface WCNewClickStatReportData : MMObject
{
    unsigned int seq;
    unsigned int index;
    unsigned int indexCnt;
    unsigned int reverseInt1;
    unsigned int reverseInt2;
    unsigned int reportToLogID;
    NSMutableString *eventIDList;
    NSMutableString *reverseStr;
    NSMutableString *attribute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *attribute; // @synthesize attribute;
- (id)description;
@property(retain, nonatomic) NSMutableString *eventIDList; // @synthesize eventIDList;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(nonatomic) unsigned int indexCnt; // @synthesize indexCnt;
- (id)init;
- (void)replaceSpecialSymbol;
- (void)report;
@property(nonatomic) unsigned int reportToLogID; // @synthesize reportToLogID;
@property(nonatomic) unsigned int reverseInt1; // @synthesize reverseInt1;
@property(nonatomic) unsigned int reverseInt2; // @synthesize reverseInt2;
@property(retain, nonatomic) NSMutableString *reverseStr; // @synthesize reverseStr;
@property(nonatomic) unsigned int seq; // @synthesize seq;
- (id)toString;

@end

