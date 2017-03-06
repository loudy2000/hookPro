//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBSNSBatOperationResultItem : TBJSONModel
{
    _Bool _isAllSuccess;	// 8 = 0x8
    NSArray *_result;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    unsigned long long _createrId;	// 32 = 0x20
    unsigned long long _id;	// 40 = 0x28
    NSString *_commenterPic;	// 48 = 0x30
    NSString *_commenterNick;	// 56 = 0x38
    NSString *_extSymbol;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(retain, nonatomic) NSString *commenterNick; // @synthesize commenterNick=_commenterNick;
@property(retain, nonatomic) NSString *commenterPic; // @synthesize commenterPic=_commenterPic;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned long long createrId; // @synthesize createrId=_createrId;
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(nonatomic) _Bool isAllSuccess; // @synthesize isAllSuccess=_isAllSuccess;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
