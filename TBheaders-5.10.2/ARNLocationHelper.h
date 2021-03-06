//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARNTimer, TBLocationOption;

@interface ARNLocationHelper : NSObject
{
    _Bool _shouldUpdate;	// 8 = 0x8
    _Bool _pauseUpdateLocation;	// 9 = 0x9
    int _updateInterval;	// 12 = 0xc
    TBLocationOption *_option;	// 16 = 0x10
    CDUnknownBlockType _ARNLocationBlock;	// 24 = 0x18
    ARNTimer *_timer;	// 32 = 0x20
}

+ (void)getCurLocation:(CDUnknownBlockType)arg1 retryNum:(int)arg2;
+ (void)getCurLocation:(CDUnknownBlockType)arg1;
+ (void)choicePathWithOrigin:(id)arg1 destinations:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)getNavigationPathWithOrigin:(id)arg1 destination:(id)arg2 result:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool pauseUpdateLocation; // @synthesize pauseUpdateLocation=_pauseUpdateLocation;
@property(nonatomic) _Bool shouldUpdate; // @synthesize shouldUpdate=_shouldUpdate;
@property(retain, nonatomic) ARNTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType ARNLocationBlock; // @synthesize ARNLocationBlock=_ARNLocationBlock;
@property(retain, nonatomic) TBLocationOption *option; // @synthesize option=_option;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
- (void).cxx_destruct;
- (void)requestLocation;
- (void)_startUpdate;
- (_Bool)isLocationServiceEnabled;
- (void)resumeNavigation;
- (void)pauseNavigation;
- (void)stopUpdate;
- (void)startUpdate:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

