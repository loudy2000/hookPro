//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView, UILabel, UITextField;

@interface ApplicationForRefundContentView : UIView
{
    id <ApplicationForRefundContentViewDelegate> _delegate;
    UITextField *_reasonTextField;
    UITextField *_contactsTextField;
    UITextField *_phoneTextField;
    NSArray *_textFieldArray;
    UILabel *_reasonLabel;
    UILabel *_contactsLabel;
    UILabel *_phoneLabel;
    UIImageView *_reasonImageView;
}

@property(retain, nonatomic) UIImageView *reasonImageView; // @synthesize reasonImageView=_reasonImageView;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *contactsLabel; // @synthesize contactsLabel=_contactsLabel;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) NSArray *textFieldArray; // @synthesize textFieldArray=_textFieldArray;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UITextField *contactsTextField; // @synthesize contactsTextField=_contactsTextField;
@property(retain, nonatomic) UITextField *reasonTextField; // @synthesize reasonTextField=_reasonTextField;
@property(nonatomic) __weak id <ApplicationForRefundContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configSpliter;
- (void)addInitConstraints;
- (void)_tapReason:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)init;

@end
