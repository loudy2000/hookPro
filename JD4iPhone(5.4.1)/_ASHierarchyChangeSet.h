//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableArray;

@interface _ASHierarchyChangeSet : NSObject
{
    _Bool _completed;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_reloadedSections;
    NSMutableArray *_insertItemChanges;
    NSMutableArray *_deleteItemChanges;
    NSMutableArray *_reloadItemChanges;
    NSMutableArray *_insertSectionChanges;
    NSMutableArray *_deleteSectionChanges;
    NSMutableArray *_reloadSectionChanges;
}

@property(readonly, nonatomic) NSMutableArray *reloadSectionChanges; // @synthesize reloadSectionChanges=_reloadSectionChanges;
@property(readonly, nonatomic) NSMutableArray *deleteSectionChanges; // @synthesize deleteSectionChanges=_deleteSectionChanges;
@property(readonly, nonatomic) NSMutableArray *insertSectionChanges; // @synthesize insertSectionChanges=_insertSectionChanges;
@property(readonly, nonatomic) NSMutableArray *reloadItemChanges; // @synthesize reloadItemChanges=_reloadItemChanges;
@property(readonly, nonatomic) NSMutableArray *deleteItemChanges; // @synthesize deleteItemChanges=_deleteItemChanges;
@property(readonly, nonatomic) NSMutableArray *insertItemChanges; // @synthesize insertItemChanges=_insertItemChanges;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSIndexSet *reloadedSections; // @synthesize reloadedSections=_reloadedSections;
@property(readonly, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(readonly, nonatomic) NSIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
- (void).cxx_destruct;
- (void)_sortAndCoalesceChangeArrays;
- (_Bool)_ensureCompleted;
- (_Bool)_ensureNotCompleted;
- (void)reloadSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)reloadItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)insertSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)deleteSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)deleteItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (long long)newSectionForOldSection:(long long)arg1;
- (id)itemChangesOfType:(long long)arg1;
- (id)sectionChangesOfType:(long long)arg1;
- (void)markCompleted;
- (id)init;

@end
