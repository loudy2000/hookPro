//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface SynCartParamFactory : NSObject
{
    _Bool _shouldResponse;
    NSArray *_operateItems;
    NSArray *_modifyItems;
    NSDictionary *_warrantyInfo;
    long long _functionType;
    NSMutableArray *_theSkus;
    NSMutableArray *_thePacks;
    NSMutableArray *_opTheSkus;
    NSMutableArray *_opThePacks;
}

@property(retain, nonatomic) NSMutableArray *opThePacks; // @synthesize opThePacks=_opThePacks;
@property(retain, nonatomic) NSMutableArray *opTheSkus; // @synthesize opTheSkus=_opTheSkus;
@property(retain, nonatomic) NSMutableArray *thePacks; // @synthesize thePacks=_thePacks;
@property(retain, nonatomic) NSMutableArray *theSkus; // @synthesize theSkus=_theSkus;
@property(nonatomic) long long functionType; // @synthesize functionType=_functionType;
@property(nonatomic) _Bool shouldResponse; // @synthesize shouldResponse=_shouldResponse;
@property(retain, nonatomic) NSDictionary *warrantyInfo; // @synthesize warrantyInfo=_warrantyInfo;
@property(retain, nonatomic) NSArray *modifyItems; // @synthesize modifyItems=_modifyItems;
@property(retain, nonatomic) NSArray *operateItems; // @synthesize operateItems=_operateItems;
- (void).cxx_destruct;
- (id)yanbaoListParams;
- (void)buildJDPackModelParam:(id)arg1;
- (void)buildPackModelParam:(id)arg1;
- (void)buildPromotionParam:(id)arg1;
- (id)warrantyParams;
- (id)buildDataWithItems:(id)arg1 ybInfo:(id)arg2 carttype:(id)arg3;
- (id)buildRequestParamsWithItems:(id)arg1 modifyItems:(id)arg2 ybInfo:(id)arg3 carttype:(id)arg4;
- (id)finalRequestParamsWithItems:(id)arg1 modifyItems:(id)arg2 ybItems:(id)arg3 cartType:(id)arg4 response:(_Bool)arg5;

@end

