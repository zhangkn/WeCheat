//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMLocationDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)init;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table;
- (id)pathForDatabase;
- (_Bool)setAddress:(id)arg1 ByLocation:(struct CLLocationCoordinate2D)arg2;
- (void)setupDatabase;

@end

