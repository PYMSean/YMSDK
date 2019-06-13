//
//  QTOpenSDK.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/4.
//  Copyright © 2018年 qt. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "QTOBeanType.h"
#import "QTOItemList.h"
#import "QTOItemDictionary.h"
#import "QTOItemPageList.h"
#import "QTOOndemandChannel.h"
#import "QTOOndemandCategory.h"
#import "QTORadioChannel.h"
#import "QTOUserInfo.h"
#import "QTOFavouriteChannel.h"
#import "QTOPlayHistory.h"
#import "QTORadioChannelProgram.h"
#import "QTOOndemandChannelProgram.h"
#import "QTOBroadcaster.h"
#import "QTORadioChannelProgramList.h"
#import "QTOSubscription.h"
#import "QTOSearchResult.h"
#import "QTOChannelAccessInfo.h"
#import "QTORadioCategory.h"
#import "QTOPlayer.h"

@interface QTOpenSDK : NSObject

@property (nonatomic,strong,readonly) NSString * clientId;
@property (nonatomic,strong,readonly) NSString * userId;        // 蜻蜓用户id
@property (nonatomic,strong,readonly) NSString * accessToken;
@property (nonatomic,strong,readonly) NSString * refreshToken;
@property (nonatomic,strong,readonly) NSString * redirectUrl;
@property (nonatomic,strong,readonly) NSString * host;

+(NSString *)version;
-(BOOL)isTokenExpired;

/**
 返回QTOpenSDK实例
 */
+(QTOpenSDK *)defaultService;

/**
 注册sdk
 应该在应用启动后，立即调用
 */
+(void)registerClientId:(NSString *)clientId
                   host:(NSString *)host
            redirectUrl:(NSString *)redirectUrl;

/**
 蜻蜓OAuth
 呼出一个OAuth授权画面
 */
-(void)qtOAuthWithSuccessHandler:(void (^)(void))success failed:(void (^)(NSError * error))failed;

/**
 第三方账号登录
 当设置第三方账号后，sdk会使用第三方账号静默登录
 当设置为nil时，为匿名登录
*/
-(void)loginWithCoopUserId:(NSString *)coopUserId
                   success:(void (^)(NSString * coopUserId))success
                    failed:(void (^)(NSError * error,NSString * coopUserId))failed;


-(NSString *)coopUserId;

/**
 删除本地OAuth信息
 */
-(void)clearOAuthInfo;

