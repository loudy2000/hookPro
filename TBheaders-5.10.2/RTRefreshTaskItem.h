//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RTRefreshTaskItem : NSObject
{
    NSString *_updateGroup;	// 8 = 0x8
    NSString *_behaviorDescription;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *behaviorDescription; // @synthesize behaviorDescription=_behaviorDescription;
@property(copy, nonatomic) NSString *updateGroup; // @synthesize updateGroup=_updateGroup;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
