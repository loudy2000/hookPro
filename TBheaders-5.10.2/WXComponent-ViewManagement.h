//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@interface WXComponent (ViewManagement)
- (void)_unloadView;
- (void)_updateViewStyles:(id)arg1;
- (void)_initViewPropertyWithStyles:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)viewWillLoad;
- (void)moveToSuperview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromSuperview;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isViewLoaded;
- (id)loadView;
@end
