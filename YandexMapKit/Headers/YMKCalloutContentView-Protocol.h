/*
 * YMKCalloutContentView.h
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
 The protocol is used to build custom callout view. To use this protocol, you
 adopt it in any UIView subclass that intendent to use as custom callout view.
 */

@protocol YMKCalloutContentView <NSObject>

@optional

/**
 A Boolean value indicating whether the view is highlighted. You should not call this method manually.
 The map view invokes it in response to touch events entering or exiting the view’s bounds. Use
 this to provide visual feedback for the user.
 */
- (void)setHighlighted:(BOOL)highlighted;

@end
