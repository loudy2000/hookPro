//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKBridgeBase.h"

@class NSString;

@interface MDBridgeUI : MKBridgeBase
{
    NSString *_refreshJsCallBack;
}

@property(copy, nonatomic) NSString *refreshJsCallBack; // @synthesize refreshJsCallBack=_refreshJsCallBack;
- (void).cxx_destruct;
- (void)openWebDialog:(id)arg1;
- (void)refreshEnd:(id)arg1;
- (void)refresh:(id)arg1;
- (void)showMessage:(id)arg1;

@end
