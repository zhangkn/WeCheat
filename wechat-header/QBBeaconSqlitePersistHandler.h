//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBBeaconSqlitePersistHandler : NSObject
{
    _Bool isGetfilesuccess;
}

+ (id)getDefaultHandler;
- (_Bool)deleteObjectWithKey:(id)arg1;
- (_Bool)deleteObjects;
- (id)getObject:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isGetfilesuccess; // @synthesize isGetfilesuccess;
- (_Bool)saveObject:(id)arg1 key:(id)arg2;
- (_Bool)saveObjects:(id)arg1 key:(id)arg2;

@end

