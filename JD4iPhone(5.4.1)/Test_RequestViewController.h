//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class JDStoreNetwork, NSArray, NSMutableArray;

@interface Test_RequestViewController : JDViewController
{
    JDStoreNetwork *net_;
    NSArray *_testArray;
    CDUnknownBlockType tblock_;
    NSMutableArray *_testImageViews;
}

@property(retain, nonatomic) NSArray *testArray; // @synthesize testArray=_testArray;
- (void)testVerify;
- (void)login;
- (void)didFinishLogin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didTouchEndView:(id)arg1;
- (void)pop;
- (CDUnknownBlockType)recommendCancelBlock;
- (CDUnknownBlockType)recommendModelBlock;
- (CDUnknownBlockType)packsCancelBlock;
- (CDUnknownBlockType)packsBlock;
- (void)qstart:(id)arg1;
- (void)testGo:(id)arg1;
- (id)getAvailableImageView;
- (void)start:(id)arg1;
- (void)push;
- (void)dealloc;
- (void)relaunchWithSetup:(id)arg1;
- (void)viewDidLoad;

@end

