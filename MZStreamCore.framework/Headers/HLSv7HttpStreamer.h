//
//  LiveStreamer.h
//  CameraTest
//
//  Created by alex on 26/03/2017.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef HLSLiveHTTPStreamer_h
#define HLSLiveHTTPStreamer_h

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import "MP4SegmentDescriptor.h"

@protocol LiveStreamerDelegate <NSObject>
@optional -(void) segmentDataReceived:(NSData*)data trackID:(uint32_t)trackID mediaType:(AVMediaType)mediaType initSegment:(bool)initSegment rap:(bool)randomAccessPoint segmentIndex:(NSUInteger)segmentIndex fragmentIndex:(NSUInteger)fragmentIndex segmentStart:(bool)segmentStart timestamp:(double)firstPts;
@optional -(void) playlistData:(NSString*)playlist trackID:(uint32_t)trackID mediaType:(AVMediaType)mediaType;
@optional -(void) rootPlaylistData:(NSString*)playlist;
@end

@protocol LiveStreamerConsolidatedDelegate <LiveStreamerDelegate>
@optional -(void) consolidatedDataReceived:(NSArray<MP4SegmentDescriptor*>*)descriptors;
@end;

@protocol HLSStreamer
-(void) putVideoSample:(CMSampleBufferRef)sampleBuffer width:(uint32_t)width height:(uint32_t)height;
-(void) putAudioSample:(uint8_t*)data size:(size_t)size pts:(CMTime)pts;
-(void) stop;
@property (nonatomic, weak) id<LiveStreamerDelegate> delegate;
@property (nonatomic) NSString* login;
@property (nonatomic) NSString* password;
@property (nonatomic) bool callDelegateForParts;
@end

@interface HLSv7HttpStreamer : NSObject <HLSStreamer>
-(id) initWithTargetAddress:(NSString*)address segmentDuration:(double)segmentDuration partsPerSegment:(int)partsPerSegment postMethod:(NSString *)postMethod vodMode:(bool)vodMode videoCodec:(AVVideoCodecType)videoCodec videoBandwidth:(size_t)bandwidth;
-(void) putVideoSample:(CMSampleBufferRef)sampleBuffer width:(uint32_t)width height:(uint32_t)height;
-(void) putAudioSample:(uint8_t*)data size:(size_t)size pts:(CMTime)pts;
-(void) stop;
@property (nonatomic, weak) id<LiveStreamerDelegate> delegate;
@property (nonatomic) NSString* login;
@property (nonatomic) NSString* password;
@property (nonatomic) bool callDelegateForParts;

@end


#endif /* LiveStreamer_h */
