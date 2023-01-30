//
//  KFAudioConfig.m
//  AVDemo01
//
//  Created by lizihong on 2023/1/29.
//

#import "KFAudioConfig.h"

@implementation KFAudioConfig

+ (instancetype)defaultConfig {
    KFAudioConfig *config = [[self alloc] init];
    config.channels = 2;
    config.sampleRate = 44100;
    config.bitDepth = 16;
    
    return config;
}

@end
