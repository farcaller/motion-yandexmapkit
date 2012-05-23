/*
 * YMKDraggablePinAnnotationViewDelegate+Protocol.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

@class YMKDraggablePinAnnotationView;

/**
 Provides information about draggable pin annotations to a map view.
 */
@protocol YMKDraggablePinAnnotationViewDelegate <NSObject>

@optional

/**
 Called when user did start interation with the pin annotation view
 @param pin annotation view is being interacted
 */
- (void)draggablePinAnnotationViewDidStartInteraction:(YMKDraggablePinAnnotationView *)view;

/**
 Called when user did start moving the pin annotation view
 @param pin annotation view is being moved
 */
- (void)draggablePinAnnotationViewDidStartMoving:(YMKDraggablePinAnnotationView *)view;

/**
 Called when user did end moving the pin annotation view
 @param pin annotation view is being moved
 */
- (void)draggablePinAnnotationViewDidEndMoving:(YMKDraggablePinAnnotationView *)view;

@end