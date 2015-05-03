
GLuint     viewWidth;
GLuint     viewHeight;

GLuint     viewFramebuffer;
GLfloat    rotation;



//==================================================
GLuint     touchScreenHips[4];
//------------------------------------
GLuint     touchScreenHead[4];
//------------------------------------
GLuint     touchScreenTorso[4];
//------------------------------------
GLuint     touchScreenLeftUpperArm[4];
GLuint     touchScreenLeftLowerArm[4];
GLuint     touchScreenLeftHand[4];
//------------------------------------
GLuint     touchScreenRightUpperArm[4];
GLuint     touchScreenRightLowerArm[4];
GLuint     touchScreenRightHand[4];
//------------------------------------
GLuint     touchScreenLeftUpperLeg[4];
GLuint     touchScreenLeftLowerLeg[4];
GLuint     touchScreenLeftFoot[4];
//------------------------------------
GLuint     touchScreenRightUpperLeg[4];
GLuint     touchScreenRightLowerLeg[4];
GLuint     touchScreenRightFoot[4];
//==================================================
GLuint     touchScreenPlayButton[4];
//GLboolean  PlayButton_ACTIVE;
extern     GLfloat    PlayButton_POSITION[4];
//--------------------------------------------------



//======================================================================================================
//======================================================================================================
        GLuint          touchScreen_POSITION_ICON_01[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_02[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_03[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_04[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_05[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_06[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_07[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_08[4];
        //--------------------------------------------------
        GLuint          touchScreen_POSITION_ICON_09[4];
        //--------------------------------------------------


      //==========================================================
        extern     GLfloat    POSITION_ICON_GLOBAL[4];
        
        extern     GLfloat    POSITION_ICON_01[4];
        extern     GLfloat    POSITION_ICON_02[4];       
        extern     GLfloat    POSITION_ICON_03[4];
        
        extern     GLfloat    POSITION_ICON_04[4];
        extern     GLfloat    POSITION_ICON_05[4];
        extern     GLfloat    POSITION_ICON_06[4];       
        
        extern     GLfloat    POSITION_ICON_07[4];
        extern     GLfloat    POSITION_ICON_08[4];
        extern     GLfloat    POSITION_ICON_09[4];
      //==========================================================





//----------------------------------------------------------




//======================================================================================================
//======================================================================================================

//==================================================
extern     GLfloat    marcModel_SCALE;

extern     GLfloat    marcModelPosition[3];
//--------------------------------------------------
extern     GLfloat    hips_ROTATE[4];
extern     GLboolean  hips_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    head_ROTATE[4];
extern     GLboolean  head_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    torso_ROTATE[4];
extern     GLboolean  torso_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    leftUpperArm_ROTATE[4];
extern     GLfloat    leftLowerArm_ROTATE[4];
extern     GLfloat    leftHand_ROTATE[4];
//-----
extern     GLboolean  leftUpperArm_ROTATION_ACTIVE;
extern     GLboolean  leftLowerArm_ROTATION_ACTIVE;
extern     GLboolean  leftHand_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    rightUpperArm_ROTATE[4];
extern     GLfloat    rightLowerArm_ROTATE[4];
extern     GLfloat    rightHand_ROTATE[4];
//-----
extern     GLboolean  rightUpperArm_ROTATION_ACTIVE;
extern     GLboolean  rightLowerArm_ROTATION_ACTIVE;
extern     GLboolean  rightHand_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    leftUpperLeg_ROTATE[4];
extern     GLfloat    leftLowerLeg_ROTATE[4];
extern     GLfloat    leftFoot_ROTATE[4];
//-----
extern     GLboolean  leftUpperLeg_ROTATION_ACTIVE;
extern     GLboolean  leftLowerLeg_ROTATION_ACTIVE;
extern     GLboolean  leftFoot_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLfloat    rightUpperLeg_ROTATE[4];
extern     GLfloat    rightLowerLeg_ROTATE[4];
extern     GLfloat    rightFoot_ROTATE[4];
//-----
extern     GLboolean  rightUpperLeg_ROTATION_ACTIVE;
extern     GLboolean  rightLowerLeg_ROTATION_ACTIVE;
extern     GLboolean  rightFoot_ROTATION_ACTIVE;
//--------------------------------------------------
extern     GLboolean  runAnimation;
extern     GLboolean  breakAnimation;

extern     GLboolean  moveSet_AnimationSequence;
extern     GLboolean  hips_AnimationSequence;
extern     GLboolean  torso_AnimationSequence;
extern     GLboolean  head_AnimationSequence;      
extern     GLboolean  leftUpperArm_AnimationSequence;         
extern     GLboolean  rightUpperArm_AnimationSequence;  
extern     GLboolean  leftUpperLeg_AnimationSequence;      
extern     GLboolean  rightUpperLeg_AnimationSequence; 
//--------------------------------------------------

extern     GLfloat  PlayButton_LIGHT_POSITION_01[4]; 
//--------------------------------------------------
extern     GLboolean switchPlayOnOff;


//--------------------------------------------------


GLint      backingWidth;
GLint      backingHeight;

GLboolean runOnce;

//===================================================================================================================================================================
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//===================================================================================================================================================================

@interface OpenGLRenderer : NSObject 
{
	
	
}


- (void) render;
   void  shutDownGL(void);
   void  InitGL(void);
   void  RenderGL(void);


@end










