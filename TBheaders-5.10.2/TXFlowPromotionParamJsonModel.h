//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TXFlowPromotionParamJsonModel : TBJSONModel
{
    NSString *_giftCode;	// 8 = 0x8
    NSString *_giftDesc;	// 16 = 0x10
    NSString *_minusCode;	// 24 = 0x18
    NSString *_minusMoney;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *minusMoney; // @synthesize minusMoney=_minusMoney;
@property(copy, nonatomic) NSString *minusCode; // @synthesize minusCode=_minusCode;
@property(copy, nonatomic) NSString *giftDesc; // @synthesize giftDesc=_giftDesc;
@property(copy, nonatomic) NSString *giftCode; // @synthesize giftCode=_giftCode;
- (void).cxx_destruct;

@end
