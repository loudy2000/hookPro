//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDSettingBasicInfoViewModel : NSObject
{
    _Bool _isNewFlag;
    NSString *_viewItemId;
    double _upTime;
    NSString *_iconStr;
    NSString *_headImageUrl;
    NSString *_desText;
    long long _badgeCount;
    id _target;
    SEL _viewClickSeletor;
    NSString *_clickGotoStr;
}

@property(copy, nonatomic) NSString *clickGotoStr; // @synthesize clickGotoStr=_clickGotoStr;
@property(nonatomic) SEL viewClickSeletor; // @synthesize viewClickSeletor=_viewClickSeletor;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool isNewFlag; // @synthesize isNewFlag=_isNewFlag;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) NSString *desText; // @synthesize desText=_desText;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *iconStr; // @synthesize iconStr=_iconStr;
@property(nonatomic) double upTime; // @synthesize upTime=_upTime;
@property(retain, nonatomic) NSString *viewItemId; // @synthesize viewItemId=_viewItemId;
- (void)dealloc;

@end

