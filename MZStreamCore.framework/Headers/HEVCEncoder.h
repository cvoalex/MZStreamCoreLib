//
//  H264Encoder.h
//  CameraTest
//
//  Created by alex on 05/03/2017.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef HEVCEncoder_h
#define HEVCEncoder_h

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>
#include "GenericEncoder.h"

@interface HEVCEncoder : NSObject<GenericEncoder>
-(id) initWithWidth:(int)width height:(int)height bitrate:(int)bitrate framerate:(int)framerate;
-(void) putCVPixelBuffer:(CMSampleBufferRef)pixelBuffer withTimestamp:(CMTime)timestamp;
-(void) close;
-(CVPixelBufferPoolRef) getPixelBufferPool;
@property (nonatomic, weak) id<GenericEncoderDelegate> delegate;
-(void) setBitrate:(int)bps;

@end

#endif /* H264Encoder_h */
