//
//  KFMuxerConfig.m
//  AVDemo01
//
//  Created by lizihong on 2023/1/30.
//

#import "KFMuxerConfig.h"

@implementation KFMuxerConfig

- (instancetype)init {
    self = [super init];
    if (self) {
        _muxerType = KFMediaAV;
        _preferredTransform = CGAffineTransformIdentity;
    }
    return self;
}

@end
