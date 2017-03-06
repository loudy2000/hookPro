//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, WVJSBridgeMonitorStat, WVPagePerformance, WVStatusCodeStat, WVWebReceiveMemoryWarning, WVWebViewStartMonitorStat, WVWebViewVisitMonitorStat;

@protocol WVH5MonitorProtocol <NSObject>
- (void)jsBridgeInvokeError:(NSError *)arg1 arg:(NSString *)arg2;
- (void)jsBridgeInvoke:(WVJSBridgeMonitorStat *)arg1;
- (void)receiveMemoryWarning:(WVWebReceiveMemoryWarning *)arg1;
- (void)pageEmpty:(NSError *)arg1 arg:(NSString *)arg2;
- (void)pageFinishLoad:(WVPagePerformance *)arg1;
- (void)pageOccurNativeError:(NSError *)arg1 arg:(NSString *)arg2;
- (void)receiveStatusCode:(WVStatusCodeStat *)arg1;
- (void)webViewStart:(WVWebViewStartMonitorStat *)arg1;
- (void)webViewVisit:(WVWebViewVisitMonitorStat *)arg1;
@end
