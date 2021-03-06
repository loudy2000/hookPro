//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPTFilterBase.h"

@class NSArray;

@interface MPTMultiplePrimitiveFilter : MPTFilterBase
{
    unsigned int filterSourceTexture[8];
    int textureIndexReceived[8];
    int textureIndexCheckDisabled[8];
    int textureIndexIsStatic[8];
    int thisSourceShouldDisableAtCurrentTime[8];
    _Bool shouldRenderNextFrame;
    long long _primitiveCount;
    NSArray *_programs;
}

@property(retain, nonatomic) NSArray *programs; // @synthesize programs=_programs;
@property(nonatomic) long long primitiveCount; // @synthesize primitiveCount=_primitiveCount;
- (void).cxx_destruct;
- (void)setSources:(id)arg1;
- (void)update;
- (void)frameCallBack;
- (void)movieHadProcessedToEnd:(id)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (unsigned int)textureForOutput;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

@end

