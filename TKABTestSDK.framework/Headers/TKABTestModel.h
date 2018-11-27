//
//  TKABTestModel.h
//  TKABTestSDK
//
//  Created by 徐璇 on 2018/9/27.
//  Copyright © 2018 TaiLife. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, TKABTestStatus) {
    TKABTestStatusSuccess , //成功命中test
    TKABTestStatusFail,//命中失败（网络错误，服务器错误等）
//    TKABTestStatusClose,//test已经关闭
};



@interface TKABTestModel : NSObject



/**
 testID
 */
@property (nonatomic, copy) NSString *testID;


/**
 test的A/B类型
 */
@property (nonatomic, copy) NSString *testValue;


/**
 获取test是否成功
 */

@property (nonatomic, assign) TKABTestStatus status;

/**
 数据埋点时需要拼接在事件名称后面的标志，规则为埋点事件名/页面名_abtestkey_实验结果（0、1、2、3...）
 */
@property (nonatomic, copy) NSString *dataLabel;


+ (TKABTestModel *)abt_modelWithDic:(NSDictionary * _Nullable )dic;

@end

NS_ASSUME_NONNULL_END
