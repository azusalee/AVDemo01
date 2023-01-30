//
//  KFDemuxerConfig.m
//  AVDemo01
//
//  Created by lizihong on 2023/1/30.
//

#import "KFDemuxerConfig.h"

@implementation KFDemuxerConfig

- (instancetype)init {
    self = [super init];
    if (self) {
        _demuxerType = KFMediaAV;
    }
    
    return self;
}

@end
