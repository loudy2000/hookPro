//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDMultiInviteSourceHelper.h"

@class NSString;

@interface MDMultiInviteFeedHelper : NSObject <MDMultiInviteSourceHelper>
{
    _Bool _isShare;
    id <MDMultiInviteHelperDelegate> _delegate;
}

@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
@property(nonatomic) __weak id <MDMultiInviteHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)whenRightItemDidClicked;
- (void)didGetFriendList:(_Bool)arg1;
- (id)titleString:(long long)arg1;
- (long long)limitCount;
- (_Bool)rightItemEnableAlways;
- (long long)rightItemStyle;
- (id)selectedMomoids;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

