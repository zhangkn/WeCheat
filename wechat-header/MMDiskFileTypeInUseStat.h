//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMDiskFileTypeInUseStat : NSObject
{
    unsigned int m_fileNum;
    unsigned long long m_fileSize;
}

+ (void)initialize;
+ (void)sumFolder:(id)arg1 toDic:(id)arg2;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize;

@end

