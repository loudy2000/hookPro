//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MLLeftBackGroundView : UIView
{
    UIView *_effectView;
    UIView *_topMaskbackgroundView;
    UIView *_bottomMaskbackgroundView;
}

@property(retain, nonatomic) UIView *bottomMaskbackgroundView; // @synthesize bottomMaskbackgroundView=_bottomMaskbackgroundView;
@property(retain, nonatomic) UIView *topMaskbackgroundView; // @synthesize topMaskbackgroundView=_topMaskbackgroundView;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;
- (void)hideAnimation;
- (void)showAnimation;
- (void)changeMaskViewFrame:(double)arg1;
- (void)CreateUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

