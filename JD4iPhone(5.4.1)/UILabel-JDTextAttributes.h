//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "JDTextAttributesDelegate.h"

@class JDTextAttributes, NSString;

@interface UILabel (JDTextAttributes) <JDTextAttributesDelegate>
- (void)textAttributes:(id)arg1 didChangeAttribute:(id)arg2 withValue:(id)arg3;
@property(readonly, nonatomic) JDTextAttributes *jd_textAttributes;
@property(copy, nonatomic) NSString *jd_text;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

