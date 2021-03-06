//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TBTakeoutStoreTabBar : UIView
{
    long long _selectedIndex;	// 8 = 0x8
    CDUnknownBlockType _selectedBlock;	// 16 = 0x10
    UIView *_selectedLine;	// 24 = 0x18
    NSArray *_segments;	// 32 = 0x20
    double _segmentWidth;	// 40 = 0x28
}

+ (id)tabbarWithSegments:(id)arg1;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) UIView *selectedLine; // @synthesize selectedLine=_selectedLine;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setupViews;
- (void)fromSegment:(id)arg1 toSegment:(id)arg2 withAnimation:(_Bool)arg3;
- (void)didSelectedTab:(long long)arg1 withAnimation:(_Bool)arg2;
@property(readonly, nonatomic) long long count;
- (id)initWithSegments:(id)arg1;

@end

