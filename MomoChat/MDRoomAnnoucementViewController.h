//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDRoomCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class MDTextView, NSString, UILabel, UITableView, UIView;

@interface MDRoomAnnoucementViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, MDRoomCellDelegate>
{
    _Bool _hidden;
    _Bool _isforbidden;
    UITableView *_tableList;
    UIView *_tableHeaderView;
    UILabel *_labelTitleWordCount;
    MDTextView *_textView;
    NSString *_roomid;
    NSString *_sign;
}

@property(nonatomic) _Bool isforbidden; // @synthesize isforbidden=_isforbidden;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(retain, nonatomic) MDTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *labelTitleWordCount; // @synthesize labelTitleWordCount=_labelTitleWordCount;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableList; // @synthesize tableList=_tableList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)settingError:(id)arg1;
- (void)settingFail:(id)arg1;
- (void)settingSuccess:(id)arg1;
- (void)settingRoom:(id)arg1 sign:(id)arg2 hidden:(_Bool)arg3 forbidden:(_Bool)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cell:(id)arg1 switchValueDidChanged:(_Bool)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)updateCell:(id)arg1 atRow:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doSave;
- (void)doBack;
- (void)caculateWorldCount;
- (void)resetRoomid:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

