//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JHSSortingUnit : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    double _lastVisitTime;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
}

+ (id)loadFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) double lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)dictionary;
- (id)init;

@end
