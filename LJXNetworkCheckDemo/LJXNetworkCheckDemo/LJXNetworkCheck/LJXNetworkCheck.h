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
/** 是否有网络 */
+ (BOOL)isConnect;
/** 当前网络状态 */
+ (NetworkStatus)currentNetworkState;
/** 获取MCC MNC */
+ (NSString *)getMCCAndMNC;

@end
