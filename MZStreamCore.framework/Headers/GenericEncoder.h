//
//  Header.h
//  Pods
//
//  Created by alex on 07/07/2019.
//

#ifndef Header_h
#define Header_h

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>

@protocol GenericEncoderDelegate <NSObject>
-(void) compressedVideoDataReceived:(CMSampleBufferRef) sampleBuffer;
@end

@protocol GenericEncoder <NSObject>
-(void) putCVPixelBuffer:(CMSampleBufferRef)pixelBuffer withTimestamp:(CMTime)timestamp;
-(void) close;
-(CVPixelBufferPoolRef) getPixelBufferPool;
@property (nonatomic, weak) id<GenericEncoderDelegate> delegate;
@end


#endif /* Header_h */
