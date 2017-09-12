//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol CountryCodePickerDelegate;

@interface CountryCodePickerViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource>
{
    id <CountryCodePickerDelegate> m_delegate;
    NSArray *m_arrData;
    unsigned int m_curSelectedSection;
    unsigned int m_curSelectedRow;
    MMTableView *m_tableView;
    _Bool m_bSearching;
    NSMutableArray *m_arrFilteredData;
    NSMutableArray *m_arrAllKeys;
    NSMutableDictionary *m_dicKeyToCountryCode;
}

- (void).cxx_destruct;
- (void)OnReturn;
- (void)dealloc;
- (void)doSearch:(id)arg1;
- (id)init;
- (void)initData;
- (void)initSearchBar;
@property(nonatomic) __weak id <CountryCodePickerDelegate> m_delegate; // @synthesize m_delegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToSelected;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setCurSelectedCountryCode:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

