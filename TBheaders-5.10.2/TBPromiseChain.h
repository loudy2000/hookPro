//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBPromiseChain : NSObject
{
    NSMutableArray *_thenCallBackBlocks;	// 8 = 0x8
    CDUnknownBlockType _fulfiller;	// 16 = 0x10
    CDUnknownBlockType _rejecter;	// 24 = 0x18
    id _result;	// 32 = 0x20
    TBPromiseChain *_next;	// 40 = 0x28
    CDUnknownBlockType _recursiveFulfiller;	// 48 = 0x30
}

+ (id)all:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)promiseChainWithValue:(id)arg1;
+ (id)promiseChainWithTask:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType recursiveFulfiller; // @synthesize recursiveFulfiller=_recursiveFulfiller;
@property(retain, nonatomic) TBPromiseChain *next; // @synthesize next=_next;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) __weak CDUnknownBlockType rejecter; // @synthesize rejecter=_rejecter;
@property(nonatomic) __weak CDUnknownBlockType fulfiller; // @synthesize fulfiller=_fulfiller;
@property(retain, nonatomic) NSMutableArray *thenCallBackBlocks; // @synthesize thenCallBackBlocks=_thenCallBackBlocks;
- (void).cxx_destruct;
- (id)safelyCallBlock:(id)arg1 withArg:(id)arg2;
- (void)resolveWithResult:(id)arg1;
- (id)thenBodyWith:(id)arg1 failBlock:(id)arg2;
- (CDUnknownBlockType)successThen;
- (CDUnknownBlockType)then;
- (void)dealloc;
- (id)init;

@end

