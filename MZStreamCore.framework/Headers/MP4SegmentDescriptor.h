//
//  MP4SegmentDescriptor.h
//  Alamofire
//
//  Created by alex on 29/11/2019.
//

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MP4SegmentDescriptor : NSObject

@property (nonatomic) NSData* data;
@property (nonatomic) NSUInteger trackID;
@property (nonatomic) AVMediaType mediaType;
@property (nonatomic) bool initSegment;
@property (nonatomic) bool randomAccessPoint;
@property (nonatomic) NSUInteger segmentIndex;
@property (nonatomic) NSUInteger fragmentIndex;
@property (nonatomic) bool segmentStart;
@property (nonatomic) double firstPts;

-(instancetype)initWithData: (NSData*)data trackID:(uint32_t)trackID mediaType:(AVMediaType)mediaType initSegment:(bool)initSegment rap:(bool)randomAccessPoint segmentIndex:(NSUInteger)segmentIndex fragmentIndex:(NSUInteger)fragmentIndex segmentStart:(bool)segmentStart timestamp:(double)firstPts;

@end

NS_ASSUME_NONNULL_END
