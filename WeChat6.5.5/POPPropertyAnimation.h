//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimation.h"

@class POPAnimatableProperty;

__attribute__((visibility("hidden")))
@interface POPPropertyAnimation : POPAnimation
{
}

- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)currentValue;
@property(copy, nonatomic) id toValue;
@property(copy, nonatomic) id fromValue;
- (void)setProgressMarkers:(id)arg1;
- (id)progressMarkers;
@property(retain, nonatomic) POPAnimatableProperty *property;
@property(nonatomic) unsigned long long clampMode;
@property(nonatomic) double roundingFactor;
@property(nonatomic, getter=isAdditive) _Bool additive;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
