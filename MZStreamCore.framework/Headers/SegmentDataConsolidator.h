//
//  SegmentDataConsolidator.h
//  Alamofire
//
//  Created by alex on 29/11/2019.
//

#import <Foundation/Foundation.h>
#import "HLSv7HttpStreamer.h"

NS_ASSUME_NONNULL_BEGIN

@interface SegmentDataConsolidator : NSObject<LiveStreamerDelegate>
-(void) segmentDataReceived:(NSData*)data trackID:(uint32_t)trackID mediaType:(AVMediaType)mediaType initSegment:(bool)initSegment rap:(bool)randomAccessPoint segmentIndex:(NSUInteger)segmentIndex fragmentIndex:(NSUInteger)fragmentIndex segmentStart:(bool)segmentStart timestamp:(double)firstPts;
-(void) playlistData:(NSString*)playlist trackID:(uint32_t)trackID mediaType:(AVMediaType)mediaType;
-(void) rootPlaylistData:(NSString*)playlist;
@property (nonatomic, weak) id<LiveStreamerConsolidatedDelegate> delegate;
@property (nonatomic) int expectedTracksCount;
@end

NS_ASSUME_NONNULL_END
