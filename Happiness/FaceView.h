//
//  FaceView.h
//  Happiness
//
//  Created by Ron Shteinberg on 12/6/12.
//  Copyright (c) 2012 Ron Shteinberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

- (void)pinch:(UIPinchGestureRecognizer * )gesture;

@end
