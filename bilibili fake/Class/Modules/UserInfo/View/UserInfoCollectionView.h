//
//  UserInfoSubmitVideosView.h
//  bilibili fake
//
//  Created by cxh on 16/9/20.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserInfoSubmitVideosEntity.h"
#import "UserInfoCoinVideosEntity.h"
#import "UserInfoFavoritesEntity.h"
#import "UserInfoBangumiEntity.h"

@interface UserInfoCollectionView : UICollectionView<UICollectionViewDataSource,UICollectionViewDelegate>

@property(nonatomic,strong)UserInfoSubmitVideosEntity* submitVideosEntity;

@property(nonatomic,strong)UserInfoCoinVideosEntity* coinVideosEntity;

@property(nonatomic,strong)NSMutableArray<UserInfoFavoritesEntity*>* favoritesEntityArr;

@property(nonatomic,strong)UserInfoBangumiEntity* bangumiEntity;

@end
