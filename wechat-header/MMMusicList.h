//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MMMusicList : NSObject
{
    unsigned int mCurrentItemIndex;
    NSMutableDictionary *mMusicItemDic;
    NSMutableArray *mMusicItemList;
    NSMutableSet *mDeletedMusicItem;
}

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)deleteItemWithKey:(id)arg1;
- (void)ignoreItemWithKey:(id)arg1;
- (id)init;
@property(nonatomic) unsigned int mCurrentItemIndex; // @synthesize mCurrentItemIndex;
@property(retain, nonatomic) NSMutableSet *mDeletedMusicItem; // @synthesize mDeletedMusicItem;
@property(retain, nonatomic) NSMutableDictionary *mMusicItemDic; // @synthesize mMusicItemDic;
@property(retain, nonatomic) NSMutableArray *mMusicItemList; // @synthesize mMusicItemList;
- (id)nextItem;
- (void)setCurrentPlayItemWithKey:(id)arg1;

@end

