//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PodGCDWebServer_DDAbstractLogger.h"

#import "DDLogger.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PodGCDWebServer_DDTTYLogger : PodGCDWebServer_DDAbstractLogger <DDLogger>
{
    unsigned long long _calendarUnitFlags;
    NSString *_appName;
    char *_app;
    unsigned long long _appLen;
    NSString *_processID;
    char *_pid;
    unsigned long long _pidLen;
    _Bool _colorsEnabled;
    NSMutableArray *_colorProfilesArray;
    NSMutableDictionary *_colorProfilesDict;
    _Bool _automaticallyAppendNewlineForCustomFormatters;
}

+ (id)sharedInstance;
+ (unsigned long long)codeIndexForColor:(struct UIColor *)arg1;
+ (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromColor:(struct UIColor *)arg4;
+ (void)initialize_colors_256;
+ (void)initialize_colors_16;
@property(nonatomic) _Bool automaticallyAppendNewlineForCustomFormatters; // @synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;
- (void)clearAllColors;
- (void)clearColorsForAllTags;
- (void)clearColorsForAllFlags;
- (void)clearColorsForTag:(id)arg1;
- (void)clearColorsForFlag:(unsigned long long)arg1 context:(long long)arg2;
- (void)clearColorsForFlag:(unsigned long long)arg1;
- (void)setForegroundColor:(struct UIColor *)arg1 backgroundColor:(struct UIColor *)arg2 forTag:(id)arg3;
- (void)setForegroundColor:(struct UIColor *)arg1 backgroundColor:(struct UIColor *)arg2 forFlag:(unsigned long long)arg3 context:(long long)arg4;
- (void)setForegroundColor:(struct UIColor *)arg1 backgroundColor:(struct UIColor *)arg2 forFlag:(unsigned long long)arg3;
@property _Bool colorsEnabled;
- (void)loadDefaultColorProfiles;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
@property(readonly, nonatomic) struct dispatch_queue_s *loggerQueue;
@property(readonly) Class superclass;

@end

