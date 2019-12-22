#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OpenALPlayer.h"
#import "AudioQueuePlayer.h"
#import "MP4SegmentDescriptor.h"
#import "SegmentDataConsolidator.h"
#import "LiveStreamer.h"
#import "HttpUploader.h"
#import "GenericEncoder.h"
#import "AACEncoder.h"
#import "FDKAACEncoder.h"
#import "H264Encoder.h"
#import "HEVCEncoder.h"
#import "HLSv7HttpStreamer.h"
#import "HLSv9InterleavedStreamer.h"
#import "HLSv7Demuxer.h"
#import "FDKAACDecoder.h"
#import "FrameQueue.h"

FOUNDATION_EXPORT double MZStreamCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char MZStreamCoreVersionString[];

