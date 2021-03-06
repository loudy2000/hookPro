//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "LVProtocal-Protocol.h"

@class LView, NSString;

@interface LVButton : UIButton <LVProtocal>
{
    LView *_lv_lview;	// 8 = 0x8
    struct _LVUserDataInfo *_lv_userData;	// 16 = 0x10
    unsigned long long _lv_align;	// 24 = 0x18
}

+ (int)classDefine:(struct lv_State *)arg1;
+ (void)setDefaultStyle:(Class)arg1;
@property(nonatomic) unsigned long long lv_align; // @synthesize lv_align=_lv_align;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
- (void).cxx_destruct;
- (void)setImageUrl:(id)arg1 placeholder:(id)arg2 state:(unsigned long long)arg3;
- (void)setWebImageUrl:(id)arg1 forState:(unsigned long long)arg2 finished:(CDUnknownBlockType)arg3;
- (void)lvButtonCallBack;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init:(struct lv_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

