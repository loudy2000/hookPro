//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString;
@protocol WCPlainTextTipFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface WCPlainTextTipFullScreenView : MMUIView <CAAnimationDelegate>
{
    id <WCPlainTextTipFullScreenViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WCPlainTextTipFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showAnimation;
- (void)layoutSubviews;
- (id)init;
- (void)initView;
- (struct CGRect)getBgImgViewFrameWithImgSize:(struct CGSize)arg1;
- (void)onIKnowItBtnClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
