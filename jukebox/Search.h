//
//  FirstViewController.h
//  jukebox
//
//  Created by Shota  on 12/20/14.
//  Copyright (c) 2014 ftwave. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController<NSURLConnectionDelegate,UISearchDisplayDelegate>
{
    NSMutableData *_responseData;
    
}
@property (nonatomic, strong) NSArray *tableData;
@property (nonatomic, strong) NSMutableArray *searchResult;
@end
