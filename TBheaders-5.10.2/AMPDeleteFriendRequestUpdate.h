//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSString;

@interface AMPDeleteFriendRequestUpdate : AMPDataUpdate
{
    NSString *_msgId;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (id)initWithRequestId:(id)arg1;

@end