#pragma mark - 点播专辑
/**
 获取点播专辑节目列表，每页返回30条信息

 @param channelId 点播专辑id
 @param page 分页
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelProgramListWithChannelId:(NSInteger)channelId
                                                 page:(NSInteger)page
                                              success:(void(^)(QTOItemPageList<QTOOndemandChannelProgram *> * response,NSInteger channelId))success
                                               failed:(void(^)(NSError * error))failed;


/**
 获取点播专辑节目列表，每页返回30条信息

 @param channelId 专辑id
 @param order 排序 升序/降序
 @param page 分页
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelProgramListWithChannelId:(NSInteger)channelId
                                              orderBy:(QTOChannelProgramListOrderBy)order
                                                 page:(NSInteger)page
                                              success:(void(^)(QTOItemPageList<QTOOndemandChannelProgram *> * response,NSInteger channelId))success
                                               failed:(void(^)(NSError * error))failed;


/**
 获取专辑中指定的节目的id所在页的节目列表
 
 @param channelId 点播专辑id
 @param programId 节目id
 @param order 排序，升序/降序
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelProgramListWithChannelId:(NSInteger)channelId
                                            programId:(NSInteger)programId
                                              orderBy:(QTOChannelProgramListOrderBy)order
                                              success:(void(^)(QTOItemPageList<QTOOndemandChannelProgram *> * response,NSInteger channelId))success
                                               failed:(void(^)(NSError * error))failed;


/**
 获取指定条件的专辑列表，每页返回30条信息，默认排序
 
 @param categoryId 分类id
 @param page 分页
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelListWithCategoryId:(NSInteger)categoryId
                                           page:(NSInteger)page
                                        success:(void(^)(QTOItemPageList<QTOOndemandChannel *> * itemlist,NSInteger categoryId))success
                                         failed:(void(^)(NSError * error))failed;

/**
 获取指定条件的专辑列表，每页返回30条信息

 @param categoryId 分类id
 @param page 分页
 @param orderBy 排序类型
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelListWithCategoryId:(NSInteger)categoryId
                                           page:(NSInteger)page
                                        orderBy:(QTOChannelListOrderBy)orderBy
                                        success:(void(^)(QTOItemPageList<QTOOndemandChannel *> * itemlist,NSInteger categoryId))success
                                         failed:(void(^)(NSError * error))failed;


/**
 批量获取专辑信息，最多一次获取30个，
 如果传入超过30个专辑id，将会返回失败
 注意 返回的词典结果，key是string类型的专辑id

 @param channelIds 专辑id列表
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelListWithChannelIds:(NSArray<NSNumber *> *)channelIds
                                        success:(void(^)(QTOItemDictionary<QTOOndemandChannel *> * dict))success
                                         failed:(void(^)(NSError * error))failed;

/**
 获取所有专辑分类

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelCategoriesWithSuccess:(void(^)(QTOItemList<QTOOndemandCategory *> * itemlist))success
                                            failed:(void(^)(NSError * error))failed;

/**
 获取指定专辑信息

 @param channelId 专辑id
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelWithChannelId:(NSInteger)channelId
                                   success:(void(^)(QTOOndemandChannel * item))success
                                    failed:(void(^)(NSError * error))failed;


/**
 获取点播专辑播放权限信息

 @param channelId 点播专辑id
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestOndemandChannelAccessInfo:(NSInteger)channelId
                                success:(void(^)(QTOChannelAccessInfo * info, NSInteger channelId))success
                                 failed:(void(^)(NSError * error))failed;

#pragma mark - 广播电台

/**
 获取广播电台列表，每页返回30条信息

 @param page 分页
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestRadioChannelListWithPage:(NSInteger)page
                               success:(void(^)(QTOItemPageList<QTORadioChannel *> * itemlist))success
                                failed:(void(^)(NSError * error))failed;


/**
 获取某个分类下的广播电台列表，每页返回30条信息

 @param categoryId 分类id
 @param page 分页
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestRadioChannelListWithCategoryId:(NSInteger)categoryId
                                        page:(NSInteger)page
                                     success:(void(^)(QTOItemPageList<QTORadioChannel *> * itemlist))success
                                      failed:(void(^)(NSError * error))failed;


/**
 获取指定广播电台信息

 @param channelId 广播电台id
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestRadioChannelWithChannelId:(NSInteger)channelId
                                success:(void(^)(QTORadioChannel * item))success
                                 failed:(void(^)(NSError * error))failed;

/**
 获取电台节目单

 @param channelId 广播电台id
 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestRadioChannelProgramListWithChannelId:(NSInteger)channelId
                                           success:(void(^)(QTORadioChannelProgramList * item,NSInteger channelId))success
                                            failed:(void(^)(NSError * error))failed;

/**
 获取电台分类

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestRadioCategoriesWithSuccess:(void(^)(QTORadioCategorySet * radioCategorySet))success
                                  failed:(void(^)(NSError * error))failed;


#pragma mark - 用户相关

/**
 获取用户信息

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestUserInfoWithSuccess:(void(^)(QTOUserInfo * item))success
                           failed:(void(^)(NSError * error))failed;

/**
 获取用户收藏专辑

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestFavouriteChannelsWithSuccess:(void(^)(QTOItemList<QTOFavouriteChannel *> * itemlist))success
                                    failed:(void(^)(NSError * error))failed;


/**
 获取用户收听历史（返回的QTOPlayHistory中不包含标有详细的字段）

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestPlayHistoryWithSuccess:(void(^)(QTOItemList<QTOPlayHistory *> * itemlist))success
                              failed:(void(^)(NSError * error))failed;


/**
 删除收听历史,返回指定个格式的收听历史列表
 
 当format指定为QTOBeanInfoFormatFullSize时，
 返回数据中会返回标有详细的数据

 @param delChannels 要删除的收听历史的点播专辑或广播电台id列表
 @param success 成功回调
 @param failed 失败回调
 */
-(void)syncPlayHistoryWithDelChannels:(NSArray<NSNumber *>*)delChannels
                              success:(void(^)(QTOItemList<QTOPlayHistory *> * itemlist))success
                               failed:(void(^)(NSError * error))failed;

/**
 获取用户购买列表

 @param success 成功回调
 @param failed 失败回调
 */
-(void)requestSubscriptionsWithSuccess:(void(^)(QTOItemList<QTOSubscription *> * itemlist))success
                                failed:(void(^)(NSError * error))failed;

/**
 同步用户收藏

 @param addChannelIds 增加的收藏专辑id数组
 @param delChannels 删除的收藏专辑id数组
 @param success 成功回调
 @param failed 失败回调
 */
-(void)syncUserFavouriteChannelWithAddChannels:(NSArray<NSNumber*>*)addChannelIds
                                   delChannels:(NSArray<NSNumber *>*)delChannels
                                       success:(void(^)(void))success
                                        failed:(void(^)(NSError * error))failed;
#pragma mark - 搜索

/**
 搜索蜻蜓内容，可以搜索点播专辑，电台和点播节目

 @param keyword 关键字
 @param type 搜索类型
 @param page 结果分页，每页30条
 @param success 成功回调
 @param failed 失败回调
 */
-(void)searchContentWithKeyword:(NSString *)keyword
                           type:(QTOSearchContentType)type
                           page:(NSInteger)page
                        success:(void(^)(QTOItemPageList<QTOSearchResult *> * itemlist,NSString * keyword,QTOSearchContentType type))success
                         failed:(void(^)(NSError * error))failed;


@end
