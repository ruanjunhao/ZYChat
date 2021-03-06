//
//  GJGCGroupPersonInformationShowMap.h
//  GJGroupChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-10.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GJGCInformationCellContentModel.h"

@interface GJGCGroupPersonInformationShowMap : NSObject

+ (GJGCInformationCellContentModel *)itemWithContentValueBaseText:(NSString *)textContent tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithContentValueSummaryText:(NSString *)summaryContent tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithTextAndIcon:(NSString *)text icon:(NSString *)iconName tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithLevelValue:(NSString *)level tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithPersonPhotoBox:(NSArray *)photoUrls name:(NSString *)name distance:(NSString *)distance time:(NSString *)time
                                                        sex:(NSString *)sex age:(NSString *)age starName:(NSString *)starName helloCount:(NSString *)helloCount expandLabels:(NSString *)expandLabels
                                             labelColorType:(NSString *)labelColorType;

+ (GJGCInformationCellContentModel *)itemWithGroupPhotoBox:(NSArray *)photoUrls name:(NSString *)name distance:(NSString *)distance tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithGroupShow:(NSArray *)groupInfoArray text:(NSString *)text tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithMemberShow:(NSArray *)memberInfoArray text:(NSString *)text tagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithProvinceId:(NSInteger )provinceId withCityId:(NSInteger )cityId withDistrictId:(NSInteger)districtId withTagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithDistrictId:(NSString *)districtName streetId:(NSString *)streetName withTagName:(NSString *)tagName;

+ (GJGCInformationCellContentModel *)itemWithFeedListCount:(NSInteger)count imageUrl:(NSString *)imageUrl content:(NSString *)content tagName:(NSString *)tagName;

/**
 *  行业
 */
+ (GJGCInformationCellContentModel *)itemWithCompany:(NSString *)company withTagName:(NSString *)tagName;

/**
 *  个人资料页面, 重新划分区域,分割风格
 *
 *  @param informationArray
 */
+ (void)resetSubSectionForPersonInformationArray:(NSArray *)informationArray;

/**
 *  群组资料页面区域重新划分
 *
 *  @param informationArray
 */
+ (void)resetSubSectionForGroupInformationArray:(NSArray *)informationArray;

@end
