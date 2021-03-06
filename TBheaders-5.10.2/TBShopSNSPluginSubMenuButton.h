//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, TBShopSNSPluginMenuItem;
@protocol TBSNSPluginSubMenuButtonDelegate;

@interface TBShopSNSPluginSubMenuButton : UIButton
{
    TBShopSNSPluginMenuItem *_data;	// 8 = 0x8
    NSString *_levelFlag;	// 16 = 0x10
    id <TBSNSPluginSubMenuButtonDelegate> _delegate;	// 24 = 0x18
    NSString *_eventListener;	// 32 = 0x20
    NSString *_eventType;	// 40 = 0x28
    NSString *_eventParam;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *eventParam; // @synthesize eventParam=_eventParam;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *eventListener; // @synthesize eventListener=_eventListener;
@property(nonatomic) id <TBSNSPluginSubMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *levelFlag; // @synthesize levelFlag=_levelFlag;
@property(retain, nonatomic) TBShopSNSPluginMenuItem *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)clickedEvent:(id)arg1;
- (void)initialize:(id)arg1 withIconSize:(struct CGSize)arg2 withTextColor:(id)arg3 withTextFontSize:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withData:(id)arg2 withIcon:(id)arg3 withIconSize:(struct CGSize)arg4 withTextColor:(id)arg5 withTextFontSize:(double)arg6 withDelegate:(id)arg7;

@end

