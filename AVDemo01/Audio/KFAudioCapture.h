//
//  KFAudioCapture.h
//  AVDemo01
//
//  Created by lizihong on 2023/1/29.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import "KFAudioConfig.h"

NS_ASSUME_NONNULL_BEGIN

// 音频采样
@interface KFAudioCapture : NSObject
// 禁用new
+ (instancetype)new NS_UNAVAILABLE;
// 禁用init
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithConfig:(KFAudioConfig *)config;

@property (nonatomic, strong, readonly) KFAudioConfig *config;
@property (nonatomic, copy) void (^sampleBufferOutputCallBack)(CMSampleBufferRef sample); // 音频采集数据回调。
@property (nonatomic, copy) void (^errorCallBack)(NSError *error); // 音频采集错误回调。

- (void)startRunning; // 开始采集音频数据。
- (void)stopRunning; // 停止采集音频数据。
@end

NS_ASSUME_NONNULL_END
