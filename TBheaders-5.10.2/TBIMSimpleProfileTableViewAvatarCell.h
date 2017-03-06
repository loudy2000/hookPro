//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, TBIMSimpleProfileBizModel, UIImageView, UILabel, UIView;

@interface TBIMSimpleProfileTableViewAvatarCell : UITableViewCell
{
    UIView *_containerView;	// 8 = 0x8
    UIImageView *_avatarImageView;	// 16 = 0x10
    UIImageView *_taoFriendImageView;	// 24 = 0x18
    UILabel *_mainLabel;	// 32 = 0x20
    UILabel *_genderLabel;	// 40 = 0x28
    UILabel *_subLabel1;	// 48 = 0x30
    UILabel *_subLabel2;	// 56 = 0x38
    UILabel *_arrowLabel;	// 64 = 0x40
    CALayer *_bottomSeparator;	// 72 = 0x48
    CALayer *_bottomShadowSeparator;	// 80 = 0x50
    CDUnknownBlockType _tapProfileBlock;	// 88 = 0x58
    TBIMSimpleProfileBizModel *_simpleProfileModel;	// 96 = 0x60
}

+ (double)IMSimpleProfileTableViewAvatarCellHeight;
@property(nonatomic) __weak TBIMSimpleProfileBizModel *simpleProfileModel; // @synthesize simpleProfileModel=_simpleProfileModel;
@property(copy, nonatomic) CDUnknownBlockType tapProfileBlock; // @synthesize tapProfileBlock=_tapProfileBlock;
@property(retain, nonatomic) CALayer *bottomShadowSeparator; // @synthesize bottomShadowSeparator=_bottomShadowSeparator;
@property(retain, nonatomic) CALayer *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *subLabel2; // @synthesize subLabel2=_subLabel2;
@property(retain, nonatomic) UILabel *subLabel1; // @synthesize subLabel1=_subLabel1;
@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *taoFriendImageView; // @synthesize taoFriendImageView=_taoFriendImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateIMSimpleProfileModel:(id)arg1 tapProfileBlock:(CDUnknownBlockType)arg2 finishiBlcok:(CDUnknownBlockType)arg3;
- (void)tapAvatarCellGecognizer:(id)arg1;
- (void)initStyle;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
