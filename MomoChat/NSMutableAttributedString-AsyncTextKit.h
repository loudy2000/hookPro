//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@class NSMutableArray;

@interface NSMutableAttributedString (AsyncTextKit)
@property(nonatomic, getter=isHasParsered) _Bool hasParsered;
@property(retain, nonatomic) NSMutableArray *links;
@property(retain, nonatomic) NSMutableArray *attachments;
- (void)addAttributes:(id)arg1 byRegex:(id)arg2;
- (void)setMDUnderlineStyle:(int)arg1 modifier:(int)arg2 forString:(id)arg3;
- (void)setMDUnderlineStyle:(int)arg1 modifier:(int)arg2 range:(struct _NSRange)arg3;
- (void)setMDUnderlineStyle:(int)arg1 modifier:(int)arg2;
- (void)setMDFont:(id)arg1 forString:(id)arg2;
- (void)setMDFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)setMDFont:(id)arg1;
- (void)setMDTextColor:(id)arg1 forString:(id)arg2;
- (void)setMDTextColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setMDTextColor:(id)arg1;
@end
