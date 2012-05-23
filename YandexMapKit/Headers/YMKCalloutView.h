/*
 * YMKCalloutView.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <UIKit/UIKit.h>
#import "YMKCalloutContentView-Protocol.h"

@class YMKCalloutView;


@protocol YMKCalloutViewDelegate
@optional

- (void)calloutViewGotSingleTap:(YMKCalloutView*)view;
- (void)calloutViewGotTapAtLeftAccessoryView:(YMKCalloutView*)view;
- (void)calloutViewGotTapAtRightAccessoryView:(YMKCalloutView*)view;

@end


@interface YMKCalloutView : UIView {
}

@property (nonatomic, assign) id delegate;

@property (nonatomic, retain) UIView *leftView;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic, retain) UIView<YMKCalloutContentView> * contentView;

@property (nonatomic, readonly) CGRect nonTransformedFrame;
@property (nonatomic, assign, readonly) BOOL highlighted;

@property (nonatomic, copy, readonly) NSString *reuseIdentifier;

- (id)initWithReuseIdentifier:(NSString *)aReuseIdentifier;

- (void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect; // Point in points ({.5,.5} = center of superview). Rect in superview coordinates.
- (void)hide;
- (void)showInView:(UIView*)view;

- (void)setLeftView:(UIView *)newLeftView animated:(BOOL)animated;
- (void)setRightView:(UIView *)newRightView animated:(BOOL)animated;

- (void)animateAppearance;

+ (CGFloat)minimumSidePadding;
- (CGSize)sizeWithContentView:(UIView *)contentView 
					 leftView:(UIView *)leftView 
					rightView:(UIView *)rightView
				 boundaryRect:(CGRect)rect;

- (void)prepareForReuse;

@end
