//
//  StatesTableViewCell.h
//  ICW04-USStatesWithPlist
//
//  Created by Asdruval De Leon on 11/13/17.
//  Copyright © 2017 Asdruval De Leon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StatesTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgFlag;
@property (weak, nonatomic) IBOutlet UILabel *lblCapital;
@property (weak, nonatomic) IBOutlet UILabel *lblState;

@end
