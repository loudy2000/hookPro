//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDBaseMessage, NSArray, NSDictionary, NSIndexPath, NSString, UIScrollView;

@protocol MDChatBaseHanderDelegate <NSObject>
- (void)refreshTopbar;
- (struct CGRect)converChatImageFrameToWindowAtIndexPath:(NSIndexPath *)arg1;
- (void)showReleyAlert:(NSString *)arg1;
- (void)goToBack;
- (void)didLoseNetwork:(_Bool)arg1;
- (void)playVideo:(MDBaseMessage *)arg1;
- (void)removeHud;
- (void)addHud;
- (void)showHud;
- (void)didAimAtOneInView:(NSString *)arg1 momoID:(NSString *)arg2;
- (void)handlePhoneNumber:(NSString *)arg1;
- (void)showMenu:(struct CGRect)arg1 messageId:(NSString *)arg2;
- (void)refreshWidget;
- (void)goToUserProfileWithMsg:(MDBaseMessage *)arg1;
- (_Bool)isNavTitleTwinkling;
- (void)setMudViewStop;
- (void)setMudViewRun;
- (void)showMessageDensityAlert;
- (void)goToMyProfile;
- (_Bool)getIsShop;
- (void)setTitleLabel:(NSString *)arg1;
- (void)setNavTitleTwinking:(_Bool)arg1;
- (void)refreshConterUnread;
- (void)showNewMessageTip;
- (void)scrollToBottomDelayed:(_Bool)arg1;
- (void)scrollToBottom:(_Bool)arg1;
- (_Bool)checkScreen;
- (void)refreshCellIndex:(long long)arg1;
- (void)refreshSurprise:(NSString *)arg1;
- (void)refreshDeleteMsg;
- (void)refreshDidRecvRevoke;
- (void)refreshMerge;
- (void)refreshImmediately;
- (unsigned long long)currentCate;
- (NSString *)currentTargetID;
- (void)willSendMsg;

@optional
- (void)showHeadMenu:(struct CGRect)arg1 messageId:(NSString *)arg2;
- (void)refreshTopBarWithGroupVideoAnchors:(NSArray *)arg1 memberCount:(long long)arg2 errorCode:(long long)arg3;
- (void)didRecvGiftMsgid:(NSString *)arg1;
- (void)didFinishSpecialFriendRequest:(_Bool)arg1;
- (void)didStatusTypeResponse:(NSDictionary *)arg1;
- (void)refreshMultiRelationType:(int)arg1;
- (void)refreshGroupRole:(int)arg1;
- (void)tableWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)tableWillBeginDragging:(UIScrollView *)arg1;
- (void)tableDidScroll:(UIScrollView *)arg1;
@end
