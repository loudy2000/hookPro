//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol.h"

@class JDImageView, NSString, TTTFloorModel, TTTScratchView, UIButton;

@interface TTTDrawScratchView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_drawBackImageView;
    UIButton *_ruleButton;
    TTTScratchView *_scratchView;
    TTTFloorModel *_floorModel;
}

@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) TTTScratchView *scratchView; // @synthesize scratchView=_scratchView;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) JDImageView *drawBackImageView; // @synthesize drawBackImageView=_drawBackImageView;
- (void).cxx_destruct;
- (struct CGRect)scratchViewFrame;
- (struct CGRect)ruleButtonFrame;
- (void)showOrHideRuleButton;
- (void)clickRuleButton;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
