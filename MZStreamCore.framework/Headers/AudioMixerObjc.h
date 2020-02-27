//
//  AudioMixerObjc.h
//  AudioMixer
//
//  Created by alex on 20/02/2019.
//  Copyright © 2019 alex. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AudioMixerDelegate

-(void)mixedDataReceived:(uint8_t*)data size:(size_t)size;

@end

@interface AudioMixer : NSObject

-(instancetype)init;
-(void)injectAudioData:(const uint8_t*)data size:(size_t)size sampleRate:(int)sampleRate channels:(int)channels line:(int)line bigEndian:(bool)bigEndian;

@property (nonatomic) id<AudioMixerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
