//
//  KFDemuxerConfig.h
//  AVDemo01
//
//  Created by lizihong on 2023/1/30.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import "KFMediaBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface KFDemuxerConfig : NSObject
@property (nonatomic, strong) AVAsset *asset; // 待解封装的资源。
@property (nonatomic, assign) KFMediaType demuxerType; // 解封装类型。
@end

NS_ASSUME_NONNULL_END 
