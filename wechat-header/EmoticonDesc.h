//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonDesc : MMObject <PBCoding>
{
    NSString *m_md5;
    NSMutableArray *m_LangList;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)hasTheSameMd5WithDesc:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_LangList; // @synthesize m_LangList;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

