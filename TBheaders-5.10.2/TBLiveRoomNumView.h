//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TBLiveRoomNumView : UIView
{
    UILabel *_tagLabel;	// 8 = 0x8
    UILabel *_roomNum;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *roomNum; // @synthesize roomNum=_roomNum;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;
- (void)refreshWithNum:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
