//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class InvoicePhoneNumInputValidator, NSString;

@interface InvoicePhoneNumTextField : UITextField
{
    NSString *_lastPhoneStr;
    InvoicePhoneNumInputValidator *_validator;
}

@property(retain, nonatomic) InvoicePhoneNumInputValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) NSString *lastPhoneStr; // @synthesize lastPhoneStr=_lastPhoneStr;
- (void).cxx_destruct;
- (_Bool)validate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
