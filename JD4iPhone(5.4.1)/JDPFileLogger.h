//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDPAbstractLogger.h"

#import "JDPLogger.h"

@class JDPLogFileInfo, NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface JDPFileLogger : JDPAbstractLogger <JDPLogger>
{
    id <JDPLogFileManager> _logFileManager;
    JDPLogFileInfo *_currentLogFileInfo;
    NSFileHandle *_currentLogFileHandle;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    NSObject<OS_dispatch_source> *_rollingTimer;
    unsigned long long _maximumFileSize;
    double _rollingFrequency;
    _Bool _doNotReuseLogFiles;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
    id <JDPLogFileManager> logFileManager;
}

@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
@property _Bool doNotReuseLogFiles; // @synthesize doNotReuseLogFiles=_doNotReuseLogFiles;
@property(readonly, nonatomic) id <JDPLogFileManager> logFileManager; // @synthesize logFileManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)willRemoveLogger;
- (void)logMessage:(id)arg1;
- (id)jdp_currentLogFileHandle;
- (id)jdp_currentLogFileInfo;
- (void)jdp_maybeRollLogFileDueToSize;
- (void)jdp_maybeRollLogFileDueToAge;
- (void)jdp_rollLogFileNow;
- (void)jdp_rollLogFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)jdp_rollLogFile;
- (void)jdp_scheduleTimerToRollLogFileDueToAge;
@property double rollingFrequency;
@property unsigned long long maximumFileSize;
- (void)dealloc;
- (id)initWithLogFileManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <JDPLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

