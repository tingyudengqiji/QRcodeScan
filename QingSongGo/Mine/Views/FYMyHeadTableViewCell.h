//
//  FYMyHeadTableViewCell.h
//  QingSongGo
//
//  Created by 方进 on 2017/8/18.
//  Copyright © 2017年 方进. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FYMyHeadTableViewCell;
//@protocol FYHeadCellDelegate <NSObject>
//
////- (void)jumpLogin:(id)sender;
//
//@end

@interface FYMyHeadTableViewCell : UITableViewCell

@property (nonatomic, strong) UIButton *setUpBtn;
@property (nonatomic, strong) UIImageView *headImg;//头像
@property (nonatomic, strong) UILabel *nameLbl;//登录人姓名
@property (nonatomic, strong) UILabel *infoLbl;//登录人信息


-(void)creatUIWithMode:(FYUserAccount*)dic;

@end
