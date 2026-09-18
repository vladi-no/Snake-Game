//
//  SnakeState.h
//  Snake
//
//  Created by zhang xiaodong on 12-3-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SnakeState <NSObject>

- (void)SnakeDidDie;
- (void)SnakeDidEatFood;

@end
