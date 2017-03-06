//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSetupController.h>

#import <Preferences/UIActionSheetDelegate-Protocol.h>
#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController <UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSString *_languageToSet;
    BOOL _notOfficialLanguage;
    BOOL _useOfficialLanguages;
    PSLanguageSelector *_languageSelector;
}

- (id)language:(id)arg1;
- (id)initWithOfficialLanguages;
- (void)showBlackViewWithLabel:(id)arg1 moveLanguageToTop:(BOOL)arg2 withLanguageIdentifier:(id)arg3;
- (void)changeLanguageWithIndex:(unsigned int)arg1 tag:(unsigned int)arg2;
- (void)saveLanguage:(BOOL)arg1;
- (void)didFinishCommit;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setNotOfficialLanguage:(BOOL)arg1;
@property(retain, nonatomic) PSLanguageSelector *languageSelector; // @synthesize languageSelector=_languageSelector;
- (BOOL)useOfficialLanguages;
- (void)setupController;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)commit;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
