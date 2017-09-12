//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WAPageFlowObject : MMObject
{
    _Bool _isEntrance;
    _Bool _isReportBePoped;
    unsigned int _lastClickTimeStamp;
    NSString *_pagePath;
    NSString *_query;
    unsigned long long _lastBecomeForgroundTime;
    unsigned long long _stayTime;
    unsigned long long _costTime;
    unsigned long long _targetAction;
    NSString *_targetPagePath;
    NSString *_referPagePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) _Bool isEntrance; // @synthesize isEntrance=_isEntrance;
@property(nonatomic) _Bool isReportBePoped; // @synthesize isReportBePoped=_isReportBePoped;
@property(nonatomic) unsigned long long lastBecomeForgroundTime; // @synthesize lastBecomeForgroundTime=_lastBecomeForgroundTime;
@property(nonatomic) unsigned int lastClickTimeStamp; // @synthesize lastClickTimeStamp=_lastClickTimeStamp;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *referPagePath; // @synthesize referPagePath=_referPagePath;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned long long targetAction; // @synthesize targetAction=_targetAction;
@property(copy, nonatomic) NSString *targetPagePath; // @synthesize targetPagePath=_targetPagePath;

@end

