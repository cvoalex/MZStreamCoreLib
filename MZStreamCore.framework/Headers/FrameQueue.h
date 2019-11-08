//
//  FrameQueue.h
//  MZCamera
//
//  Created by alex on 13/10/2019.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FrameQueueDelegate

-(void) frameDequeued:(CMSampleBufferRef) sampleBuffer;

@end

@interface FrameQueue : NSObject

-(void)putSample:(CMSampleBufferRef)sample;
@property (nonatomic, weak) id<FrameQueueDelegate> delegate;
@property (nonatomic) bool paused;
@end

NS_ASSUME_NONNULL_END
