//
//  OpenALPlayer.h
//  MZPlayerPOC
//
//  Created by alex on 15/08/2019.
//  Copyright © 2019 alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenALPlayer : NSObject

-(void) putAudioData:(NSData*) audioData timestamp:(CMTime)pts line:(size_t)lineID;

@property (nonatomic) CMTime currentPTS;
-(void)start:(size_t)lineID;
-(void)stop;
-(size_t)createNextLineID;
+(instancetype)sharedPlayer;
@end

NS_ASSUME_NONNULL_END
