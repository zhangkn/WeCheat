//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EmoticonStoreItem;

@interface EmoticonPackageStateItem : NSObject
{
    int m_state;
    EmoticonStoreItem *m_item;
    float m_process;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *m_item; // @synthesize m_item;
@property(nonatomic) float m_process; // @synthesize m_process;
@property(nonatomic) int m_state; // @synthesize m_state;

@end

