//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface WCBizImageBrowseItem : NSObject
{
    NSString *m_nsImgUrl;
    UIImage *m_nsThumbImage;
    NSData *m_ndImgData;
}

@property(retain, nonatomic) UIImage *m_nsThumbImage; // @synthesize m_nsThumbImage;
@property(retain, nonatomic) NSString *m_nsImgUrl; // @synthesize m_nsImgUrl;
@property(retain, nonatomic) NSData *m_ndImgData; // @synthesize m_ndImgData;
- (void).cxx_destruct;
- (void)dealloc;

@end

