/*
 * YMKDraggablePinAnnotationView.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

#import "YMKPinAnnotationView.h"
#import "YMKDraggableAnnotation.h"
#import "YMKDraggablePinAnnotationViewDelegate+Protocol.h"

/**
 The interface of the draggable pin annotation view.
 */
@interface YMKDraggablePinAnnotationView : YMKPinAnnotationView {
@private
    BOOL _isMoving;
    
	id _draggablePinInternal;
	id<YMKDraggablePinAnnotationViewDelegate> _delegate;
}

/**
 Indicates whether the draggable pin annotation is currently being moved.
 */
@property (nonatomic, readonly) BOOL isMoving;

/**
 The delegate of the draggable pin annotation view.
 */
@property (nonatomic, assign) id<YMKDraggablePinAnnotationViewDelegate> delegate;

/**
 Designated initializer. Initializes a new draggable pin annotation view.
 @param annotation the annotation object associated with the view
 @param reuseIdentifier the identifier you need to reuse the view
 @return a new draggable annotation view
 */
- (id)initWithAnnotation:(id<YMKDraggableAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier;

@end
