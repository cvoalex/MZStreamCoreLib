//
//  FDKAACDecoder.h
//  MZStreamCore
//
//  Created by alex on 15/08/2019.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FDKAACDecoderDelegate <NSObject>
-(void) decompressedAudioDataReceived:(NSData*) data pts:(CMTime)pts;
@end


@interface FDKAACDecoder : NSObject

- (void)decodeAudioFrame:(NSData *)frame withPts:(CMTime)pts;
- (id) initWithSampleRate:(int)sampleRate channels:(int)channels;
@property (nonatomic, weak) id<FDKAACDecoderDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
