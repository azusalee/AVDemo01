//
//  KFAudioTools.h
//  AVDemo01
//
//  Created by lizihong on 2023/1/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KFAudioTools : NSObject

// 按音频参数生产 AAC packet 对应的 ADTS 头数据。
// 当编码器编码的是 AAC 裸流数据时，需要在每个 AAC packet 前添加一个 ADTS 头用于解码器解码音频流。
// 参考文档：
// ADTS 格式参考：http://wiki.multimedia.cx/index.php?title=ADTS
// MPEG-4 Audio 格式参考：http://wiki.multimedia.cx/index.php?title=MPEG-4_Audio#Channel_Configurations
+ (NSData *)adtsDataWithChannels:(NSInteger)channels sampleRate:(NSInteger)sampleRate rawDataLength:(NSInteger)rawDataLength;

@end

NS_ASSUME_NONNULL_END
