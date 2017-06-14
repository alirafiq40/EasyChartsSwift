//
//  DrawCircleView.h
//  DrawByCollectionView
//
//  Created by yjsong on 17/5/7.
//  Copyright © 2017年 宋永建. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawPieChartView : UIView
@property (nonatomic, assign) CGPoint arcCenter;
- (void)resetCircleList:(NSArray *)circleModelList;

@end
