//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface GDMDarenMenuView : UIView
{
    UIView *_bkView;	// 8 = 0x8
    NSArray *_menuItemArray;	// 16 = 0x10
    NSMutableArray *_menuViews;	// 24 = 0x18
}

@property(nonatomic) NSMutableArray *menuViews; // @synthesize menuViews=_menuViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)buildItemViews;
- (id)initWithFrame:(struct CGRect)arg1 menuItemArray:(id)arg2;

@end
