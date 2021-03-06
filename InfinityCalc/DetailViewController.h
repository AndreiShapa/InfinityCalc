//
//  DetailViewController.h
//  InfinityCalc
//
//  Created by Max Greenwald on 2/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MoreTableViewController.h"
@class ViewController;
#import "CalcEngine.h"
#import "ViewController.h"
#import "iPhoneViewController.h"

NSString *theTempString;

@interface DetailViewController : UIViewController{
    UIStepper *theStepper;
    UILabel *theLabel; 
    UISegmentedControl *theSegmentedControl;
    UILabel *answer;
    UITextField *theTextField;
    UIButton *theButton;
    UIView *view1;
    UIView *view2;
    UIStepper *theStepperiPad;
    UILabel *theLabeliPad; 
    UISegmentedControl *theSegmentedControliPad;
    UISegmentedControl *nightMode;
    UISegmentedControl *nightModeiPad;
    UISegmentedControl *degRad;
    UISegmentedControl *degRadiPad;
}

-(IBAction)valueChanged:(UIStepper *)sender;

-(IBAction)colorChanged:(id)sender;
-(IBAction)switchToNightMode:(id)sender;
-(IBAction)degreesRadians:(id)sender;
-(void)iPadColor;


@property (nonatomic, retain) IBOutlet UIStepper *theStepper;
@property (nonatomic, retain) IBOutlet UILabel *theLabel;
@property (nonatomic, retain) IBOutlet UISwitch *theSwitch;
@property (nonatomic, retain) IBOutlet UISegmentedControl *theSegmentedControl;
@property (nonatomic, retain) IBOutlet UILabel *answer;
@property (nonatomic, retain) IBOutlet UITextField *theTextField;
@property (nonatomic, retain) IBOutlet UIButton *theButton;
@property (nonatomic, retain) IBOutlet UIView *view1;
@property (nonatomic, retain) IBOutlet UIView *view2;
@property (nonatomic, retain) IBOutlet UIStepper *theStepperiPad;
@property (nonatomic, retain) IBOutlet UILabel *theLabeliPad;
@property (nonatomic, retain) IBOutlet UISegmentedControl *theSegmentedControliPad;
@property (nonatomic, retain) IBOutlet UISegmentedControl *nightMode;
@property (nonatomic, retain) IBOutlet UISegmentedControl *nightModeiPad;
@property (nonatomic, retain) IBOutlet UISegmentedControl *degRad;
@property (nonatomic, retain) IBOutlet UISegmentedControl *degRadiPad;


@end
