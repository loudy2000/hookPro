//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IJKEncoderDelegate.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, CADisplayLink, FFWriteFile, IJKAACEncoder, IJKAudioConvert, IJKVideoEncoder, NSDictionary, NSFileManager, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSRunLoop, NSString, NSURL, UIApplication, UIDevice, UIScreen, UIView;

@interface MLScreenRecorder : NSObject <IJKEncoderDelegate>
{
    _Bool _isRecording;
    _Bool _saveToAssetsLibrary;
    _Bool _useAVAssetWriter;
    _Bool _isGetFirstVideoFrame;
    _Bool _isGetFirstAudioFrame;
    _Bool _isNeedCheckRecordView;
    _Bool _isValidRecordView;
    int _maxRecordTime;
    int _minRecordTime;
    int _stallCount;
    int _audioSourceType;
    unsigned long long _videoQuality;
    id <MLScreenRecorderDelegate> _delegate;
    id <MLScreenRecorderDataSource> _dataSource;
    NSURL *_videoURL;
    UIView *_recordView;
    UIApplication *_application;
    UIScreen *_screen;
    NSFileManager *_fileManager;
    UIDevice *_device;
    NSRunLoop *_runLoop;
    CADisplayLink *_displayLink;
    NSDictionary *_outputBufferPoolAuxAttributes;
    double _firstTimeStamp;
    double _videoScale;
    NSObject<OS_dispatch_queue> *_render_queue;
    NSObject<OS_dispatch_queue> *_append_pixelBuffer_queue;
    NSObject<OS_dispatch_queue> *_append_pcmBuffer_queue;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    NSObject<OS_dispatch_semaphore> *_pixelAppendSemaphore;
    NSObject<OS_dispatch_queue> *_save_queue;
    struct CGColorSpace *_rgbColorSpace;
    struct __CVPixelBufferPool *_outputBufferPool;
    IJKAACEncoder *_aacEncoder;
    IJKVideoEncoder *_h264Encoder;
    FFWriteFile *_writeFile;
    IJKAudioConvert *_audioConvert;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoAdaptor;
    struct opaqueCMFormatDescription *_audioFormatDesc;
    double _firstAudioPts;
    double _firstVideoPts;
    double _videoPtsOnFirstAudioPts;
    double _lastAudioPts;
    NSObject<OS_dispatch_queue> *_slienceQueue;
    NSObject<OS_dispatch_source> *_slienceTimer;
    double _nowSliencePts;
    double _addSliencePts;
    double _compensateStallCount;
    struct CGSize _bufferSize;
    struct AudioStreamBasicDescription _audioFormat;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isValidRecordView; // @synthesize isValidRecordView=_isValidRecordView;
@property(nonatomic) _Bool isNeedCheckRecordView; // @synthesize isNeedCheckRecordView=_isNeedCheckRecordView;
@property(nonatomic) int audioSourceType; // @synthesize audioSourceType=_audioSourceType;
@property(nonatomic) double compensateStallCount; // @synthesize compensateStallCount=_compensateStallCount;
@property(nonatomic) int stallCount; // @synthesize stallCount=_stallCount;
@property(nonatomic) double addSliencePts; // @synthesize addSliencePts=_addSliencePts;
@property(nonatomic) double nowSliencePts; // @synthesize nowSliencePts=_nowSliencePts;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *slienceTimer; // @synthesize slienceTimer=_slienceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *slienceQueue; // @synthesize slienceQueue=_slienceQueue;
@property(nonatomic) double lastAudioPts; // @synthesize lastAudioPts=_lastAudioPts;
@property(nonatomic) double videoPtsOnFirstAudioPts; // @synthesize videoPtsOnFirstAudioPts=_videoPtsOnFirstAudioPts;
@property(nonatomic) double firstVideoPts; // @synthesize firstVideoPts=_firstVideoPts;
@property(nonatomic) double firstAudioPts; // @synthesize firstAudioPts=_firstAudioPts;
@property(nonatomic) struct opaqueCMFormatDescription *audioFormatDesc; // @synthesize audioFormatDesc=_audioFormatDesc;
@property(nonatomic) struct AudioStreamBasicDescription audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoAdaptor; // @synthesize videoAdaptor=_videoAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) IJKAudioConvert *audioConvert; // @synthesize audioConvert=_audioConvert;
@property(nonatomic) _Bool isGetFirstAudioFrame; // @synthesize isGetFirstAudioFrame=_isGetFirstAudioFrame;
@property(nonatomic) _Bool isGetFirstVideoFrame; // @synthesize isGetFirstVideoFrame=_isGetFirstVideoFrame;
@property(retain, nonatomic) FFWriteFile *writeFile; // @synthesize writeFile=_writeFile;
@property(retain, nonatomic) IJKVideoEncoder *h264Encoder; // @synthesize h264Encoder=_h264Encoder;
@property(retain, nonatomic) IJKAACEncoder *aacEncoder; // @synthesize aacEncoder=_aacEncoder;
@property(nonatomic) struct __CVPixelBufferPool *outputBufferPool; // @synthesize outputBufferPool=_outputBufferPool;
@property(retain, nonatomic) struct CGColorSpace *rgbColorSpace; // @synthesize rgbColorSpace=_rgbColorSpace;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *save_queue; // @synthesize save_queue=_save_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *pixelAppendSemaphore; // @synthesize pixelAppendSemaphore=_pixelAppendSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore; // @synthesize frameRenderingSemaphore=_frameRenderingSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *append_pcmBuffer_queue; // @synthesize append_pcmBuffer_queue=_append_pcmBuffer_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *append_pixelBuffer_queue; // @synthesize append_pixelBuffer_queue=_append_pixelBuffer_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *render_queue; // @synthesize render_queue=_render_queue;
@property(nonatomic) double videoScale; // @synthesize videoScale=_videoScale;
@property(nonatomic) struct CGSize bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) double firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
@property(retain, nonatomic) NSDictionary *outputBufferPoolAuxAttributes; // @synthesize outputBufferPoolAuxAttributes=_outputBufferPoolAuxAttributes;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) UIDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak UIView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) int minRecordTime; // @synthesize minRecordTime=_minRecordTime;
@property(nonatomic) int maxRecordTime; // @synthesize maxRecordTime=_maxRecordTime;
@property(nonatomic) _Bool useAVAssetWriter; // @synthesize useAVAssetWriter=_useAVAssetWriter;
@property(nonatomic) _Bool saveToAssetsLibrary; // @synthesize saveToAssetsLibrary=_saveToAssetsLibrary;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) __weak id <MLScreenRecorderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MLScreenRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (void)handlePCMAudioPacket:(id)arg1 pts:(double)arg2 codec:(id)arg3;
- (struct opaqueCMSampleBuffer *)createPCMAudioBuffer:(id)arg1 channelCount:(unsigned long long)arg2 audioTime:(CDStruct_1b6d18a9)arg3;
- (void)handlePlaybackPostAudioPacket:(id)arg1;
- (void)encoder:(id)arg1 encodedFrame:(id)arg2;
- (void)cleanupBitmapContext:(struct CGContext *)arg1 andPixelBuffer:(struct __CVBuffer *)arg2;
- (void)handlePixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)drawBackgroundLayerInBitmapContext:(struct CGContext *)arg1;
- (id)prepareBackgroundLabel;
- (id)appendKeyWindowIfNeeded:(id)arg1;
- (id)windowsToRender;
- (void)drawCurrentScreenInBitmapContext:(struct CGContext *)arg1 exclusive:(id)arg2;
- (void)listSubviewsOfView:(id)arg1 toArray:(id)arg2;
- (id)viewController:(id)arg1;
- (id)getVCView:(id)arg1;
- (void)drawCurrentScreenInBitmapContext:(struct CGContext *)arg1;
- (void)drawInBitmapContext:(struct CGContext *)arg1;
- (void)applyContextTransform:(struct CGContext *)arg1;
- (struct CGContext *)createPixelBufferAndBitmapContext:(struct __CVBuffer **)arg1;
- (CDStruct_1b6d18a9)currentFrameTime;
- (void)writeVideoFrame;
- (void)addSliencePacket;
- (id)saveSnapshot:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)getMovieInfo;
- (void)cleanup;
- (void)completionBlock:(CDUnknownBlockType)arg1;
- (void)completeRecordingSession:(CDUnknownBlockType)arg1;
- (void)removeTempFilePath:(id)arg1;
- (id)tempSnapshotFileURL;
- (id)tempVideoFileURL;
- (struct CGAffineTransform)videoTransformForDeviceOrientation;
- (id)videoSettings;
- (int)getVideoBitrate;
- (void)removeProtectionFromFile:(id)arg1;
- (void)createAudioWrite;
- (void)createVideoWrite;
- (void)createPixelBufferPool;
- (void)setUpWriter;
- (void)resetAudioParams;
- (void)screenSnapshot:(id)arg1;
- (void)removeVideoFile;
- (void)storeImageInAssetsLibrary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)storeVideoInAssetsLibrary:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)showAssetsLibraryAlert;
- (_Bool)getAssetsLibraryAuthorization;
- (void)stopRecordingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startRecordingWithQuality:(unsigned long long)arg1;
- (_Bool)startRecording;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

