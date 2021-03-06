//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailProtocolManagerConfigModel, NSDictionary, NSLock, NSString, TBTradeTemplateRequest;

@interface AliDetailProtocolManager : NSObject
{
    _Bool _needUpdateTheme;	// 8 = 0x8
    TBTradeTemplateRequest *_actionTempalteRequest;	// 16 = 0x10
    TBTradeTemplateRequest *_ruleTempalteRequest;	// 24 = 0x18
    TBTradeTemplateRequest *_themeTempalteRequest;	// 32 = 0x20
    TBTradeTemplateRequest *_layoutTempalteRequest;	// 40 = 0x28
    NSString *_lastActionTemplateId;	// 48 = 0x30
    NSString *_lastRuleTemplateId;	// 56 = 0x38
    NSString *_lastThemeTempalteId;	// 64 = 0x40
    NSDictionary *_actionPool;	// 72 = 0x48
    NSDictionary *_rulePool;	// 80 = 0x50
    NSDictionary *_themePool;	// 88 = 0x58
    AliDetailProtocolManagerConfigModel *_configModel;	// 96 = 0x60
    NSLock *_lock;	// 104 = 0x68
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needUpdateTheme; // @synthesize needUpdateTheme=_needUpdateTheme;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) AliDetailProtocolManagerConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) NSDictionary *themePool; // @synthesize themePool=_themePool;
@property(retain, nonatomic) NSDictionary *rulePool; // @synthesize rulePool=_rulePool;
@property(retain, nonatomic) NSDictionary *actionPool; // @synthesize actionPool=_actionPool;
@property(retain, nonatomic) NSString *lastThemeTempalteId; // @synthesize lastThemeTempalteId=_lastThemeTempalteId;
@property(retain, nonatomic) NSString *lastRuleTemplateId; // @synthesize lastRuleTemplateId=_lastRuleTemplateId;
@property(retain, nonatomic) NSString *lastActionTemplateId; // @synthesize lastActionTemplateId=_lastActionTemplateId;
@property(retain, nonatomic) TBTradeTemplateRequest *layoutTempalteRequest; // @synthesize layoutTempalteRequest=_layoutTempalteRequest;
@property(retain, nonatomic) TBTradeTemplateRequest *themeTempalteRequest; // @synthesize themeTempalteRequest=_themeTempalteRequest;
@property(retain, nonatomic) TBTradeTemplateRequest *ruleTempalteRequest; // @synthesize ruleTempalteRequest=_ruleTempalteRequest;
@property(retain, nonatomic) TBTradeTemplateRequest *actionTempalteRequest; // @synthesize actionTempalteRequest=_actionTempalteRequest;
- (void).cxx_destruct;
- (void)loadActionFromFile;
- (void)loadRuleFromFile;
- (void)loadThemeFromFile;
- (void)setupThemePool:(id)arg1;
- (void)setupRulePool:(id)arg1;
- (void)setupActionPool:(id)arg1;
- (void)updateDataPools:(struct NSDictionary *)arg1;
- (_Bool)checkNeedUpdateThemeAndConfigLastId:(struct NSDictionary *)arg1;
- (_Bool)checkNeedUpdateActionAndConfigLastId:(struct NSDictionary *)arg1;
- (_Bool)checkNeedUpdateRuleAndConfigLastId:(struct NSDictionary *)arg1;
- (_Bool)isTesting;
- (id)loadFile:(id)arg1;
- (void)monitorLoadTemplateFailed:(id)arg1 detailModel:(id)arg2;
- (id)validateLayout:(id)arg1;
- (id)getLayoutTemplate:(id)arg1;
- (id)templateRequestArray;
- (void)setTemplateFromDefaultId;
- (void)configRequestIdByLayout:(id)arg1;
- (void)setUpRequestTemplateIds:(id)arg1;
- (_Bool)configIdIsValid:(id)arg1;
- (void)setIsUpdatedTheme;
- (id)getThemeStyleDic;
- (id)getThemeMapDic;
- (void)setup:(id)arg1;
- (void)clearMemoryCache;
- (id)searchActionById:(id)arg1;
- (id)searchRuleByKey:(id)arg1 ruleId:(id)arg2;
- (id)getPreLoadSourceModel:(id)arg1;
- (id)getSourceModel:(id)arg1;

@end

