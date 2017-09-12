//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMSearchBarDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "StoreEmotionSearchJSLogicDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class EmotionStoreSearchContainerView, MMSearchBar, MMSearchBarDisplayController, NSString;

@interface MMEmotionStoreSearchController : MMObject <MMSearchBarDelegate, UISearchDisplayDelegate, UISearchBarDelegate, StoreEmotionSearchJSLogicDelegate, MMUIViewControllerDelegate>
{
    MMSearchBar *m_mmSearchBar;
    _Bool m_canSearchAfterInit;
    _Bool m_searchDimmingViewRemoved;
    MMSearchBarDisplayController *m_searchBarDisplayControler;
    EmotionStoreSearchContainerView *m_searchResultContainerView;
    NSString *m_templateDir;
    unsigned int m_templateVersion;
    unsigned long long _searchScene;
}

- (void).cxx_destruct;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)configSearchTemplate;
- (void)dealloc;
- (void)fixSearchBarMaskBug;
- (void)fixSearchBarSuperviewHeight;
- (void)fixSearchBarSuperviewHeightWhenActive;
- (id)getViewController;
- (void)hideSearchBarResultView;
- (id)initWithContentsViewController:(id)arg1 AndSearchBarDisplayController:(id)arg2;
@property(retain, nonatomic) MMSearchBar *mmSearchBar; // @synthesize mmSearchBar=m_mmSearchBar;
- (void)openNewPageWithPageName:(id)arg1 ReqType:(unsigned int)arg2 Keyword:(id)arg3 searchId:(unsigned long long)arg4;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (void)tryInitViewOfSearchController;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

