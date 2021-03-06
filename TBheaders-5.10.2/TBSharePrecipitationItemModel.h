//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBSharePrecipitationItemModel : TBJSONModel
{
    NSString *_rowKey;	// 8 = 0x8
    NSString *_userId;	// 16 = 0x10
    NSString *_logoUrl;	// 24 = 0x18
    NSString *_nick;	// 32 = 0x20
    NSString *_createTime;	// 40 = 0x28
    NSString *_channel;	// 48 = 0x30
    NSString *_shareUniqueId;	// 56 = 0x38
    NSString *_shareBizId;	// 64 = 0x40
    unsigned long long _contentType;	// 72 = 0x48
    NSString *_shareTitle;	// 80 = 0x50
    NSString *_shareText;	// 88 = 0x58
    NSString *_shareImageUrl;	// 96 = 0x60
    NSString *_shareUrl;	// 104 = 0x68
    NSString *_itemPrice;	// 112 = 0x70
    NSString *_rankUrl;	// 120 = 0x78
    long long _visitorsCount;	// 128 = 0x80
    NSArray *_recentVisitors;	// 136 = 0x88
    double _timeStringLength;	// 144 = 0x90
    double _cellHeight;	// 152 = 0x98
    double _visitorContainerHeight;	// 160 = 0xa0
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) double visitorContainerHeight; // @synthesize visitorContainerHeight=_visitorContainerHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double timeStringLength; // @synthesize timeStringLength=_timeStringLength;
@property(copy, nonatomic) NSArray *recentVisitors; // @synthesize recentVisitors=_recentVisitors;
@property(nonatomic) long long visitorsCount; // @synthesize visitorsCount=_visitorsCount;
@property(copy, nonatomic) NSString *rankUrl; // @synthesize rankUrl=_rankUrl;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *shareBizId; // @synthesize shareBizId=_shareBizId;
@property(copy, nonatomic) NSString *shareUniqueId; // @synthesize shareUniqueId=_shareUniqueId;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *rowKey; // @synthesize rowKey=_rowKey;
- (void).cxx_destruct;
- (void)initLocalVariable;
- (id)initWithJSONDictionary:(id)arg1;

@end

