//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailPresaleModel : TBJSONModel
{
    NSString *_text;	// 8 = 0x8
    NSString *_extraText;	// 16 = 0x10
    NSString *_tip;	// 24 = 0x18
    long long _startTime;	// 32 = 0x20
    long long _endTime;	// 40 = 0x28
    unsigned long long _status;	// 48 = 0x30
    long long _orderedItemAmount;	// 56 = 0x38
}

@property(nonatomic) long long orderedItemAmount; // @synthesize orderedItemAmount=_orderedItemAmount;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *extraText; // @synthesize extraText=_extraText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

