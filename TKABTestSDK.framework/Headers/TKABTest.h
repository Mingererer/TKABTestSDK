//
//  TKABTest.h
//  TKABTestSDK

//  Created by 徐璇 on 2018/9/27.
//  Copyright © 2018 TaiLife. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TKABTestModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface TKABTest : NSObject


/**
 初始化方法

 @param appKey 与服务器端约定的appkey，用于鉴权，成功后会自动获取用户命中的test
 */
+ (void)startWithAppKey:(NSString *)appKey;


/**
 获取某个test对应的相关信息

 @param testName test名名称
 @return test的相关信息，包含名称，命中类型，ID等，如果未曾查询到该测试，返回nil，查询失败（包含网络错误和服务器错误等）返回一个带有失败状态的model对象
 */
+ (TKABTestModel *)testModelWithTestName:(NSString *)testName;


@end

NS_ASSUME_NONNULL_END
