//
//  ViewController.m
//  AVDemo01
//
//  Created by lizihong on 2023/1/29.
//

#import "ViewController.h"
#import "KFAudioCaptureViewController.h"
#import "KFAudioMuxerViewController.h"
#import "KFAudioDemuxerViewController.h"
#import "KFAudioDecoderViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)audioVCDidTap:(id)sender {
    
    KFAudioCaptureViewController *vc = [KFAudioCaptureViewController new];
    
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)AudioMuxerDidTap:(id)sender {
    KFAudioMuxerViewController *vc = [KFAudioMuxerViewController new];
    
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)AudioDemuxerDidTap:(id)sender {
    KFAudioDemuxerViewController *vc = [KFAudioDemuxerViewController new];
    
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)AudioDecoderDidTap:(id)sender {
    KFAudioDecoderViewController *vc = [KFAudioDecoderViewController new];
    
    [self.navigationController pushViewController:vc animated:YES];
}


@end
