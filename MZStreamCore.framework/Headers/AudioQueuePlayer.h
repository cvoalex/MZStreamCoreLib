//
//  AudioQueuePlayer.h
//  LiveStreamer
//
//  Created by alex on 08/05/2017.
//  Copyright © 2017 alex. All rights reserved.
//

#ifndef AudioQueuePlayer_h
#define AudioQueuePlayer_h

#import <AudioToolbox/AudioToolbox.h>
#import <CoreMedia/CoreMedia.h>

@interface AudioQueuePlayer : NSObject
-(id) initWithSampleRate:(int)sampleRate channels:(int)channels;
-(void) putAudioData:(NSData*) audioData;
@end


#endif /* AudioQueuePlayer_h */
