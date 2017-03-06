//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TBFICImageCacheDelegate;

@interface TBFICImageCache : NSObject
{
    NSMutableDictionary *_formats;	// 8 = 0x8
    NSMutableDictionary *_imageTables;	// 16 = 0x10
    NSMutableDictionary *_requests;	// 24 = 0x18
    _Bool _delegateImplementsWantsSourceImageForEntityWithFormatNameCompletionBlock;	// 32 = 0x20
    _Bool _delegateImplementsShouldProcessAllFormatsInFamilyForEntity;	// 33 = 0x21
    _Bool _delegateImplementsErrorDidOccurWithMessage;	// 34 = 0x22
    _Bool _delegateImplementsCancelImageLoadingForEntityWithFormatName;	// 35 = 0x23
    id <TBFICImageCacheDelegate> _delegate;	// 40 = 0x28
    NSString *_nameSpace;	// 48 = 0x30
}

+ (struct dispatch_queue_s *)dispatchQueue;
+ (id)sharedImageCache;
@property(readonly, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
@property(nonatomic) __weak id <TBFICImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logMessage:(id)arg1;
- (void)reset;
- (void)cancelImageRetrievalForEntity:(id)arg1 withFormatName:(id)arg2;
- (void)deleteImageForEntity:(id)arg1 withFormatName:(id)arg2;
- (_Bool)imageExistsForEntity:(id)arg1 withFormatName:(id)arg2;
- (id)formatsToProcessForCompletionBlocks:(id)arg1 entity:(id)arg2;
- (void)_processImage:(id)arg1 forEntity:(id)arg2 imageTable:(id)arg3 completionBlocks:(id)arg4;
- (void)_processImage:(id)arg1 forEntity:(id)arg2 completionBlocksDictionary:(id)arg3;
- (void)setImage:(id)arg1 forEntity:(id)arg2 withFormatName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_imageDidLoad:(id)arg1 forURL:(id)arg2;
- (_Bool)_retrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 loadSynchronously:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)asynchronouslyRetrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)retrieveImageForEntity:(id)arg1 withFormatName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)formatsWithFamily:(id)arg1;
- (id)formatWithName:(id)arg1;
- (void)setFormats:(id)arg1;
- (id)initWithNameSpace:(id)arg1;
- (id)init;

@end
