//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSString;

@interface FDKBeautySettings : MTLModel <MTLJSONSerializing>
{
    float _bigEyeFactor;
    float _thinFaceFactor;
    float _skinSmoothingFactor;
    float _bigEyeLevel;
    float _thinFaceLevel;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) float thinFaceLevel; // @synthesize thinFaceLevel=_thinFaceLevel;
@property(nonatomic) float bigEyeLevel; // @synthesize bigEyeLevel=_bigEyeLevel;
@property(nonatomic) float skinSmoothingFactor; // @synthesize skinSmoothingFactor=_skinSmoothingFactor;
@property(nonatomic) float thinFaceFactor; // @synthesize thinFaceFactor=_thinFaceFactor;
@property(nonatomic) float bigEyeFactor; // @synthesize bigEyeFactor=_bigEyeFactor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
