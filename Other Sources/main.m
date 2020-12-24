/*
 Copyright (C) 2016 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 Standard main file.
 */

#import <UIKit/UIKit.h>

#import "Camera2ElementalStreamApplicationDelegate.h"

int main(int argc, char *argv[])
{
  int retVal = 0;
  @autoreleasepool {
    retVal = UIApplicationMain( argc, argv, nil, NSStringFromClass( [Camera2ElementalStreamApplicationDelegate class] ) );
  }
  return retVal;
}