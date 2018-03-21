//
//  NBTableViewCellStyle.h
//  LawMonkey
//
//  Created by 刘彬 on 16/3/27.
//  Copyright © 2016年 AiFa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NBTableViewCell.h"

@interface NBTableViewCellStyle : NSObject<NSCopying>

@property (nonatomic, assign          ) CGFloat                       cellHeight;
@property (nonatomic, assign          ) CGFloat                       contentViewMargin;
@property (nonatomic, assign          ) CGFloat                       backgroundImageMargin;

@property (nonatomic, strong          ) UIColor                       *backgroundColor;
@property (nonatomic, strong          ) UIColor                       *selectedBackgroundColor;
@property (nonatomic, strong          ) NSMutableDictionary           *backgroundImages;
@property (nonatomic, strong          ) NSMutableDictionary           *selectedBackgroundImages;

@property (nonatomic ,strong          ) UIColor                       *separateLineColor;
@property (nonatomic ,assign          ) CGFloat                       separateLineHeight;
@property (nonatomic, assign          ) CGFloat                       separateLineLeftPadding;
@property (nonatomic, assign          ) CGFloat                       separateLineRightPadding;


- (BOOL)hasCustomBackgroundImage;
- (UIImage *)backgroundImageForCellType:(NBTableViewCellType)cellType;
- (void)setBackgroundImage:(UIImage *)image forCellType:(NBTableViewCellType)cellType;

- (BOOL)hasCustomSelectedBackgroundImage;
- (UIImage *)selectedBackgroundImageForCellType:(NBTableViewCellType)cellType;
- (void)setSelectedBackgroundImage:(UIImage *)image forCellType:(NBTableViewCellType)cellType;

@end
