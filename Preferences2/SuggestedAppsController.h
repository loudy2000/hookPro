//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface SuggestedAppsController : NSObject
{
    NSArray *_specifiers;
}

- (id)appStore:(id)arg1;
- (void)setAppStore:(id)arg1 specifier:(id)arg2;
- (id)myApps:(id)arg1;
- (void)setMyApps:(id)arg1 specifier:(id)arg2;
- (void)reloadSpecifiers;
@property(readonly, retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (void)dealloc;

@end
