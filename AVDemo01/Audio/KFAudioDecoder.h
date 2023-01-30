//
//  KFAudioDecoder.h
//  AVDemo01
//
//  Created by lizihong on 2023/1/30.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@interface KFAudioDecoder : NSObject
@property (nonatomic, copy) void (^sampleBufferOutputCallBack)(CMSampleBufferRef sample); // 解码器数据回调。
@property (nonatomic, copy) void (^errorCallBack)(NSError *error); // 解码器错误回调。

- (void)decodeSampleBuffer:(CMSampleBufferRef)sampleBuffer; // 解码。
@end

NS_ASSUME_NONNULL_END 
