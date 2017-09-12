//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MMTableViewCellInfo, MMTableViewInfo, NSString;

@interface NameEditorViewController : MMUIViewController <UITextFieldDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableViewCellInfo *m_editInfo;
    NSString *m_nsOldText;
    NSString *m_nsFooterTip;
    NSString *m_nsHeaderTip;
    id m_targetOnSave;
    SEL m_selOnSave;
    _Bool m_bEnableEmpty;
    _Bool m_bAutoDismis;
    id m_userData;
    unsigned int m_uiScene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)disMissThisViewAnimated;
- (void)enableAutoCorrect:(_Bool)arg1;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 footerTip:(id)arg3 textTip:(id)arg4;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 headerTip:(id)arg3 footerTip:(id)arg4 textTip:(id)arg5;
@property(nonatomic) _Bool m_bAutoDismis; // @synthesize m_bAutoDismis;
@property(nonatomic) _Bool m_bEnableEmpty; // @synthesize m_bEnableEmpty;
@property(retain, nonatomic) MMTableViewCellInfo *m_editInfo; // @synthesize m_editInfo;
@property(retain, nonatomic) NSString *m_nsOldText; // @synthesize m_nsOldText;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
- (void)onSaveText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateWordCount:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

