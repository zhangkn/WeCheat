//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class NSArray, NSString;

@interface KSCrashReportFilterPipeline : NSObject <KSCrashReportFilter>
{
    NSArray *_filters;
}

+ (id)filterWithFilters:(id)arg1;
- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (id)initWithFilters:(id)arg1;
- (id)initWithFiltersArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

