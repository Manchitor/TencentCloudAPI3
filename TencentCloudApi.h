//
//  TencentCloudApi.h
//  Skoda
//
//  Created by 刘永吉 on 2021/3/5.
//  Copyright © 2021 rongyiqiche Data and Technology Shanghai Co. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TencentCloudApi : NSObject

@property(nonatomic, copy)NSString * SECRET_ID;
@property(nonatomic, copy)NSString * SECRET_KEY;
@property(nonatomic, copy)NSString * VERSION;
@property(nonatomic, copy)NSString * HOST;
@property(nonatomic, copy)NSString * SERVICE;


+(instancetype)standard;

///配置基础项
-(void)setConfig:(NSDictionary *)config;

///请求TencentCloudApi
-(void)getResult:(NSDictionary *)params
         success:(void (^)(NSDictionary * obj))success
         failure:(void (^)(NSError *__nullable error))failure;
@end

NS_ASSUME_NONNULL_END
