/*
 * YMKPinAnnotationView.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>
#import "YMKAnnotationView.h"

/**
 The supported colors for pin annotations
 */
enum {
    YMKPinAnnotationColorBlue = 0,          /**< The head of the pin is blue */
    YMKPinAnnotationColorGreen,             /**< The head of the pin is green */
    YMKPinAnnotationColorBlueCommercial     /**< The head of the pin is blue with a yellow star */
};
typedef NSUInteger YMKPinAnnotationColor;

/**
 The YMKPinAnnotationView class provides a concrete annotation view that displays a pin icon.
 Using this class, you can configure the type of pin to drop and whether you
 want the pin to be animated into place.
 */
@interface YMKPinAnnotationView : YMKAnnotationView {
@private
	id _pinInternal;
	BOOL _animatesDrop;
	YMKPinAnnotationColor _pinColor;
}

/**
 Specifies whether pin annotation view should be animated upon adding to the map
 */
@property (nonatomic, assign) BOOL animatesDrop;

/**
 Specifies pin color
 */
@property (nonatomic, assign) YMKPinAnnotationColor pinColor;

@end
