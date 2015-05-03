/*
 File: iPhoneGLEssentialPracticesAppDelegate.m
 Abstract: The application delegate.
 Version: 1.0
 
 */

//#import <UIKit/UISwipeGestureRecognizer.h>
//#import <UIKit/UITapGestureRecognizer.h>

#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#import "iPhoneGLEssentialsAppDelegate.h"

GLuint   viewFramebuffer;
GLfloat  rotation;
GLfloat  marcModelPosition[3];

#import "EAGLView.h"
#import <GLKit/GLKit.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


//====================================================================================================================================================
@implementation iPhoneGLEssentialPracticesAppDelegate
//===================================================



@synthesize window;
@synthesize glView;



//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

//----------------------------------------------------------------------------------------------------------------------------------------------------
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{    
    
        // Override point for customization after application launch.
    
        //===========================================================================================================================================================
        CGFloat capw;
        CGFloat caph;    
        CGAffineTransform trans1;    
        //===========================================================================================================================================================   
        //===========================================================================================================================================================
        touchScreenHips[0] = backingHeight * .8;
        touchScreenHips[1] = backingHeight * .1;    
        touchScreenHips[2] = backingWidth  * .55;
        touchScreenHips[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* Hips = [UIImage imageNamed:@"hips.png"];
        capw = Hips.size.width;
        caph = Hips.size.height;
        UIImage* HipsTiled = [Hips resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* HipsImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenHips[2] , touchScreenHips[0], touchScreenHips[3], touchScreenHips[1])];
        HipsImageView.image = HipsTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        HipsImageView.transform = trans1;   
        [window addSubview: HipsImageView];     
        //===========================================================================================================================================================   
        //===========================================================================================================================================================
        touchScreenTorso[0] = backingHeight * .8;
        touchScreenTorso[1] = backingHeight * .1;    
        touchScreenTorso[2] = backingWidth  * .7;
        touchScreenTorso[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* Torso = [UIImage imageNamed:@"torso.png"];
        capw = Torso.size.width;
        caph = Torso.size.height;
        UIImage* TorsoTiled = [Torso resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* TorsoImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenTorso[2] , touchScreenTorso[0], touchScreenTorso[3], touchScreenTorso[1])];
        TorsoImageView.image = TorsoTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        TorsoImageView.transform = trans1;   
        [window addSubview: TorsoImageView]; 
        //===========================================================================================================================================================   
        //===========================================================================================================================================================   
        touchScreenHead[0] = backingHeight * .8;
        touchScreenHead[1] = backingHeight * .1;    
        touchScreenHead[2] = backingWidth  * .85;
        touchScreenHead[3] = backingWidth  * .15;      
        //------------------------------------------------------
        UIImage* face = [UIImage imageNamed:@"head.png"];
        capw = face.size.width;
        caph = face.size.height;
        UIImage* faceTiled = [face resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* faceImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenHead[2] , touchScreenHead[0], touchScreenHead[3], touchScreenHead[1])];
        faceImageView.image = faceTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        faceImageView.transform = trans1;   
        [window addSubview: faceImageView]; 
        //===========================================================================================================================================================   
        //===========================================================================================================================================================       
        touchScreenLeftUpperArm[0] = backingHeight * .9;
        touchScreenLeftUpperArm[1] = backingHeight * .1;    
        touchScreenLeftUpperArm[2] = backingWidth  * .85;
        touchScreenLeftUpperArm[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftUpperArm = [UIImage imageNamed:@"leftArmUpper.png"];
        capw = LeftUpperArm.size.width;
        caph = LeftUpperArm.size.height;
        UIImage* LeftUpperArmTiled = [LeftUpperArm resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftUpperArmImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftUpperArm[2] , touchScreenLeftUpperArm[0], touchScreenLeftUpperArm[3], touchScreenLeftUpperArm[1])];
        LeftUpperArmImageView.image = LeftUpperArmTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftUpperArmImageView.transform = trans1;   
        [window addSubview: LeftUpperArmImageView];     
        //================================================================
        touchScreenLeftLowerArm[0] = backingHeight * .9;
        touchScreenLeftLowerArm[1] = backingHeight * .1;    
        touchScreenLeftLowerArm[2] = backingWidth  * .7;
        touchScreenLeftLowerArm[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftLowerArm = [UIImage imageNamed:@"leftArmLower.png"];
        capw = LeftLowerArm.size.width;
        caph = LeftLowerArm.size.height;
        UIImage* LeftLowerArmTiled = [LeftLowerArm resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftLowerArmImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftLowerArm[2] , touchScreenLeftLowerArm[0], touchScreenLeftLowerArm[3], touchScreenLeftLowerArm[1])];
        LeftLowerArmImageView.image = LeftLowerArmTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftLowerArmImageView.transform = trans1;   
        [window addSubview: LeftLowerArmImageView];     
        //================================================================    
        touchScreenLeftHand[0] = backingHeight * .9;
        touchScreenLeftHand[1] = backingHeight * .1;    
        touchScreenLeftHand[2] = backingWidth  * .55;
        touchScreenLeftHand[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftHand = [UIImage imageNamed:@"leftHand.png"];
        capw = LeftHand.size.width;
        caph = LeftHand.size.height;
        UIImage* LeftHandTiled = [LeftHand resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftHandImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftHand[2] , touchScreenLeftHand[0], touchScreenLeftHand[3], touchScreenLeftHand[1])];
        LeftHandImageView.image = LeftHandTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftHandImageView.transform = trans1;   
        [window addSubview: LeftHandImageView];     
        //===========================================================================================================================================================   
        //===========================================================================================================================================================     
        touchScreenRightUpperArm[0] = backingHeight * .7;
        touchScreenRightUpperArm[1] = backingHeight * .1;    
        touchScreenRightUpperArm[2] = backingWidth  * .85;
        touchScreenRightUpperArm[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightUpperArm = [UIImage imageNamed:@"rightArmUpper.png"];
        capw = RightUpperArm.size.width;
        caph = RightUpperArm.size.height;
        UIImage* RightUpperArmTiled = [RightUpperArm resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightUpperArmImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightUpperArm[2] , touchScreenRightUpperArm[0], touchScreenRightUpperArm[3], touchScreenRightUpperArm[1])];
        RightUpperArmImageView.image = RightUpperArmTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightUpperArmImageView.transform = trans1;   
        [window addSubview: RightUpperArmImageView];     
        //================================================================ 
        touchScreenRightLowerArm[0] = backingHeight * .7;
        touchScreenRightLowerArm[1] = backingHeight * .1;    
        touchScreenRightLowerArm[2] = backingWidth  * .7;
        touchScreenRightLowerArm[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightLowerArm = [UIImage imageNamed:@"rightArmLower.png"];
        capw = RightLowerArm.size.width;
        caph = RightLowerArm.size.height;
        UIImage* RightLowerArmTiled = [RightLowerArm resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightLowerArmImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightLowerArm[2] , touchScreenRightLowerArm[0], touchScreenRightLowerArm[3], touchScreenRightLowerArm[1])];
        RightLowerArmImageView.image = RightLowerArmTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightLowerArmImageView.transform = trans1;   
        [window addSubview: RightLowerArmImageView];     
        //================================================================    
        touchScreenRightHand[0] = backingHeight * .7;
        touchScreenRightHand[1] = backingHeight * .1;    
        touchScreenRightHand[2] = backingWidth  * .55;
        touchScreenRightHand[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightHand = [UIImage imageNamed:@"rightHand.png"];
        capw = RightHand.size.width;
        caph = RightHand.size.height;
        UIImage* RightHandTiled = [RightHand resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightHandImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightHand[2] , touchScreenRightHand[0], touchScreenRightHand[3], touchScreenRightHand[1])];
        RightHandImageView.image = RightHandTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightHandImageView.transform = trans1;   
        [window addSubview: RightHandImageView];     
        //===========================================================================================================================================================   
        //===========================================================================================================================================================       
        touchScreenLeftUpperLeg[0] = backingHeight * .85;
        touchScreenLeftUpperLeg[1] = backingHeight * .1;    
        touchScreenLeftUpperLeg[2] = backingWidth  * .4;
        touchScreenLeftUpperLeg[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftUpperLeg = [UIImage imageNamed:@"leftLegUpper.png"];
        capw = LeftUpperLeg.size.width;
        caph = LeftUpperLeg.size.height;
        UIImage* LeftUpperLegTiled = [LeftUpperLeg resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftUpperLegImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftUpperLeg[2] , touchScreenLeftUpperLeg[0], touchScreenLeftUpperLeg[3], touchScreenLeftUpperLeg[1])];
        LeftUpperLegImageView.image = LeftUpperLegTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftUpperLegImageView.transform = trans1;   
        [window addSubview: LeftUpperLegImageView];     
        //================================================================        
        touchScreenLeftLowerLeg[0] = backingHeight * .85;
        touchScreenLeftLowerLeg[1] = backingHeight * .1;    
        touchScreenLeftLowerLeg[2] = backingWidth  * .25;
        touchScreenLeftLowerLeg[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftLowerLeg = [UIImage imageNamed:@"leftLegLower.png"];
        capw = LeftLowerLeg.size.width;
        caph = LeftLowerLeg.size.height;
        UIImage* LeftLowerLegTiled = [LeftLowerLeg resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftLowerLegImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftLowerLeg[2] , touchScreenLeftLowerLeg[0], touchScreenLeftLowerLeg[3], touchScreenLeftLowerLeg[1])];
        LeftLowerLegImageView.image = LeftLowerLegTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftLowerLegImageView.transform = trans1;   
        [window addSubview: LeftLowerLegImageView];     
        //================================================================    
        touchScreenLeftFoot[0] = backingHeight * .85;
        touchScreenLeftFoot[1] = backingHeight * .1;    
        touchScreenLeftFoot[2] = backingWidth  * .1;
        touchScreenLeftFoot[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* LeftFoot = [UIImage imageNamed:@"leftFoot.png"];
        capw = LeftFoot.size.width;
        caph = LeftFoot.size.height;
        UIImage* LeftFootTiled = [LeftFoot resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* LeftFootImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenLeftFoot[2] , touchScreenLeftFoot[0], touchScreenLeftFoot[3], touchScreenLeftFoot[1])];
        LeftFootImageView.image = LeftFootTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        LeftFootImageView.transform = trans1;   
        [window addSubview: LeftFootImageView];       
        //===========================================================================================================================================================   
        //===========================================================================================================================================================     
        touchScreenRightUpperLeg[0] = backingHeight * .75;
        touchScreenRightUpperLeg[1] = backingHeight * .1;    
        touchScreenRightUpperLeg[2] = backingWidth  * .4;
        touchScreenRightUpperLeg[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightUpperLeg = [UIImage imageNamed:@"rightLegUpper.png"];
        capw = RightUpperLeg.size.width;
        caph = RightUpperLeg.size.height;
        UIImage* RightUpperLegTiled = [RightUpperLeg resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightUpperLegImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightUpperLeg[2] , touchScreenRightUpperLeg[0], touchScreenRightUpperLeg[3], touchScreenRightUpperLeg[1])];
        RightUpperLegImageView.image = RightUpperLegTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightUpperLegImageView.transform = trans1;   
        [window addSubview: RightUpperLegImageView];     
        //================================================================        
        touchScreenRightLowerLeg[0] = backingHeight * .75;
        touchScreenRightLowerLeg[1] = backingHeight * .1;    
        touchScreenRightLowerLeg[2] = backingWidth  * .25;
        touchScreenRightLowerLeg[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightLowerLeg = [UIImage imageNamed:@"rightLegLower.png"];
        capw = RightLowerLeg.size.width;
        caph = RightLowerLeg.size.height;
        UIImage* RightLowerLegTiled = [RightLowerLeg resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightLowerLegImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightLowerLeg[2] , touchScreenRightLowerLeg[0], touchScreenRightLowerLeg[3], touchScreenRightLowerLeg[1])];
        RightLowerLegImageView.image = RightLowerLegTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightLowerLegImageView.transform = trans1;   
        [window addSubview: RightLowerLegImageView];     
        //================================================================    
        touchScreenRightFoot[0] = backingHeight * .75;
        touchScreenRightFoot[1] = backingHeight * .1;    
        touchScreenRightFoot[2] = backingWidth  * .1;
        touchScreenRightFoot[3] = backingWidth  * .15;      
        //-----------------------------------------------------    
        UIImage* RightFoot = [UIImage imageNamed:@"rightFoot.png"];
        capw = RightFoot.size.width;
        caph = RightFoot.size.height;
        UIImage* RightFootTiled = [RightFoot resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* RightFootImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreenRightFoot[2] , touchScreenRightFoot[0], touchScreenRightFoot[3], touchScreenRightFoot[1])];
        RightFootImageView.image = RightFootTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        RightFootImageView.transform = trans1;   
        [window addSubview: RightFootImageView];       
        //===========================================================================================================================================================     
        touchScreenPlayButton[0] = backingHeight * 0.95;
        touchScreenPlayButton[1] = backingHeight *  .05;    
        touchScreenPlayButton[2] = backingWidth  * 0.0;
        touchScreenPlayButton[3] = backingWidth  *  .075;      
        //===========================================================================================================================================================     
        //-----------------------------------------------------TOP_LEFT        
        touchScreen_POSITION_ICON_01[0] = backingHeight * 0.0;                                  //___________________________________horizontalPosition
        touchScreen_POSITION_ICON_01[1] = backingHeight * 0.2;                                  //___________________________________horizontalPosition+iconsize   
        touchScreen_POSITION_ICON_01[2] = backingWidth  * 0.7;                                  //___________________________________verticalPosition
        touchScreen_POSITION_ICON_01[3] = backingWidth  * 0.3;                                  //___________________________________verticalPosition+iconsize        
        //-----------------------------------------------------TOP_MIDDLE
        touchScreen_POSITION_ICON_02[0] = backingHeight * 0.2;   
        touchScreen_POSITION_ICON_02[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_02[2] = backingWidth  * 0.7;   
        touchScreen_POSITION_ICON_02[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------TOP_RIGHT
        touchScreen_POSITION_ICON_03[0] = backingHeight * 0.4;   
        touchScreen_POSITION_ICON_03[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_03[2] = backingWidth  * 0.7;   
        touchScreen_POSITION_ICON_03[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------MIDDLE_LEFT    
        touchScreen_POSITION_ICON_04[0] = backingHeight * 0.0;   
        touchScreen_POSITION_ICON_04[1] = backingHeight * 0.2;  
        touchScreen_POSITION_ICON_04[2] = backingWidth  * 0.4;  
        touchScreen_POSITION_ICON_04[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------MIDDLE_MIDDLE
        touchScreen_POSITION_ICON_05[0] = backingHeight * 0.2;   
        touchScreen_POSITION_ICON_05[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_05[2] = backingWidth  * 0.4;   
        touchScreen_POSITION_ICON_05[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------MIDDLE_RIGHT
        touchScreen_POSITION_ICON_06[0] = backingHeight * 0.4;   
        touchScreen_POSITION_ICON_06[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_06[2] = backingWidth  * 0.4;   
        touchScreen_POSITION_ICON_06[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------BOTTOM_LEFT     
        touchScreen_POSITION_ICON_07[0] = backingHeight * 0.0;   
        touchScreen_POSITION_ICON_07[1] = backingHeight * 0.2;  
        touchScreen_POSITION_ICON_07[2] = backingWidth  * 0.1;  
        touchScreen_POSITION_ICON_07[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------BOTTOM_MIDDLE
        touchScreen_POSITION_ICON_08[0] = backingHeight * 0.2;   
        touchScreen_POSITION_ICON_08[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_08[2] = backingWidth  * 0.1;   
        touchScreen_POSITION_ICON_08[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------BOTTOM_RIGHT
        touchScreen_POSITION_ICON_09[0] = backingHeight * 0.4;   
        touchScreen_POSITION_ICON_09[1] = backingHeight * 0.2;    
        touchScreen_POSITION_ICON_09[2] = backingWidth  * 0.1;   
        touchScreen_POSITION_ICON_09[3] = backingWidth  * 0.3;        
        //-----------------------------------------------------  
        
        //===========================================================================================================================================================         
/*      
        UIImage* armsBackTiltedIn_ICON_POSITION = [UIImage imageNamed:@"armsBackTiltedIn.png"];
        capw = armsBackTiltedIn_ICON_POSITION.size.width;
        caph = armsBackTiltedIn_ICON_POSITION.size.height;
        UIImage* armsBackTiltedIn_ICON_POSITIONTiled = [armsBackTiltedIn_ICON_POSITION resizableImageWithCapInsets: UIEdgeInsetsMake(caph, capw, caph, capw)];
        UIImageView* armsBackTiltedIn_ICON_POSITIONImageView = [[UIImageView alloc] initWithFrame: CGRectMake(touchScreen_POSITION_ICON_01[2] , touchScreen_POSITION_ICON_01[0], touchScreen_POSITION_ICON_01[3], touchScreen_POSITION_ICON_01[1])];
        armsBackTiltedIn_ICON_POSITIONImageView.image = armsBackTiltedIn_ICON_POSITIONTiled;
        trans1 = CGAffineTransformMakeRotation(M_PI * 0.5);
        armsBackTiltedIn_ICON_POSITIONImageView.transform = trans1;   
        [window addSubview: armsBackTiltedIn_ICON_POSITIONImageView];   
*/         
        //###########################################################################################################################################################
        bounds = window.bounds;
    
        view = [[UIView alloc] initWithFrame: bounds];
        view.multipleTouchEnabled   = YES;
        view.userInteractionEnabled = YES;    
    
        [window addSubview: view];
    
        //------------------------------------------------------------------------------------------------------------------------------------------------
        UIPanGestureRecognizer *panRecognizer = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(panDetected:)];
        [view addGestureRecognizer:panRecognizer];
        //----------------------------------------------------============================================================================================
        UITapGestureRecognizer *tapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapDetected:)];
        tapRecognizer.numberOfTapsRequired = 1;
        [view addGestureRecognizer:tapRecognizer];     
        //----------------------------------------
        UITapGestureRecognizer *doubleTapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(doubleTapDetected:)];
        doubleTapRecognizer.numberOfTapsRequired = 2;
        [view addGestureRecognizer:doubleTapRecognizer];        
        //----------------------------------------------------============================================================================================  
        UIPinchGestureRecognizer *pinchRecognizer = [[UIPinchGestureRecognizer alloc] initWithTarget:self action:@selector(pinchDetected:)];
        [view addGestureRecognizer:pinchRecognizer];    
        //================================================================================================================================================   
    
        [glView startAnimation];
        [window makeKeyAndVisible];
    
        return YES;
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================
- (void)doubleTapDetected:(UITapGestureRecognizer *)doubleTapRecognizer
{
  
    
    //breakAnimation = true;
}   

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================
- (void)tapDetected:(UITapGestureRecognizer *)tapRecognizer
{
    
        CGPoint location =  [tapRecognizer  locationInView:self->view];
        
        //NSLog(@"tapDetected: %f, %f", location.x,location.y);
    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenHips[0] && location.y <  (touchScreenHips[0]+touchScreenHips[1]) 
           && location.x > touchScreenHips[2] && location.x <  (touchScreenHips[2]+touchScreenHips[3]))
        {   
                hips_ROTATION_ACTIVE = true;
        }
        else
        {
                hips_ROTATION_ACTIVE = false;
        } 
        //===========================================================================================================================================================   
        if(   location.y > touchScreenHips[0] && location.y <  (touchScreenTorso[0]+touchScreenTorso[1]) 
           && location.x > touchScreenTorso[2] && location.x <  (touchScreenTorso[2]+touchScreenTorso[3]))
        {   
                torso_ROTATION_ACTIVE = true;
        }
        else
        {
                torso_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenHead[0] && location.y <  (touchScreenHead[0]+touchScreenHead[1]) 
           && location.x > touchScreenHead[2] && location.x < (touchScreenHead[2]+touchScreenHead[3]))
        {   
                head_ROTATION_ACTIVE = true;
        }
        else
        {
                head_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenLeftUpperArm[0] && location.y <  (touchScreenLeftUpperArm[0]+touchScreenLeftUpperArm[1]) 
           && location.x > touchScreenLeftUpperArm[2] && location.x < (touchScreenLeftUpperArm[2]+touchScreenLeftUpperArm[3]))
        {   
                leftUpperArm_ROTATION_ACTIVE = true;
        }
        else
        {
                leftUpperArm_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenLeftLowerArm[0] && location.y <  (touchScreenLeftLowerArm[0]+touchScreenLeftLowerArm[1]) 
           && location.x > touchScreenLeftLowerArm[2] && location.x < (touchScreenLeftLowerArm[2]+touchScreenLeftLowerArm[3]))
        {   
                leftLowerArm_ROTATION_ACTIVE = true;
        }
        else
        {
                leftLowerArm_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------   
        if(   location.y > touchScreenLeftHand[0] && location.y <  (touchScreenLeftHand[0]+touchScreenLeftHand[1]) 
           && location.x > touchScreenLeftHand[2] && location.x < (touchScreenLeftHand[2]+touchScreenLeftHand[3]))
        {   
                leftHand_ROTATION_ACTIVE = true;
        }
        else
        {
                leftHand_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenRightUpperArm[0] && location.y <  (touchScreenRightUpperArm[0]+touchScreenRightUpperArm[1]) 
           && location.x > touchScreenRightUpperArm[2] && location.x < (touchScreenRightUpperArm[2]+touchScreenRightUpperArm[3]))
        {   
                rightUpperArm_ROTATION_ACTIVE = true;
        }
        else
        {
                rightUpperArm_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenRightLowerArm[0] && location.y <  (touchScreenRightLowerArm[0]+touchScreenRightLowerArm[1]) 
           && location.x > touchScreenRightLowerArm[2] && location.x < (touchScreenRightLowerArm[2]+touchScreenRightLowerArm[3]))
        {   
                rightLowerArm_ROTATION_ACTIVE = true;
        }
        else
        {
                rightLowerArm_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenRightHand[0] && location.y <  (touchScreenRightHand[0]+touchScreenRightHand[1]) 
           && location.x > touchScreenRightHand[2] && location.x < (touchScreenRightHand[2]+touchScreenRightHand[3]))
        {   
                rightHand_ROTATION_ACTIVE = true;
        }
        else
        {
                rightHand_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenLeftUpperLeg[0] && location.y <  (touchScreenLeftUpperLeg[0]+touchScreenLeftUpperLeg[1]) 
           && location.x > touchScreenLeftUpperLeg[2] && location.x < (touchScreenLeftUpperLeg[2]+touchScreenLeftUpperLeg[3]))
        {   
                leftUpperLeg_ROTATION_ACTIVE = true;
        }
        else
        {
                leftUpperLeg_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenLeftLowerLeg[0] && location.y <  (touchScreenLeftLowerLeg[0]+touchScreenLeftLowerLeg[1]) 
           && location.x > touchScreenLeftLowerLeg[2] && location.x < (touchScreenLeftLowerLeg[2]+touchScreenLeftLowerLeg[3]))
        {   
                leftLowerLeg_ROTATION_ACTIVE = true;
        }
        else
        {
                leftLowerLeg_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenLeftFoot[0] && location.y <  (touchScreenLeftFoot[0]+touchScreenLeftFoot[1]) 
           && location.x > touchScreenLeftFoot[2] && location.x < (touchScreenLeftFoot[2]+touchScreenLeftFoot[3]))
        {   
                leftFoot_ROTATION_ACTIVE = true;
        }
        else
        {
                leftFoot_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(   location.y > touchScreenRightUpperLeg[0] && location.y <  (touchScreenRightUpperLeg[0]+touchScreenRightUpperLeg[1]) 
           && location.x > touchScreenRightUpperLeg[2] && location.x < (touchScreenRightUpperLeg[2]+touchScreenRightUpperLeg[3]))
        {   
                rightUpperLeg_ROTATION_ACTIVE = true;
        }
        else
        {
                rightUpperLeg_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------  
        if(   location.y > touchScreenRightLowerLeg[0] && location.y < (touchScreenRightLowerLeg[0]+touchScreenRightLowerLeg[1]) 
           && location.x > touchScreenRightLowerLeg[2] && location.x < (touchScreenRightLowerLeg[2]+touchScreenRightLowerLeg[3]))
        {   
                rightLowerLeg_ROTATION_ACTIVE = true;
        }
        else
        {
                rightLowerLeg_ROTATION_ACTIVE = false;
        }    
        //--------------------------------------------------------------------------------------------------------------------------
        if(   location.y > touchScreenRightFoot[0] && location.y < (touchScreenRightFoot[0]+touchScreenRightFoot[1]) 
           && location.x > touchScreenRightFoot[2] && location.x < (touchScreenRightFoot[2]+touchScreenRightFoot[3]))
        {   
                rightFoot_ROTATION_ACTIVE = true;
        }
        else
        {
                rightFoot_ROTATION_ACTIVE = false;
        }    
        //===========================================================================================================================================================   
        if(location.y > touchScreenPlayButton[0] && location.y < (touchScreenPlayButton[0]+touchScreenPlayButton[1]) 
        && location.x > touchScreenPlayButton[2] && location.x < (touchScreenPlayButton[2]+touchScreenPlayButton[3]))
        {   
                if(switchPlayOnOff)
                {
                        moveSet_AnimationSequence          = true;
                        hips_AnimationSequence             = true;
                        torso_AnimationSequence            = true;
                        head_AnimationSequence             = true;      
                        leftUpperArm_AnimationSequence     = true;         
                        rightUpperArm_AnimationSequence    = true;  
                        leftUpperLeg_AnimationSequence     = true;      
                        rightUpperLeg_AnimationSequence    = true;
            
                        runAnimation    = true;
                        switchPlayOnOff = false;
                }
                else if(!switchPlayOnOff)
                {
                        runAnimation    = false;
                        switchPlayOnOff = true;
                }        
        }
        //==================================================================================================================================================================  
        if(location.y > touchScreen_POSITION_ICON_01[0] && location.y < (touchScreen_POSITION_ICON_01[0]+touchScreen_POSITION_ICON_01[1]) 
        && location.x > touchScreen_POSITION_ICON_01[2] && location.x < (touchScreen_POSITION_ICON_01[2]+touchScreen_POSITION_ICON_01[3]))
        {         
                //-------------------------------------------------------------------- 
                leftUpperArm_ROTATE[3]               = -152;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0;
                leftUpperArm_ROTATE[2]               = -0.48;
                //-----------------------------------------//_________ArmsUpForwardShouldersSlightlyBack
                rightUpperArm_ROTATE[3]              = -152;
                rightUpperArm_ROTATE[0]              = 1;
                rightUpperArm_ROTATE[1]              = 0;
                rightUpperArm_ROTATE[2]              = 0.56; 
                //--------------------------------------------------------------------          
        }   
        //==================================================================================================================================================================        
        if(location.y > touchScreen_POSITION_ICON_02[0] && location.y < (touchScreen_POSITION_ICON_02[0]+touchScreen_POSITION_ICON_02[1]) 
        && location.x > touchScreen_POSITION_ICON_02[2] && location.x < (touchScreen_POSITION_ICON_02[2]+touchScreen_POSITION_ICON_02[3]))
        {         
                //-------------------------------------------------------------------- 
                leftUpperArm_ROTATE[3]               = -148;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = -0.02;
                leftUpperArm_ROTATE[2]               = -0.999999;
                //-----------------------------------------//_________ArmsUpForwardShouldersBack
                rightUpperArm_ROTATE[3]              = -146;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = 0.03;
                rightUpperArm_ROTATE[2]              = 1.27;           
                //--------------------------------------------------------------------           
        }    
        //==================================================================================================================================================================        
        if(location.y > touchScreen_POSITION_ICON_03[0] && location.y < (touchScreen_POSITION_ICON_03[0]+touchScreen_POSITION_ICON_03[1]) 
        && location.x > touchScreen_POSITION_ICON_03[2] && location.x < (touchScreen_POSITION_ICON_03[2]+touchScreen_POSITION_ICON_03[3]))
        {         
                //--------------------------------------------------------------------  
                leftUpperArm_ROTATE[3]               = -118.114;
                leftUpperArm_ROTATE[0]               = 0.556001;
                leftUpperArm_ROTATE[1]               = -0.754832;
                leftUpperArm_ROTATE[2]               = -0.834031;
                //-----------------------------------------//__________armsOutAtSidesPalmsForward
                rightUpperArm_ROTATE[3]              = -122.67;
                rightUpperArm_ROTATE[0]              = 1.03128;
                rightUpperArm_ROTATE[1]              = 1.47925;
                rightUpperArm_ROTATE[2]              = 1.40834;
                //--------------------------------------------------------------------          
        }           
        //==================================================================================================================================================================      
        if(location.y > touchScreen_POSITION_ICON_04[0] && location.y < (touchScreen_POSITION_ICON_04[0]+touchScreen_POSITION_ICON_04[1]) 
        && location.x > touchScreen_POSITION_ICON_04[2] && location.x < (touchScreen_POSITION_ICON_04[2]+touchScreen_POSITION_ICON_04[3]))
        {         
                //--------------------------------------------------------------------
                leftUpperArm_ROTATE[3]               = 78;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 0;
                //-----------------------------------------//________ArmsBackTiltedIn
                rightUpperArm_ROTATE[3]              = 78;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = 0;
                //--------------------------------------------------------------------          
        }            
        //==================================================================================================================================================================      
        if(location.y > touchScreen_POSITION_ICON_05[0] && location.y < (touchScreen_POSITION_ICON_05[0]+touchScreen_POSITION_ICON_05[1]) 
        && location.x > touchScreen_POSITION_ICON_05[2] && location.x < (touchScreen_POSITION_ICON_05[2]+touchScreen_POSITION_ICON_05[3]))
        {         
                //-------------------------------------------------------------------- 
                leftUpperArm_ROTATE[3]               = 93;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 2.47;
                //-----------------------------------------//__________armsOutAtSidesPalmsDown
                rightUpperArm_ROTATE[3]              = 91;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = -2.44; 
                //--------------------------------------------------------------------  
        }           
        //==================================================================================================================================================================    
        if(location.y > touchScreen_POSITION_ICON_06[0] && location.y < (touchScreen_POSITION_ICON_06[0]+touchScreen_POSITION_ICON_06[1]) 
        && location.x > touchScreen_POSITION_ICON_06[2] && location.x < (touchScreen_POSITION_ICON_06[2]+touchScreen_POSITION_ICON_06[3]))
        {         
                //--------------------------------------------------------------------   
                leftUpperArm_ROTATE[3]               = 93;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 2.47;
                //-----------------------------------------//__________armsOutAtSidesPalmsDown
                rightUpperArm_ROTATE[3]              = 91;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = -2.44; 
                //--------------------------------------------------------------------   
        }           
        //==================================================================================================================================================================      
        if(location.y > touchScreen_POSITION_ICON_07[0] && location.y < (touchScreen_POSITION_ICON_07[0]+touchScreen_POSITION_ICON_07[1]) 
        && location.x > touchScreen_POSITION_ICON_07[2] && location.x < (touchScreen_POSITION_ICON_07[2]+touchScreen_POSITION_ICON_07[3]))
        {         
                //--------------------------------------------------------------------
                leftUpperArm_ROTATE[3]               = 78;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 0;
                //-----------------------------------------//________ArmsBackTiltedIn
                rightUpperArm_ROTATE[3]              = 78;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = 0;
                //--------------------------------------------------------------------         
        }            
        //==================================================================================================================================================================       
        if(location.y > touchScreen_POSITION_ICON_08[0] && location.y < (touchScreen_POSITION_ICON_08[0]+touchScreen_POSITION_ICON_08[1]) 
        && location.x > touchScreen_POSITION_ICON_08[2] && location.x < (touchScreen_POSITION_ICON_08[2]+touchScreen_POSITION_ICON_08[3]))
        {         
                //--------------------------------------------------------------------  
                leftUpperArm_ROTATE[3]               = 93;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 2.47;
                //-----------------------------------------//__________armsOutAtSidesPalmsDown
                rightUpperArm_ROTATE[3]              = 91;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = -2.44; 
                //--------------------------------------------------------------------         
        }           
        //==================================================================================================================================================================      
        if(location.y > touchScreen_POSITION_ICON_09[0] && location.y < (touchScreen_POSITION_ICON_09[0]+touchScreen_POSITION_ICON_09[1]) 
        && location.x > touchScreen_POSITION_ICON_09[2] && location.x < (touchScreen_POSITION_ICON_09[2]+touchScreen_POSITION_ICON_09[3]))
        {         
                //-------------------------------------------------------------------- 
                leftUpperArm_ROTATE[3]               = 93;
                leftUpperArm_ROTATE[0]               = 1;
                leftUpperArm_ROTATE[1]               = 0.24;
                leftUpperArm_ROTATE[2]               = 2.47;
                //-----------------------------------------//__________armsOutAtSidesPalmsDown
                rightUpperArm_ROTATE[3]              = 91;
                rightUpperArm_ROTATE[0]              = 1.05;
                rightUpperArm_ROTATE[1]              = -0.2;
                rightUpperArm_ROTATE[2]              = -2.44; 
                //--------------------------------------------------------------------
        }                   
        //==================================================================================================================================================================        
        
        
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)panDetected:(UIPanGestureRecognizer *)panRecognizer
{
        //NSLog(@"tapDetected: %f, %f", location.x,location.y);
        //CGPoint translation = [panRecognizer translationInView: view];//__cumulative_based_on_movement
    
        //==========================================================================================================
        CGPoint translation   = [panRecognizer velocityInView: view];   
        //==========================================================================================================
    
        //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        POSITION_ICON_07[0] += translation.x * 0.00005;   
        POSITION_ICON_07[1] -= translation.y * 0.00005;

        NSLog(@"POSITION_ICON_07: %f, %f",POSITION_ICON_07[0], POSITION_ICON_07[1]);
        //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    
        //===========================================================================================================================================================   
        if(hips_ROTATION_ACTIVE)
        {
                hips_ROTATE[3] += translation.x * .02;
        }    
        //=========================================================================================================================================================== 
        if(torso_ROTATION_ACTIVE)
        {
                torso_ROTATE[3] += translation.x * .02;
        }   
        //=========================================================================================================================================================== 
        if(head_ROTATION_ACTIVE)
        {
                head_ROTATE[3] += translation.x * .02;
        }
        //=========================================================================================================================================================== 
        if(leftUpperArm_ROTATION_ACTIVE)
        {
                leftUpperArm_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------
        if(leftLowerArm_ROTATION_ACTIVE)
        {
                leftLowerArm_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------  
        if(leftHand_ROTATION_ACTIVE)
        {
                leftHand_ROTATE[3] += translation.x * .02;
        }    
        //===========================================================================================================================================================   
        if(rightUpperArm_ROTATION_ACTIVE)
        {
                rightUpperArm_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------
        if(rightLowerArm_ROTATION_ACTIVE)
        {
                rightLowerArm_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------    
        if(rightHand_ROTATION_ACTIVE)
        {
                rightHand_ROTATE[3] += translation.x * .02;
        }    
        //===========================================================================================================================================================   
        if(leftUpperLeg_ROTATION_ACTIVE)
        {
                leftUpperLeg_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------
        if(leftLowerLeg_ROTATION_ACTIVE)
        {
                leftLowerLeg_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------    
        if(leftFoot_ROTATION_ACTIVE)
        {
                leftFoot_ROTATE[3] += translation.x * .02;
        }    
        //===========================================================================================================================================================   
        if(rightUpperLeg_ROTATION_ACTIVE)
        {
                rightUpperLeg_ROTATE[3] += translation.x * .02;
        }    
        //---------------------------------------------------------------- 
        if(rightLowerLeg_ROTATION_ACTIVE)
        {
                rightLowerLeg_ROTATE[3] += translation.x * .02;
        }    
        //----------------------------------------------------------------    
        if(rightFoot_ROTATION_ACTIVE)
        {
                rightFoot_ROTATE[3] += translation.x * .02;
        }    
        //===========================================================================================================================================================   
        
        //NSLog(@"panRecognizerLocation: %i, %i", touchScreenBlockSize_10, backingHeight); 
        
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================
- (void)pinchDetected:(UIPinchGestureRecognizer *)pinchRecognizer
{
        //=========================================================================================
        CGFloat scale = pinchRecognizer.scale;
        //self->view.transform = CGAffineTransformScale(self->view.transform, scale, scale);
        pinchRecognizer.scale = 1.0;
        //=========================================================================================
        marcModelPosition[2] /= scale;   
        NSLog(@"marcModelPosition[2]: %f", marcModelPosition[2]);   
        //=========================================================================================
        
        //POSITION_ICON_GLOBAL[2] /= scale;   
        //NSLog(@"POSITION_ICON_GLOBAL: %f",POSITION_ICON_GLOBAL[2]);  
        //-----------------------------------------------------------------------------------------     

}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

/*
 
 //====================================_______________________PlaceIn-->> didFinishLaunchingWithOptions  
 UIPanGestureRecognizer *panRecognizer = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(panDetected:)];
 [view addGestureRecognizer:panRecognizer];
 
 UIPinchGestureRecognizer *pinchRecognizer = [[UIPinchGestureRecognizer alloc] initWithTarget:self action:@selector(pinchDetected:)];
 [view addGestureRecognizer:pinchRecognizer];
 
 UIRotationGestureRecognizer *rotationRecognizer = [[UIRotationGestureRecognizer alloc] initWithTarget:self action:@selector(rotationDetected:)];
 [view addGestureRecognizer:rotationRecognizer];
 
 UITapGestureRecognizer *tapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapDetected:)];
 tapRecognizer.numberOfTapsRequired = 2;
 [view addGestureRecognizer:tapRecognizer];  
 //===================================================================================================================================================  
 
 - (void)panDetected:(UIPanGestureRecognizer *)panRecognizer
 {
 CGPoint translation = [panRecognizer translationInView: view];
 CGPoint imageViewPosition = self.imageView.center;
 imageViewPosition.x += translation.x;
 imageViewPosition.y += translation.y;
 
 self.imageView.center = imageViewPosition;
 [panRecognizer setTranslation:CGPointZero inView:self.view];
 }
 
 - (void)pinchDetected:(UIPinchGestureRecognizer *)pinchRecognizer
 {
 CGFloat scale = pinchRecognizer.scale;
 self.imageView.transform = CGAffineTransformScale(self.imageView.transform, scale, scale);
 pinchRecognizer.scale = 1.0;
 }
 
 - (void)rotationDetected:(UIRotationGestureRecognizer *)rotationRecognizer
 {
 CGFloat angle = rotationRecognizer.rotation;
 self.imageView.transform = CGAffineTransformRotate(self.imageView.transform, angle);
 rotationRecognizer.rotation = 0.0;
 }
 
 - (void)tapDetected:(UITapGestureRecognizer *)tapRecognizer
 {
 [UIView animateWithDuration:0.25 animations:^{
 self.imageView.center = CGPointMake(CGRectGetMidX(self.view.bounds), CGRectGetMidY(self.view.bounds));
 self.imageView.transform = CGAffineTransformIdentity;
 }];
 }
 
*/


//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationWillResignActive:(UIApplication *)application
{
         /*
         Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
         Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
         */
    
	[glView stopAnimation];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationDidEnterBackground:(UIApplication *)application 
{
         /*
         Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
         If your application supports background execution, called instead of applicationWillTerminate: when the user quits.
         */
	
	[glView stopAnimation];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationWillEnterForeground:(UIApplication *)application 
{
         /*
         Called as part of transition from the background to the inactive state: here you can undo many of the changes made on entering the background.
         */
	
	[glView startAnimation];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationDidBecomeActive:(UIApplication *)application 
{
         /*
         Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
         */
	
	[glView startAnimation];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationWillTerminate:(UIApplication *)application 
{
         /*
         Called when the application is about to terminate.
         See also applicationDidEnterBackground:.
         */
	
	[glView stopAnimation];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application 
{
        /*
        Free up as much memory as possible by purging cached data objects that can be recreated (or reloaded from disk) later.
        */
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

- (void)dealloc 
{
    
        //------------------------------
        [glView release];
        [window release];
        [view release];   
        //------------------------------
    
    
        //------------------------------
    
        [super dealloc];
}

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================





@end
















