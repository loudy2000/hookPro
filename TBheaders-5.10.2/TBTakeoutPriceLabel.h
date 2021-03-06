//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, UIColor;

@interface TBTakeoutPriceLabel : UILabel
{
    _Bool _truncate;	// 8 = 0x8
    _Bool _needSpace;	// 9 = 0x9
    _Bool _showPriceSymbol;	// 10 = 0xa
    double _percentOfFontSize;	// 16 = 0x10
    NSString *_subtext;	// 24 = 0x18
    UIColor *_subtextColor;	// 32 = 0x20
    double _subtextPercentOfFontSize;	// 40 = 0x28
}

@property(nonatomic) double subtextPercentOfFontSize; // @synthesize subtextPercentOfFontSize=_subtextPercentOfFontSize;
@property(retain, nonatomic) UIColor *subtextColor; // @synthesize subtextColor=_subtextColor;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(nonatomic) _Bool showPriceSymbol; // @synthesize showPriceSymbol=_showPriceSymbol;
@property(nonatomic) _Bool needSpace; // @synthesize needSpace=_needSpace;
@property(nonatomic) _Bool truncate; // @synthesize truncate=_truncate;
@property(nonatomic) double percentOfFontSize; // @synthesize percentOfFontSize=_percentOfFontSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)yPositionWithContentSize:(struct CGSize)arg1;
- (double)xPositionWithContentSize:(struct CGSize)arg1;
- (id)attributedStringWithText:(id)arg1;
- (id)attributedStringWithSubText:(id)arg1;
- (id)formatPrice:(id)arg1;
- (void)setText:(id)arg1;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1;

@end

