//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImage, UIView;

@interface JDXiaoBingCheckboxView : UIImageView <UIGestureRecognizerDelegate>
{
    _Bool _isSelelcted;
    UIImage *_selectImage;
    UIImage *_unselectImage;
    UIView *_converView;
    UIImageView *_checkBoxImageView;
    SEL _tapSelector;
}

@property(nonatomic) SEL tapSelector; // @synthesize tapSelector=_tapSelector;
@property(readonly, nonatomic) UIImageView *checkBoxImageView; // @synthesize checkBoxImageView=_checkBoxImageView;
@property(nonatomic) _Bool isSelelcted; // @synthesize isSelelcted=_isSelelcted;
@property(retain, nonatomic) UIView *converView; // @synthesize converView=_converView;
@property(retain, nonatomic) UIImage *unselectImage; // @synthesize unselectImage=_unselectImage;
@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

