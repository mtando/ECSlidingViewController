//
//  ECPercentDrivenInteractiveTransition.h
//  
//
//  Created by Michael Enriquez on 10/27/13.
//
//

#import <Foundation/Foundation.h>

@interface ECPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
@property (nonatomic, assign) id<UIViewControllerAnimatedTransitioning> animationController;
@property (nonatomic, assign, readonly) CGFloat percentComplete;
@property (nonatomic, assign, readonly) CGFloat duration;
- (void)updateInteractiveTransition:(CGFloat)percentComplete;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
@end