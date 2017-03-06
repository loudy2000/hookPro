//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXASDisplayView.h"

@class NSString, UIImageView, UILabel;

@interface NXIconLabel : NXASDisplayView
{
    UILabel *_textLabel;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    NSString *_iconURL;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    double _paddingTop;	// 40 = 0x28
    double _paddingLeft;	// 48 = 0x30
    double _paddingBottom;	// 56 = 0x38
    double _paddingRight;	// 64 = 0x40
}

@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
