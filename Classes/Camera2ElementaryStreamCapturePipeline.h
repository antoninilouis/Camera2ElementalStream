//
//  Camera2ElementaryStreamCapturePipeline.h
//  Camera2ElementaryStream (iOS)
//
//  Created by Antonini Louis on 2020-12-25.
//

#ifndef Camera2ElementaryStreamCapturePipeline_h
#define Camera2ElementaryStreamCapturePipeline_h

#import <AVFoundation/AVFoundation.h>
#import <VideoToolbox/VideoToolbox.h>

@protocol Camera2ElementaryStreamCapturePipelineDelegate
@required
- (void)startRendering:(AVCaptureVideoPreviewLayer *)previewLayer;

@end

@interface Camera2ElementaryStreamCapturePipeline : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

- (instancetype)initWithDelegate:(id<Camera2ElementaryStreamCapturePipelineDelegate>)delegate callbackQueue:(dispatch_queue_t)queue;

- (void)startRunning;

- (void)startRendering;

// Because we specify __attribute__((NSObject)) ARC will manage the lifetime of the backing ivars even though they are CF types.
@property(nonatomic, strong) __attribute__((NSObject)) CMFormatDescriptionRef outputVideoFormatDescription;
@property BOOL testBlockWriting;

@end

#endif /* Camera2ElementaryStreamCapturePipeline_h */
