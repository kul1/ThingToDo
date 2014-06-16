//
//  XYZToDoListTableViewController.h
//  ThingToDo
//
//  Created by Kul on 6/16/2557 BE.
//  Copyright (c) 2557 Kul. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"

@interface XYZToDoListTableViewController : UITableViewController

@property NSMutableArray *toDoItems;

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;


@end
