//
//  KFAudioConfig.h
//  AVDemo01
//
//  Created by lizihong on 2023/1/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 音频采样配置
@interface KFAudioConfig : NSObject
+ (instancetype)defaultConfig;

@property (nonatomic, assign) NSUInteger channels; // 声道数，default: 2。
@property (nonatomic, assign) NSUInteger sampleRate; // 采样率，default: 44100。
@property (nonatomic, assign) NSUInteger bitDepth; // 量化位深，default: 16。
@end

NS_ASSUME_NONNULL_END
