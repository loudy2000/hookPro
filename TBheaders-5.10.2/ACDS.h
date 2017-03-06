//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ACDS : NSObject
{
}

+ (_Bool)ready;
+ (id)getConfig:(id)arg1;
+ (id)getSchema:(id)arg1;
+ (id)kAliveForDs:(id)arg1 userId:(id)arg2;
+ (void)subscribeAndListening:(id)arg1 userId:(id)arg2 result:(CDUnknownBlockType)arg3 listener:(CDUnknownBlockType)arg4;
+ (void)autoActiveDatasource:(id)arg1 userId:(id)arg2 concurrent:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)needAct:(id)arg1 byUserId:(id)arg2;
+ (void)expire:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)alive:(id)arg1 byUserId:(id)arg2;
+ (_Bool)isSync:(id)arg1 byUserId:(id)arg2;
+ (void)checkAllDSExpiredByArray:(id)arg1 byIndex:(int)arg2 byUserId:(id)arg3 toResult:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)getAllAvailableDSByUserId:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)bizInitData:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)resumeReceiveMessage:(id)arg1 byUserId:(id)arg2;
+ (void)addSyncEventListener:(id)arg1 withKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3 withTargetThread:(id)arg4;
+ (_Bool)removeSyncEventListener:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (_Bool)removeSyncEventListener:(id)arg1;
+ (id)addSyncEventListener:(id)arg1 withListener:(CDUnknownBlockType)arg2;
+ (void)removeSubscribe:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)subscribeMessage:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)notificationNameForACDSInitDataTask;
+ (id)notificationNameForACDSInitData;
+ (void)bindOfflineService;
+ (void)bindService;
+ (void)setCleanDB:(_Bool)arg1;
+ (void)registerSessionInvalidNotifyExtHandler:(id)arg1;
+ (void)setLockDic:(id)arg1;
+ (void)setLoginToken:(id)arg1;
+ (void)setCurrentUserID:(id)arg1;
+ (void)setAppUserLoginEventName:(id)arg1;
+ (void)setAppTTID:(id)arg1;
+ (void)setAppVersion:(id)arg1;
+ (void)setAppKey:(id)arg1;
+ (void)setAppEnvironment:(int)arg1;
+ (int)appEnvironment;
+ (_Bool)setupACDS:(id)arg1;

@end
