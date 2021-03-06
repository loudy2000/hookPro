//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBCKRecorderDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, TBCKRecorder, TBCKRecorderToolsView, UILabel, YWCKCameraBottomBar, YWCKCameraProgressBar, YWCKCameraTopBar, YWCKTipView, YWVideoPreviewController;

@interface YWShortVideoPickerController : UIViewController <TBCKRecorderDelegate>
{
    NSDictionary *_outputData;	// 8 = 0x8
    CDUnknownBlockType _didPickBlock;	// 16 = 0x10
    YWCKTipView *_tipView;	// 24 = 0x18
    YWCKCameraTopBar *_topBar;	// 32 = 0x20
    YWCKCameraBottomBar *_bottomBar;	// 40 = 0x28
    UILabel *_totalTimeLabel;	// 48 = 0x30
    YWCKCameraProgressBar *_segmentsView;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    NSMutableArray *_segments;	// 72 = 0x48
    TBCKRecorderToolsView *_previewView;	// 80 = 0x50
    TBCKRecorder *_recorder;	// 88 = 0x58
    YWVideoPreviewController *_previewVC;	// 96 = 0x60
    double _lastRecordTimeInteval;	// 104 = 0x68
}

@property(nonatomic) double lastRecordTimeInteval; // @synthesize lastRecordTimeInteval=_lastRecordTimeInteval;
@property(nonatomic) __weak YWVideoPreviewController *previewVC; // @synthesize previewVC=_previewVC;
@property(retain, nonatomic) TBCKRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) TBCKRecorderToolsView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) YWCKCameraProgressBar *segmentsView; // @synthesize segmentsView=_segmentsView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) YWCKCameraBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) YWCKCameraTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) YWCKTipView *tipView; // @synthesize tipView=_tipView;
@property(copy, nonatomic) CDUnknownBlockType didPickBlock; // @synthesize didPickBlock=_didPickBlock;
@property(retain, nonatomic) NSDictionary *outputData; // @synthesize outputData=_outputData;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)transitionToState:(long long)arg1;
- (void)recorderDidOutputSampleBuffer:(id)arg1;
- (void)recorderDidCompleteSession:(id)arg1;
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateAccomplishButtonAlpha;
- (void)_onTick;
- (void)_updateTotalTimeView;
- (void)_onShutterButtonRelease:(id)arg1;
- (void)_onShutterButtonPress:(id)arg1;
- (void)_onAccomplishButtonClick:(id)arg1;
- (void)_tapBottomBarTap:(id)arg1;
- (void)_onDeleteButtonClick:(id)arg1;
- (void)_onFlipButtonClick:(id)arg1;
- (void)_onLightButtonClick:(id)arg1;
- (void)_close;
- (void)_onCloseButtonClick:(id)arg1;
- (void)_handleShutterRelease:(id)arg1;
- (void)_handleShutterPress:(id)arg1;
- (void)_handleShutterLongPress:(id)arg1;
- (double)_totalDuration;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

