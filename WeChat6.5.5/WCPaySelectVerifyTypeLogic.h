//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt-Protocol.h"
#import "WCPaySelectVerifyTypeViewControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WCPaySelectVerifyTypeLogic : WCPayControlLogic <WCPaySelectVerifyTypeViewControllerDelegate, IWCPayControlLogicExt>
{
    int _scene;
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)DirectBindCard;
- (void)OnBack;
- (void)OnSelectBindCardVerify;
- (void)OnSelectRealnameVerify;
- (void)OnSelectBindCard;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
