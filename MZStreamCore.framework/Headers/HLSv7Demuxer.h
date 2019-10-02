//
//  HLSv7Demuxer.h
//  MZStreamCore
//
//  Created by alex on 10/08/2019.
//

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>

NS_ASSUME_NONNULL_BEGIN
@protocol HLSv7DemuxerDelegate
-(void)videoFrameReceived:(CMSampleBufferRef)frame;
-(void)onAudioSampleReceived:(NSData*)audioSample timestamp:(CMTime)timestamp;
@end


@interface HLSv7Demuxer : NSObject
-(id) initWithSourceAddress:(NSString*)address;
-(void) start;
-(void) stop;
@property (nonatomic) bool paused;
@property (nonatomic, weak) id<HLSv7DemuxerDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
