//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface MallProductItem : NSObject <PBCoding, NSCopying>
{
    unsigned int type;
    NSString *mallProductInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *mallProductInfo; // @synthesize mallProductInfo;
@property(nonatomic) unsigned int type; // @synthesize type;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

