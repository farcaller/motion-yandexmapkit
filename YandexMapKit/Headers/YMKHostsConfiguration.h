/*
 * YMKHostsConfiguration.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

@interface YMKHostsConfiguration : NSObject {
@private
    NSString * startupURLString_;
    NSString * tileRequestURLString_;
    NSString * jamsRequestURLString_;
    NSString * jamStylesURLString_;
    NSString * routeBuilderURLString_;
    NSString * ymapsmlStylesURLString_;
}
@property (nonatomic, readonly, copy) NSString * startupURLString;
@property (nonatomic, readonly, copy) NSString * tileRequestURLString;
@property (nonatomic, readonly, copy) NSString * jamsRequestURLString;
@property (nonatomic, readonly, copy) NSString * jamStylesURLString;
@property (nonatomic, readonly, copy) NSString * routeBuilderURLString;
@property (nonatomic, readonly, copy) NSString * ymapsmlStylesURLString;

@end
