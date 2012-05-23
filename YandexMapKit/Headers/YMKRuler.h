/*
 * YMKRuler.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

/**
 Instance of YMKRuler object lets you control ruler appearance in the bottom right
 corner of the map
 */
@interface YMKRuler : UIView {
    @private
    UIFont *_labelFont;
    UIColor *_labelBackgroundColor;
    double _scale;
}

/**
 The current map view scale defined as meters per 100px.
 */
@property (nonatomic, assign) double scale;

@end
