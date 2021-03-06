//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLPublisherStatisticAuxiliaryDataProvider.h"

@class FFOutputFile, FFOutputStream, NSCondition, NSMutableArray, NSString;

@interface FFRtmpWriter : NSObject <MLPublisherStatisticAuxiliaryDataProvider>
{
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *sendThreadID;
    _Bool _isEnableDynamicBitrate;
    _Bool _isError;
    _Bool _isStopped;
    int _videoPacketCount;
    NSString *_uuid;
    struct dispatch_queue_s *_conversionQueue;
    NSString *_streamPath;
    id <FFRtmpWriterDelegate> _delegate;
    FFOutputFile *_outputFile;
    NSCondition *_condition;
    FFOutputStream *_videoStream;
    FFOutputStream *_audioStream;
    struct AVRational _videoTimeBase;
    struct AVRational _audioTimeBase;
    NSMutableArray *_packetQueue;
    unsigned long long _lastVideoDts;
    unsigned long long _firstSendOutVideoDts;
    unsigned long long _latestSendOutVideoDts;
    unsigned long long _totalVideoBytesSendOut;
}

@property(nonatomic) int videoPacketCount; // @synthesize videoPacketCount=_videoPacketCount;
@property(nonatomic) unsigned long long totalVideoBytesSendOut; // @synthesize totalVideoBytesSendOut=_totalVideoBytesSendOut;
@property(nonatomic) unsigned long long latestSendOutVideoDts; // @synthesize latestSendOutVideoDts=_latestSendOutVideoDts;
@property(nonatomic) unsigned long long firstSendOutVideoDts; // @synthesize firstSendOutVideoDts=_firstSendOutVideoDts;
@property(nonatomic) unsigned long long lastVideoDts; // @synthesize lastVideoDts=_lastVideoDts;
@property(retain) NSMutableArray *packetQueue; // @synthesize packetQueue=_packetQueue;
@property _Bool isStopped; // @synthesize isStopped=_isStopped;
@property _Bool isError; // @synthesize isError=_isError;
@property(nonatomic) struct AVRational audioTimeBase; // @synthesize audioTimeBase=_audioTimeBase;
@property(nonatomic) struct AVRational videoTimeBase; // @synthesize videoTimeBase=_videoTimeBase;
@property(retain, nonatomic) FFOutputStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) FFOutputStream *videoStream; // @synthesize videoStream=_videoStream;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain) FFOutputFile *outputFile; // @synthesize outputFile=_outputFile;
@property(nonatomic) _Bool isEnableDynamicBitrate; // @synthesize isEnableDynamicBitrate=_isEnableDynamicBitrate;
@property(nonatomic) __weak id <FFRtmpWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *streamPath; // @synthesize streamPath=_streamPath;
@property(nonatomic) struct dispatch_queue_s *conversionQueue; // @synthesize conversionQueue=_conversionQueue;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)LaunchThread;
- (void)dealloc;
- (unsigned long long)getTotalSendOutBytes;
- (unsigned long long)getLatestDtsInMs;
- (unsigned long long)getFirstDtsInMs;
- (id)getIpAddr;
- (unsigned long long)getSendDataTime;
- (unsigned long long)getTcpConnectTime;
- (long long)getMuxSize;
- (long long)getSendSize;
- (int)audioStreamIdx;
- (int)videoStreamIdx;
- (void)setVideoExtradata:(id)arg1;
- (_Bool)finishWriting:(id *)arg1;
- (void)processEncodedData:(id)arg1 presentationTimestamp:(CDStruct_1b6d18a9)arg2 streamIndex:(unsigned long long)arg3 isKeyFrame:(_Bool)arg4;
- (void)dropVideoPacket;
- (void)processEncodedData:(id)arg1 presentationTimestamp:(CDStruct_1b6d18a9)arg2 decodeTimestamp:(CDStruct_1b6d18a9)arg3 streamIndex:(unsigned long long)arg4 isKeyFrame:(_Bool)arg5;
- (long long)getBufferLen;
- (int)getCacheDurationInMs;
- (_Bool)prepareForWriting:(id *)arg1;
- (void)addAudioStreamWithSampleRate:(int)arg1 channels:(int)arg2 bitrate:(int)arg3;
- (void)addVideoStreamWithWidth:(int)arg1 height:(int)arg2 bitrate:(int)arg3;
- (void)setupOutputFile:(unsigned long long)arg1;
- (id)initWithStreamPath:(id)arg1 serverTime:(long long)arg2;
- (unsigned long long)writerCachedDataDuration;
- (unsigned long long)writerLastDTSTimestamp;
- (unsigned long long)writerFirstDTSTimestamp;
- (unsigned long long)writerMuxDataSize;
- (unsigned long long)writerSentDataSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

