//
//  HttpUploader.h
//  LiveStreamer
//
//  Created by alex on 05/05/2019.
//  Copyright © 2019 alex. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HttpUploader : NSObject

-(NSURLSessionDataTask*)uploadFileWithData:(NSData*)data url:(NSURL*)url callback:(void (^)(NSData *data, NSURLResponse *response, NSError *error))callback;
-(size_t)uploadStreamedFileWithUrl:(NSURL*)url callback:(void (^)(NSData *data, NSURLResponse *response, NSError *error))callback;
-(void)putData:(uint8_t*)data size:(size_t)size task:(size_t)taskID;
-(void)closeStreamWithID:(size_t)taskID;

@property (nonatomic) NSString* putMethod;
@property (nonatomic) NSString* login;
@property (nonatomic) NSString* password;

@end

NS_ASSUME_NONNULL_END
