//
//  XYZToDoItem.h
//  ThingToDo
//
//  Created by Kul on 6/16/2557 BE.
//  Copyright (c) 2557 Kul. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
