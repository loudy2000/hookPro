//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RangerAirPortCenter : NSObject
{
    NSString *_documentPath;	// 8 = 0x8
    _Bool _airPortEnable;	// 16 = 0x10
}

+ (void)diable;
+ (id)shareInstace;
- (void).cxx_destruct;
- (id)airPortWithFilePath:(id)arg1;
- (id)fileUrlFromConfigWithOriginFileUrl:(id)arg1 testName:(id)arg2 bucketName:(id)arg3 zipFileUrl:(id)arg4;
- (id)rootFilePath:(id)arg1;
- (void)onSettingCenterNotification:(id)arg1;
- (void)bindSettingCenter;
- (void)dealloc;
- (void)clearAllCaches;
- (id)init;
- (_Bool)isEnable;
- (void)setEnable:(_Bool)arg1;

@end
