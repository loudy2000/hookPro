//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, TBSNSBasicListViewConfigure, TBSNSBasicListViewDataRequest, TBSNSNetServiceContainer, UITableView;
@protocol TBSNSBasicListViewDelegate;

@interface TBSNSBasicListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    double oldTime;	// 8 = 0x8
    double oldOffset;	// 16 = 0x10
    long long tempTotalCount;	// 24 = 0x18
    _Bool _needScrollEvent;	// 32 = 0x20
    _Bool _isHomePageListView;	// 33 = 0x21
    _Bool _manuallyCallReloadNetData;	// 34 = 0x22
    _Bool _justDoManulRefresh;	// 35 = 0x23
    id <TBSNSBasicListViewDelegate> myDelegate;	// 40 = 0x28
    UITableView *_myTableView;	// 48 = 0x30
    double _scrollingSpeed;	// 56 = 0x38
    unsigned long long _state;	// 64 = 0x40
    NSString *_pageName;	// 72 = 0x48
    TBSNSBasicListViewConfigure *_myConfigure;	// 80 = 0x50
    TBSNSBasicListViewDataRequest *_myDataRequest;	// 88 = 0x58
    TBSNSNetServiceContainer *_servicesContainer;	// 96 = 0x60
    NSTimer *_myLoadingTimer;	// 104 = 0x68
    NSMutableDictionary *_myCellProxy;	// 112 = 0x70
    struct UIEdgeInsets _contentInset;	// 120 = 0x78
}

@property(nonatomic) _Bool justDoManulRefresh; // @synthesize justDoManulRefresh=_justDoManulRefresh;
@property(retain, nonatomic) NSMutableDictionary *myCellProxy; // @synthesize myCellProxy=_myCellProxy;
@property(nonatomic) NSTimer *myLoadingTimer; // @synthesize myLoadingTimer=_myLoadingTimer;
@property(retain, nonatomic) TBSNSNetServiceContainer *servicesContainer; // @synthesize servicesContainer=_servicesContainer;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) TBSNSBasicListViewDataRequest *myDataRequest; // @synthesize myDataRequest=_myDataRequest;
@property(retain, nonatomic) TBSNSBasicListViewConfigure *myConfigure; // @synthesize myConfigure=_myConfigure;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool manuallyCallReloadNetData; // @synthesize manuallyCallReloadNetData=_manuallyCallReloadNetData;
@property(nonatomic) _Bool isHomePageListView; // @synthesize isHomePageListView=_isHomePageListView;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) _Bool needScrollEvent; // @synthesize needScrollEvent=_needScrollEvent;
@property(nonatomic) __weak id <TBSNSBasicListViewDelegate> delegate; // @synthesize delegate=myDelegate;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)stopLoadingIndicatorT:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSelectedItem:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_care_getKeyByData:(id)arg1 withCellIndex:(long long)arg2;
- (long long)_care_getDataIndexByCellIndex:(long long)arg1 withTempTotal:(long long)arg2;
- (long long)_care_getCellCountByDataTempCount:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)autoPullRefreshWithState:(unsigned long long)arg1;
- (void)nextPageNetData;
- (void)resetNetData;
- (void)refreshNetData;
- (void)reloadNetData;
- (void)loadCacheData;
- (void)afterChangedConfigure;
- (void)serviceFinish:(_Bool)arg1;
- (id)serviceParameters;
- (void)showLoadingIndicator:(_Bool)arg1;
- (void)setScrollsToTop:(_Bool)arg1;
- (void)scrollToTop;
- (void)reloadData;
- (id)getValueWithParams:(id)arg1;
- (void)refreshVisibleCells;
- (void)refreshCell:(long long)arg1;
- (_Bool)canStartToLoadResource;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (id)getService;
- (id)getContainer;
- (void)setContainer:(id)arg1;
- (id)getListUIConfigure;
- (void)setListUIConfigure:(id)arg1;
- (void)setHeaderView:(id)arg1 andFooterView:(id)arg2;
- (_Bool)isListScrollEnabled;
- (void)enableListScroll:(_Bool)arg1;
- (id)getCellByIndex:(long long)arg1;
- (void)setListContentInset:(struct UIEdgeInsets)arg1;
- (id)getLastDataItem;
- (id)getFirstDataItem;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (id)getCellProxyByKey:(id)arg1;
- (void)addCellProxy:(id)arg1;
- (void)initLogicAndViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
