//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class WCDataItem, WCSnsABTestTipData;

@interface WCTimelineCellABTestBaseTip : MMUIView
{
    WCSnsABTestTipData *tipData;
    WCDataItem *dataItem;
}

+ (double)heightForTipView:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
- (void)initView;
- (id)initWithTipData:(id)arg1 dataItem:(id)arg2;
- (id)initWithTipData:(id)arg1 dataItem:(id)arg2 frame:(struct CGRect)arg3;
- (void)resetStatus;
- (void)resetView:(id)arg1;
@property(readonly, nonatomic) WCSnsABTestTipData *tipData; // @synthesize tipData;

@end

