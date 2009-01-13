//  Created by Matthew McCullough of Ambient Ideas, LLC on 11/9/08.
//  Free for any use for any purpose.  No license restrictions.

#import <UIKit/UIKit.h>

@interface IPhoneWSConsumerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource> {
	IBOutlet UITextField *txtContestantName;
	IBOutlet UILabel *lblStatus;
	IBOutlet UIPickerView *pckContestants;
	NSMutableArray *pickerData;
}
	
@property(nonatomic,retain) IBOutlet UITextField *txtContestantName;
@property(nonatomic,retain) IBOutlet UILabel *lblStatus;
@property(nonatomic,retain) UIPickerView *pckContestants;
@property(nonatomic,retain) NSMutableArray *pickerData;

- (IBAction) addContestant:(id) sender;
- (IBAction) pickWinner:(id) sender;

- (BOOL)textFieldShouldReturn:(UITextField *)theTextField;

//- (NSString*)pickWinnerWS;
@end

