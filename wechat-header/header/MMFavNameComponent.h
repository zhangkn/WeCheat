//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "IStrangerContactMgrExt-Protocol.h"

@class AttributeLabel, NSString;

@interface MMFavNameComponent : MMComponent <IStrangerContactMgrExt>
{
    AttributeLabel *_nameLabel;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)configContentLayout;
- (void)configLabel;
- (void)dealloc;
- (id)getContactDisplayName:(id)arg1;
- (id)getTitleText;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
