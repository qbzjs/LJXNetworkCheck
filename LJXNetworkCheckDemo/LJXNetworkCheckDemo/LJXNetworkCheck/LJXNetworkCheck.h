//
//  LJXNetworkCheck.h
//  LJXNetworkCheckDemo
//
//  Created by jianxin.li on 16/4/21.
//  Copyright © 2016年 m6go.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Reachability.h"

@interface LJXNetworkCheck : NSObject

+ (instancetype)sharedNetworkCheck;
+ (BOOL)isConnect;
+ (NetworkStatus)currentNetworkState;

@end
