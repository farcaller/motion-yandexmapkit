/*
 * YMKMapLayerInfo.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>
#include <stdint.h>

/**
 An instance of YMKMapLayerInfo stores information about map layer supported
 by map view.
 */
@interface YMKMapLayerInfo : NSObject {
@private
    uint16_t _identifier;
    NSString * _requestString;
    NSString * _localizedName;
    BOOL _hasVersion;
    uint16_t _currentVersion;
    BOOL _auxiliary;
    uint16_t _sizeInPixels;
    BOOL _allowsNightMode;
}

/**
 Layer identifier
 */
@property (nonatomic, assign) uint16_t identifier;

/**
 Localized name of a layer. You can use it in layer switching UI
 */
@property (nonatomic, copy) NSString * localizedName;

/**
 Boolean flag indicating service map layer with various meta information.
 */
@property (nonatomic, assign) BOOL auxiliary; 

/**
 Size of a map layer tile in pixels.
 */
@property (nonatomic, assign) uint16_t sizeInPixels;

/**
 Boolean flag indicating whether map layer supports night mode. For example, 
 satellite layer doesn't support nigt mode.
 */
@property (nonatomic, assign) BOOL allowsNightMode;

@end
