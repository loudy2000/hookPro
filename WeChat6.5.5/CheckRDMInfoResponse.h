//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString, WxaAppBaseResponse;

__attribute__((visibility("hidden")))
@interface CheckRDMInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *dowloadMd5; // @dynamic dowloadMd5;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(nonatomic) _Bool hasNewVersion; // @dynamic hasNewVersion;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end
