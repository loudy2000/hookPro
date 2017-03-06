//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface JHSNotifyStatus : NSObject
{
    NSDictionary *_model;	// 8 = 0x8
    NSMutableDictionary *_history;	// 16 = 0x10
}

+ (id)notifyStautsWithModel:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *history; // @synthesize history=_history;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)presentNow;
- (_Bool)checkNeedsPresentNow;
- (double)timeOfLastPresent;
- (double)intervalSinceLastPresent;
- (long long)countOfPresentTotal;
- (long long)countOfPresentToday;
- (void)store;
- (void)resetTodayIfNeeded;
- (void)load;
- (id)storeKey;
@property(readonly) int notifyType; // @dynamic notifyType;
@property(readonly) NSDictionary *trackParams;
@property(readonly) _Bool needNotice; // @dynamic needNotice;
@property(readonly) NSString *actionUrl; // @dynamic actionUrl;
@property(readonly) NSString *imageUrl; // @dynamic imageUrl;
@property(readonly) long long presentLimitPerDay; // @dynamic presentLimitPerDay;
@property(readonly) long long presentLimit; // @dynamic presentLimit;
@property(readonly) long long notifyInterval; // @dynamic notifyInterval;
@property(readonly) NSString *notifyId; // @dynamic notifyId;

@end
