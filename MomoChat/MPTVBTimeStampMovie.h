//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPTVBMovie.h"

@interface MPTVBTimeStampMovie : MPTVBMovie
{
}

- (void)buildEmptyAssetWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)setInputTextureForTarget:(id)arg1 atIndex:(long long)arg2;
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)readNextVideoFrameAsNormalSpeed;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;

@end

