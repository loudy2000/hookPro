//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TMSearchResponseUpdations-Protocol.h"

@class NSDate, NSString, TMCCustomizeModule, TMCCustomizePage, TMSearchItemsContainer, TMSearchNoResultPrompt;

@interface ItemsSearchModel : NSObject <TMSearchResponseUpdations>
{
    NSString *_keywordOfPrevQuery;	// 8 = 0x8
    NSDate *_lastNewCellDate;	// 16 = 0x10
    unsigned long long _lastNewCellIdx;	// 24 = 0x18
    _Bool _transToFootprintsEnabled;	// 32 = 0x20
    _Bool _show_chainhint;	// 33 = 0x21
    TMSearchItemsContainer *_containerForList;	// 40 = 0x28
    TMSearchItemsContainer *_containerForWaterFlow;	// 48 = 0x30
    TMCCustomizePage *_customizeLandingPage;	// 56 = 0x38
    TMCCustomizeModule *_customizeAboveResult;	// 64 = 0x40
    TMSearchNoResultPrompt *_noResultPrompt;	// 72 = 0x48
    NSString *_argsForNewReq;	// 80 = 0x50
    long long _itemsSearchListStyle;	// 88 = 0x58
    NSString *_headerImage;	// 96 = 0x60
    NSString *_hongbao;	// 104 = 0x68
}

@property(copy, nonatomic) NSString *hongbao; // @synthesize hongbao=_hongbao;
@property(readonly, copy, nonatomic) NSString *headerImage; // @synthesize headerImage=_headerImage;
@property(readonly, nonatomic) _Bool show_chainhint; // @synthesize show_chainhint=_show_chainhint;
@property(readonly, nonatomic) long long itemsSearchListStyle; // @synthesize itemsSearchListStyle=_itemsSearchListStyle;
@property(readonly, copy, nonatomic) NSString *argsForNewReq; // @synthesize argsForNewReq=_argsForNewReq;
@property(readonly, nonatomic) _Bool transToFootprintsEnabled; // @synthesize transToFootprintsEnabled=_transToFootprintsEnabled;
@property(retain, nonatomic) TMSearchNoResultPrompt *noResultPrompt; // @synthesize noResultPrompt=_noResultPrompt;
@property(readonly, nonatomic) TMCCustomizeModule *customizeAboveResult; // @synthesize customizeAboveResult=_customizeAboveResult;
@property(readonly, nonatomic) TMCCustomizePage *customizeLandingPage; // @synthesize customizeLandingPage=_customizeLandingPage;
@property(readonly, nonatomic) TMSearchItemsContainer *containerForWaterFlow; // @synthesize containerForWaterFlow=_containerForWaterFlow;
@property(readonly, nonatomic) TMSearchItemsContainer *containerForList; // @synthesize containerForList=_containerForList;
- (void).cxx_destruct;
- (void)insertNewsInfoList:(id)arg1 toItems:(id)arg2 withSortRule:(id)arg3 filter:(id)arg4;
- (void)insertTMCCustomizeCellComponent:(id)arg1 toItems:(id)arg2 pageSize:(unsigned long long)arg3;
- (id)itemIdsStrFromItems:(id)arg1;
- (void)updateWithItemsSearchResponseFailed:(id)arg1 forRequest:(id)arg2;
- (void)updateItemsContainerWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)updateUnifyItemsContainerWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)updateWithItemsSearchResponse:(id)arg1 forRequest:(id)arg2;
- (void)switchListStyle;
- (void)clean;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

