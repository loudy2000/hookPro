//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface oreo : NSObject
{
}

+ (void)registerComponent:(id)arg1 withName:(id)arg2;
+ (void)refreshView:(id)arg1 withData:(id)arg2;
+ (void)refreshView:(id)arg1 withData:(id)arg2 clearOldData:(_Bool)arg3;
+ (void)getViewByConfig:(id)arg1 protocolName:(id)arg2 data:(id)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1 withParam:(id)arg2;
+ (void)getViewByName:(id)arg1 data:(id)arg2 containerSize:(struct CGSize)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)getViewByName:(id)arg1 data:(id)arg2 finish:(CDUnknownBlockType)arg3;
+ (id)hasModule:(id)arg1 atPage:(id)arg2;

@end
