//
//  H264Encoder.h
//  CameraTest
//
//  Created by alex on 05/03/2017.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef H264Encoder_h
#define H264Encoder_h

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>
#import "GenericEncoder.h"

//@protocol H264EncoderDelegate <NSObject>
//-(void) compressedVideoDataReceived:(CMSampleBufferRef) sampleBuffer;
//@end

@interface H264Encoder : NSObject<GenericEncoder>
-(id) initWithWidth:(int)width height:(int)height bitrate:(int)bitrate framerate:(int)framerate;
-(void) putCVPixelBuffer:(CMSampleBufferRef)pixelBuffer withTimestamp:(CMTime)timestamp;
@property (nonatomic, weak) id<GenericEncoderDelegate> delegate;
-(bool) setBitrate:(int)bps;
@end

#endif /* H264Encoder_h */
