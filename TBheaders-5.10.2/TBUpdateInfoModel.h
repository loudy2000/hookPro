//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBUpdateInfoModel : TBJSONModel
{
    NSString *_name;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_info;	// 32 = 0x20
    NSString *_size;	// 40 = 0x28
    NSString *_pri;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *pri; // @synthesize pri=_pri;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

