//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRatePublishTableView.h"

@interface TBRatePublishTableView (AutoresizeKeyboard)
- (id)findFirstResponderInView:(id)arg1 forWindow:(id)arg2;
- (id)ancestorOrSelfWithClass:(Class)arg1 forView:(id)arg2;
- (void)rateScrollFirstResponderIntoTableView;
- (id)rateViewController;
- (void)rateKeyboardWillDisappear:(_Bool)arg1 withBounds:(struct CGRect)arg2;
- (void)rateKeyboardWillAppear:(_Bool)arg1 withBounds:(struct CGRect)arg2;
- (void)setRateAutoresizeKeyboard:(_Bool)arg1;
- (void)rateKeyboardWillHide:(id)arg1;
- (void)rateKeyboardWillShow:(id)arg1;
- (void)rateKeyboardWillHideOLD:(id)arg1;
- (void)rateKeyboardWillShowOLD:(id)arg1;
- (_Bool)isRateViewControllerAppearing;
- (void)setRateAutosizeingBounds:(id)arg1;
- (id)rateAutosizeingBounds;
@end

