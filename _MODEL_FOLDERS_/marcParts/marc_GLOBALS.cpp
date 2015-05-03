                             GLuint      marc_SHADER_VERTEX;
                             GLuint      marc_SHADER_FRAGMENT;
                             GLuint      marc_SHADER;
                             //--------------------------------------  
                             GLuint      UNIFORM_MODELVIEW_marc;
                             GLuint      UNIFORM_MODELVIEWPROJ_marc;
                             GLuint      UNIFORM_MODELVIEWPROJ_INVERSE_marc;
                             GLuint      UNIFORM_LIGHT_MATRIX_marc;
                             //--------------------------------------      
                             GLuint      UNIFORM_FRESNEL_TEX_marc;
                             GLuint      UNIFORM_TEXTURE_DOT3_marc;
                             GLuint      UNIFORM_TEXTURE_marc;    
                             GLuint      UNIFORM_LIGHT_POSITION_01_marc;
                             //--------------------------------------                              
                             GLfloat     torsoMatrix[16];
                             GLfloat     hipsMatrix[16];                            
                             //---------------------------------------------------------------------
                                bool        showMarc                            =    true; 
                                bool        runAnimationSequence                =    true;
                                bool        marcWalking                         =    false;
                                bool        marcJumping                         =    false;
                                bool        resetAnimation                      =    false;
                                bool        spaceBarIsPressed                   =    false;
                                                            
                                GLfloat     marcModelPosition[]                 = { -0.3,  0.0, -3.6};
                                GLfloat     marcDirectionFacingRotation         =    0.0;
                                GLfloat     marcShadow_Y_Position[]             = {  0.0, -0.610902, 0.0};                                 
                                //---------------------------------------------------------------------
                                GLfloat     marc_LIGHT_POSITION_01[]            = {  0.0, 50.0, 150.0, 0.0};
                                GLuint      UNIFORM_marc_LIGHT_POSITION_01;
                                //---------------------------------------------------------------------
                             
                                GLfloat     marcModel_ROTATE[]                  = {  0.0,  0.0, 1.0, -90.0};
                                


                                //========================================================================================================================
                                GLuint      hips_texture1;
                                GLuint      hips_texture_DOT3;                             
                                GLuint      hips_VBO;
                                GLuint      UNIFORM_hips_TEXTURE_DOT3;
                                GLuint      UNIFORM_hips_TEXTURE1;
                                //===========================================================================================
                                GLuint      torso_texture1;
                                GLuint      torso_texture_DOT3;                             
                                GLuint      torso_VBO;
                                //---------------------
                                GLfloat     torso_POSITION[]          = { 0.00, 0.025, -0.006, 1.0};
                                //----------------------------------------------------------------------------------------------
                            
                                                                                       
                             //===========================================================================================
                             GLuint      head_neck_texture1;
                             GLuint      head_neck_texture_DOT3;
                             GLuint      head_neck_VBO;
                             //---------------------
                             GLfloat     head_neck_POSITION[]      = { 0.0, 0.359999, -0.004, 1.0};
                             GLfloat     head_neck_ROTATE[]        = { 0.0, 0.0,       0.0,   0.0};///__THETA =[3] __XYZaxis=[0][1][2] 
                             //===========================================================================================
                             GLuint      face_texture1;
                             GLuint      face_texture_DOT3;
                             GLuint      face_VBO;
                             //---------------------
                             GLfloat     face_POSITION[]           = { 0, 0.366999, 0.004, 1.0};
                             GLfloat     face_ROTATE[]             = { 0.0, 0.0,  0.0, 0.0};///__THETA =[3] __XYZaxis=[0][1][2]                              
                             //===========================================================================================
                             GLuint      leftUpperArm_texture1;
                             GLuint      leftUpperArm_texture_DOT3;
                             GLuint      leftUpperArm_VBO;
                             //---------------------
                             GLfloat     leftUpperArm_POSITION[]   = { 0.132, 0.305, -0.018, 1.0};
                             //===========================================================================================
                             GLuint      leftLowerArm_texture1;
                             GLuint      leftLowerArm_texture_DOT3;                           
                             GLuint      leftLowerArm_VBO;
                             //---------------------
                             GLfloat     leftLowerArm_POSITION[]    = { 0.0109999, -0.166, 0.01, 1.0};
                             //===========================================================================================
                             GLuint      leftHand_texture1;
                             GLuint      leftHand_texture_DOT3;                               
                             GLuint      leftHand_VBO;
                             //---------------------
                             GLfloat     leftHand_POSITION[]       = {-0.00700011, -0.184, 0.002, 1.0};
                             //===========================================================================================
                             GLuint      rightUpperArm_texture1;
                             GLuint      rightUpperArm_texture_DOT3;                               
                             GLuint      rightUpperArm_VBO;
                             //---------------------
                             GLfloat     rightUpperArm_POSITION[]  = {-0.132, 0.305, -0.018, 1.0};
                             //===========================================================================================
                             GLuint      rightLowerArm_texture1;
                             GLuint      rightLowerArm_texture_DOT3;                                
                             GLuint      rightLowerArm_VBO;
                             //---------------------
                             GLfloat     rightLowerArm_POSITION[]   = {-0.0109999, -0.166, 0.01, 1.0};
                             //===========================================================================================
                             GLuint      rightHand_texture1;
                             GLuint      rightHand_texture_DOT3;                                
                             GLuint      rightHand_VBO;
                             //---------------------
                             GLfloat     rightHand_POSITION[]      = { 0.00700011, -0.184, 0.002, 1.0};
                             //===========================================================================================
                             GLuint      leftUpperLeg_texture1;
                             GLuint      leftUpperLeg_texture_DOT3;                              
                             GLuint      leftUpperLeg_VBO;
                             //---------------------
                             GLfloat     leftUpperLeg_POSITION[]   = { 0.07,  -0.0629997, -0.012, 1.0};
                             //===========================================================================================
                             GLuint      leftLowerLeg_texture1;
                             GLuint      leftLowerLeg_texture_DOT3;                               
                             GLuint      leftLowerLeg_VBO;
                             //---------------------
                             GLfloat     leftLowerLeg_POSITION[]   = { 0.00400003, -0.247, 0, 1.0};
                             //===========================================================================================
                             GLuint      leftFoot_texture1;
                             GLuint      leftFoot_texture_DOT3;                             
                             GLuint      leftFoot_VBO;
                             //---------------------
                             GLfloat     leftFoot_POSITION[]       = { 0.00100003, -0.258, -0.014, 1.0};
                             ///===========================================================================================
                             GLuint      rightUpperLeg_texture1;
                             GLuint      rightUpperLeg_texture_DOT3;                               
                             GLuint      rightUpperLeg_VBO;
                             //---------------------
                             GLfloat     rightUpperLeg_POSITION[]  = {-0.07,  -0.0629997, -0.012, 1.0};
                             //===========================================================================================
                             GLuint      rightLowerLeg_texture1;
                             GLuint      rightLowerLeg_texture_DOT3;                              
                             GLuint      rightLowerLeg_VBO;
                             //---------------------
                             GLfloat     rightLowerLeg_POSITION[]  = {-0.00400003, -0.247, 0, 1.0};
                             //===========================================================================================
                             GLuint      rightFoot_texture1;
                             GLuint      rightFoot_texture_DOT3;                              
                             GLuint      rightFoot_VBO;
                             //---------------------                             
                             GLfloat     rightFoot_POSITION[]      = {-0.00100003, -0.258, -0.014, 1.0};
                             //============================================================================================================================


//===========================================================================================================================================================
//===========================================================================================================================================================
//===========================================================================================================================================================
//===========================================================================================================================================================


//------------------------------
GLboolean      leftMouseActivated                    = false;
GLboolean      rightMouseActivated                   = false;
//------------------------------
GLfloat   mousePositionX                        = 0;
GLfloat   mousePositionY                        = 0;
//------------------------------
GLfloat   secondaryModelPosition[]              = {0, 0.069, -0.007};
GLfloat   scaleModel                            =  0.498; 
//------------------------------       
GLboolean      homeButtonPushed                      = false;
GLboolean      endButtonPushed                       = false;  
//------------------------------
GLfloat   runSlowMotion                         = 1.0;

GLboolean breakAnimation                        = false;

//===========================================================================================================================================================

//------------------------------
GLboolean      moveSet_AnimationSequence             = false;
//------------------------------
GLfloat   moveSet_MOVE_FRAMEA[]                 = {0, 0, 0};
GLfloat   moveSet_MOVE_FRAMEB[]                 = {0, 0, 0};
//------------------------------
GLfloat   moveSet_SET_01[]                      = {0, 0, 0};
GLfloat   moveSet_SET_02[]                      = {0, 0, 0};
GLfloat   moveSet_SET_03[]                      = {0, 0, 0};
GLfloat   moveSet_SET_04[]                      = {0, 0, 0};
GLfloat   moveSet_SET_05[]                      = {0, 0, 0};
GLfloat   moveSet_SET_06[]                      = {0, 0, 0};
GLfloat   moveSet_SET_07[]                      = {0, 0, 0};
//------------------------------
int       moveSet_setSelection                  = 1;
int       moveSet_setSelectionLimit             = 0;
int       moveSet_SelectionCount                = 0;
GLfloat   moveSet_animationBlendFactor          = 0.032;
//------------------------------
GLfloat   moveSet_ROTATION_FRAME_TIME[]         = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};


//===========================================================================================================================================================

GLfloat mainBodyPosition[]                      = {0, 0, 0};
GLfloat mainBodyPosition_MOVE_FRAMEA[]          = {0, 0, 0};
GLfloat mainBodyPosition_MOVE_FRAMEB[]          = {0, 0, 0};


int     mainBodyPosition_setSelection            = 1;
int     mainBodyPosition_setSelectionLimit       = 0;
int     mainBodyPosition_SelectionCount          = 0;
float   mainBodyPosition_animationBlendFactor    = 0.032;

float   mainBodyPosition_FRAME_TIME_01           = 0.155;
float   mainBodyPosition_FRAME_TIME_02           = 0.155;
float   mainBodyPosition_FRAME_TIME_03           = 0.155;
float   mainBodyPosition_FRAME_TIME_04           = 0.155;
float   mainBodyPosition_FRAME_TIME_05           = 0.155;
float   mainBodyPosition_FRAME_TIME_06           = 0.155;

//===========================================================================================================================================================

int hipsSelection                               = 0;
      
    GLfloat hips_04[] = {0, 0, 0};
    GLfloat hips_ROTATE[]                       = {0.0f, 1.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
    GLfloat hips_ROTATE_FRAMEA[]                = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
    GLfloat hips_ROTATE_FRAMEB[]                = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
    GLfloat hips_ROTATE_FRAME_LOOP_RESET[]      = {1.0f, 0.0f, 0.0f, 0.0f};      

    bool  hips_ROTATE_X = false;
    bool  hips_ROTATE_Y = false;
    bool  hips_ROTATE_Z = false;

    int    setSelection_HIPS                    = 1;
    int    SelectionCount_HIPS                  = 0;
    int    setSelectionLimit_HIPS               = 0;
    float  animationBlendFactor_HIPS            = 0.032;

    float  HIPS_FRAME_TIME_01                   = 0.155;
    float  HIPS_FRAME_TIME_02                   = 0.155;
    float  HIPS_FRAME_TIME_03                   = 0.155;
    float  HIPS_FRAME_TIME_04                   = 0.155;
    float  HIPS_FRAME_TIME_05                   = 0.155;
    float  HIPS_FRAME_TIME_06                   = 0.155;
    //-----------------------------------
    GLboolean      hips_AnimationSequence       = false;     

    GLfloat hips_SET_01[]                       = {1.0f, 0.0f, 0.0f, 0.0f};
    GLfloat hips_SET_02[]                       = {1.0f, 0.0f, 0.0f, 0.0f};
    GLfloat hips_SET_03[]                       = {1.0f, 0.0f, 0.0f, 0.0f};
    GLfloat hips_SET_04[]                       = {1.0f, 0.0f, 0.0f, 0.0f};                       
    GLfloat hips_SET_05[]                       = {1.0f, 0.0f, 0.0f, 0.0f};
    GLfloat hips_SET_06[]                       = {1.0f, 0.0f, 0.0f, 0.0f};
    GLfloat hips_SET_07[]                       = {1.0f, 0.0f, 0.0f, 0.0f};

    GLfloat   hips_ROTATION_FRAME_TIME[]        = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};

    GLboolean hips_ROTATION_ACTIVE              = false;

//===========================================================================================================================================================

    int torsoSelection                          = 0;
    GLfloat torso_04[]                          =  {-0.0011, 0.0704, 0.0107};
    GLfloat torso_ROTATE[]                      = {0.0f, 1.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
    GLfloat torso_ROTATE_FRAMEA[]               = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
    GLfloat torso_ROTATE_FRAMEB[]               = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
    GLfloat torso_ROTATE_FRAME_LOOP_RESET[]     = {1.0f, 0.0f, 0.0f, 0.0f};      

    bool  torso_ROTATE_X                        = false;
    bool  torso_ROTATE_Y                        = false;
    bool  torso_ROTATE_Z                        = false;

    int    setSelection_TORSO               = 1;
    int    SelectionCount_TORSO             = 0;
    int    setSelectionLimit_TORSO          = 0;
    float  animationBlendFactor_TORSO       = 0.032;

    float  TORSO_FRAME_TIME_01              = 0.155;
    float  TORSO_FRAME_TIME_02              = 0.155;
    float  TORSO_FRAME_TIME_03              = 0.155;
    float  TORSO_FRAME_TIME_04              = 0.155;
    float  TORSO_FRAME_TIME_05              = 0.155;
    float  TORSO_FRAME_TIME_06              = 0.155;
    //----------------------------------------------
    
GLboolean torso_ROTATION_ACTIVE    = false;
GLboolean      torso_AnimationSequence               = false;

GLfloat torso_SET_01[]                         = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat torso_SET_02[]                         = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat torso_SET_03[]                         = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat torso_SET_04[]                         = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat torso_SET_05[]                         = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat torso_SET_06[]                         = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat torso_SET_07[]                         = {1.0f, 0.0f, 0.0f, 0.0f};

GLfloat   torso_ROTATION_FRAME_TIME[]          = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};
//===========================================================================================================================================================

int headSelection                                 = 0;
GLfloat faceMarc_04[]  =  {-0.0006, 0.363999, -0.0008};

        //GLfloat head_back_04[] = {0, 0, 0};
                
              GLfloat head_ROTATE[]                  = {0.0f, 1.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
              GLfloat head_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__       
              GLfloat head_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[4],_XYZaxis=[0][1][2]__
              GLfloat head_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
              

              bool  head_ROTATE_X = false;
              bool  head_ROTATE_Y = false;
              bool  head_ROTATE_Z = false;
                    

int    setSelection_HEAD                = 1;
int    setSelectionLimit_HEAD           = 0;
int    SelectionCount_HEAD              = 0;
float  animationBlendFactor_HEAD        = 0.032;

float  HEAD_FRAME_TIME_01                  = 0.155;
float  HEAD_FRAME_TIME_02                  = 0.155;
float  HEAD_FRAME_TIME_03                  = 0.155;
float  HEAD_FRAME_TIME_04                  = 0.155;
float  HEAD_FRAME_TIME_05                  = 0.155;
float  HEAD_FRAME_TIME_06                  = 0.155;
//----------------------------------------------------------
GLboolean head_ROTATION_ACTIVE    = false;

GLboolean      head_AnimationSequence         = false;

GLfloat   head_SET_01[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat   head_SET_02[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat   head_SET_03[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat   head_SET_04[]                  = {0.0f, 1.0f, 0.0f, 0.0f};                       
GLfloat   head_SET_05[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat   head_SET_06[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat   head_SET_07[]                  = {0.0f, 1.0f, 0.0f, 0.0f};

GLfloat   head_ROTATION_FRAME_TIME[]     = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};
//===========================================================================================================================================================

int leftArmSelection                                 = 8;
//GLfloat leftArm_04[]                                 = {0, 0, 0};


        

      GLfloat leftUpperArm_04[]                      =  {0.131, 0.308999, -0.025};
      
      GLfloat leftUpperArm_ROTATE[]                  =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
      GLfloat leftUpperArm_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
      GLfloat leftUpperArm_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
      GLfloat leftUpperArm_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      
      

                     GLfloat leftLowerArm_04[]                      =  {0.0137, -0.1636, 0.015};
                     GLfloat leftLowerArm_ROTATE[]                  =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]                     
                     GLfloat leftLowerArm_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                     GLfloat leftLowerArm_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                     GLfloat leftLowerArm_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      
                     
                     GLfloat leftHand_04[]                                     =  {-0.0058907, -0.1834, 0.0436};
                                    GLfloat leftHand_ROTATE[]                  =  {0.0f, 0.0f, 1.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]         
                                    GLfloat leftHand_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                    GLfloat leftHand_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                    GLfloat leftHand_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      


bool leftUpperArm_ROTATE_X      = false;
bool leftUpperArm_ROTATE_Y      = false;
bool leftUpperArm_ROTATE_Z      = false;

bool leftLowerArm_ROTATE_X       = false;
bool leftLowerArm_ROTATE_Y       = false;
bool leftLowerArm_ROTATE_Z       = false;

bool leftHand_ROTATE_X    = false;
bool leftHand_ROTATE_Y    = false;
bool leftHand_ROTATE_Z    = false;

int    setSelection_LEFT_ARM            = 1;
int    SelectionCount_LEFT_ARM          = 0;
int    setSelectionLimit_LEFT_ARM       = 0;
float  animationBlendFactor_LEFT_ARM    = 0.032;

float  LEFT_ARM_FRAME_TIME_01              = 0.066;
float  LEFT_ARM_FRAME_TIME_02              = 0.155;
float  LEFT_ARM_FRAME_TIME_03              = 0.155;
float  LEFT_ARM_FRAME_TIME_04              = 0.155;
float  LEFT_ARM_FRAME_TIME_05              = 0.155;
float  LEFT_ARM_FRAME_TIME_06              = 0.155;
//----------------------------------------------------------
GLboolean leftUpperArm_ROTATION_ACTIVE    = false;
//----------------------------------------------------------
GLboolean leftLowerArm_ROTATION_ACTIVE     = false;
//----------------------------------------------------------
GLboolean leftHand_ROTATION_ACTIVE        = false;

GLboolean    leftUpperArm_AnimationSequence         = false;      

GLfloat leftUpperArm_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperArm_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperArm_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperArm_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftUpperArm_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperArm_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f}; 
GLfloat leftUpperArm_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                                    


GLfloat leftLowerArm_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerArm_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerArm_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerArm_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftLowerArm_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerArm_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerArm_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
   

GLfloat leftHand_SET_01[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat leftHand_SET_02[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat leftHand_SET_03[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat leftHand_SET_04[]                  = {0.0f, 1.0f, 0.0f, 0.0f};                       
GLfloat leftHand_SET_05[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat leftHand_SET_06[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat leftHand_SET_07[]                  = {0.0f, 1.0f, 0.0f, 0.0f};


GLfloat   leftArm_ROTATION_FRAME_TIME[]           = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};
//===========================================================================================================================================================

int rightArmSelection                       = 8;



        GLfloat rightUpperArm_04[]                      =  {-0.131, 0.308999, -0.025};
        GLfloat rightUpperArm_ROTATE[]                  =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]         
        GLfloat rightUpperArm_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat rightUpperArm_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperArm_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      
        

                       GLfloat rightLowerArm_04[]                      =  {-0.0132, -0.1606, 0.0121};
                       GLfloat rightLowerArm_ROTATE[]                  =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]  
                       GLfloat rightLowerArm_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat rightLowerArm_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat rightLowerArm_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      
                       


                                      GLfloat rightHand_04[]                      =  {0.0058907, -0.1834, 0.0436};
                                      GLfloat rightHand_ROTATE[]                  =  {0.0f, 0.0f, 1.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                                      GLfloat rightHand_ROTATE_FRAMEA[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                      GLfloat rightHand_ROTATE_FRAMEB[]           =  {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                      GLfloat rightHand_ROTATE_FRAME_LOOP_RESET[] =  {1.0f, 0.0f, 0.0f, 0.0f};      


bool  rightUpperArm_ROTATE_X = false;
bool  rightUpperArm_ROTATE_Y = false;
bool  rightUpperArm_ROTATE_Z = false;

bool  rightLowerArm_ROTATE_X = false;
bool  rightLowerArm_ROTATE_Y = false;
bool  rightLowerArm_ROTATE_Z = false;

bool  rightHand_ROTATE_X = false;
bool  rightHand_ROTATE_Y = false;
bool  rightHand_ROTATE_Z = false;

int    setSelection_RIGHT_ARM           = 1;
int    SelectionCount_RIGHT_ARM         = 0;
int    setSelectionLimit_RIGHT_ARM      = 0;
float  animationBlendFactor_RIGHT_ARM   = 0.032;


float  RIGHT_ARM_FRAME_TIME_01             = 0.155;
float  RIGHT_ARM_FRAME_TIME_02             = 0.155;
float  RIGHT_ARM_FRAME_TIME_03             = 0.155;
float  RIGHT_ARM_FRAME_TIME_04             = 0.155;
float  RIGHT_ARM_FRAME_TIME_05             = 0.155;
float  RIGHT_ARM_FRAME_TIME_06             = 0.155;
//----------------------------------------------------------
GLboolean rightUpperArm_ROTATION_ACTIVE    = false;
//----------------------------------------------------------
GLboolean rightLowerArm_ROTATION_ACTIVE     = false;
//----------------------------------------------------------
GLboolean rightHand_ROTATION_ACTIVE        = false;
GLboolean    rightUpperArm_AnimationSequence         = false;  



GLfloat rightUpperArm_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperArm_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperArm_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperArm_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightUpperArm_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperArm_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperArm_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};

GLfloat rightLowerArm_SET_01[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerArm_SET_02[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerArm_SET_03[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerArm_SET_04[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightLowerArm_SET_05[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerArm_SET_06[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};         
GLfloat rightLowerArm_SET_07[]                  = { 1.0f, 0.0f, 0.0f, 0.0f};    

GLfloat rightHand_SET_01[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat rightHand_SET_02[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat rightHand_SET_03[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat rightHand_SET_04[]                  = {0.0f, 1.0f, 0.0f, 0.0f};                       
GLfloat rightHand_SET_05[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat rightHand_SET_06[]                  = {0.0f, 1.0f, 0.0f, 0.0f};
GLfloat rightHand_SET_07[]                  = {0.0f, 1.0f, 0.0f, 0.0f};


GLfloat   rightArm_ROTATION_FRAME_TIME[]           = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};
//===========================================================================================================================================================

int leftLegSelection                                 = 8;

//GLfloat leftLeg_04[] = {0, 0, 0};

        GLfloat leftUpperLeg_04[]                      =  {0.0, -0.0, -0.0};
        GLfloat leftUpperLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat leftUpperLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat leftUpperLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat leftUpperLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                 

                       GLfloat leftLowerLeg_04[]                      = {0.0033, -0.2086, 0.0031};
                       GLfloat leftLowerLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                       GLfloat leftLowerLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat leftLowerLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat leftLowerLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
  

                                       GLfloat leftFoot_04[]                      =  {-0.0007, -0.254, -0.012};
                                       GLfloat leftFoot_ROTATE[]                  = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2] 
                                       GLfloat leftFoot_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                       GLfloat leftFoot_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                       GLfloat leftFoot_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      



bool  leftUpperLeg_ROTATE_X = false;
bool  leftUpperLeg_ROTATE_Y = false;
bool  leftUpperLeg_ROTATE_Z = false;

bool  leftLowerLeg_ROTATE_X = false;
bool  leftLowerLeg_ROTATE_Y = false;
bool  leftLowerLeg_ROTATE_Z = false;

bool  leftFoot_ROTATE_X = false;
bool  leftFoot_ROTATE_Y = false;
bool  leftFoot_ROTATE_Z = false;

int    setSelection_LEFT_LEG            = 1;
int    SelectionCount_LEFT_LEG          = 0;
int    setSelectionLimit_LEFT_LEG       = 0;
float  animationBlendFactor_LEFT_LEG    = 0.032;


float  LEFT_LEG_FRAME_TIME_01              = 0.155;
float  LEFT_LEG_FRAME_TIME_02              = 0.155;
float  LEFT_LEG_FRAME_TIME_03              = 0.155;
float  LEFT_LEG_FRAME_TIME_04              = 0.155;
float  LEFT_LEG_FRAME_TIME_05              = 0.155;
float  LEFT_LEG_FRAME_TIME_06              = 0.155;
//------------------------------------------------
GLboolean leftUpperLeg_ROTATION_ACTIVE    = false;
//--------
GLboolean leftLowerLeg_ROTATION_ACTIVE    = false;
//--------
GLboolean leftFoot_ROTATION_ACTIVE        = false;

GLboolean    leftUpperLeg_AnimationSequence        = false;

GLfloat leftUpperLeg_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperLeg_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperLeg_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperLeg_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftUpperLeg_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftUpperLeg_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftUpperLeg_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};             

GLfloat leftLowerLeg_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerLeg_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerLeg_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerLeg_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftLowerLeg_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftLowerLeg_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f}; 
GLfloat leftLowerLeg_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                

GLfloat leftFoot_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftFoot_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftFoot_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftFoot_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat leftFoot_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat leftFoot_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f}; 
GLfloat leftFoot_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f}; 

GLfloat  leftLeg_ROTATION_FRAME_TIME[]           = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};
//===========================================================================================================================================================                     

int rightLegSelection                                 = 8;



        GLfloat rightUpperLeg_04[]                     =  {-0.0715, -0.0581, -0.004};
        GLfloat rightUpperLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f,  0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
        GLfloat rightUpperLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
        GLfloat rightUpperLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
        
                
         
                       GLfloat rightLowerLeg_04[]                      =  {-0.0033, -0.2086, 0.0031};
                       GLfloat rightLowerLeg_ROTATE[]                  = {1.0f, 0.0f, 0.0f,  .0f};///THETA =[3] __XYZaxis=[0][1][2] 
                       GLfloat rightLowerLeg_ROTATE_FRAMEA[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                       GLfloat rightLowerLeg_ROTATE_FRAMEB[]           = {1.0f, 0.0f, 0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                       GLfloat rightLowerLeg_ROTATE_FRAME_LOOP_RESET[] = {1.0f, 0.0f, 0.0f, 0.0f};      
                       


                                       GLfloat rightFoot_04[]                      = { 0.0007, -0.254, -0.012};      
                                       GLfloat rightFoot_ROTATE[]                  = { 1.0f,    0.0f,   0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]        
                                       GLfloat rightFoot_ROTATE_FRAMEA[]           = { 1.0f,    0.0f,   0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]       
                                       GLfloat rightFoot_ROTATE_FRAMEB[]           = { 1.0f,    0.0f,   0.0f, 0.0f};///THETA =[3] __XYZaxis=[0][1][2]
                                       GLfloat rightFoot_ROTATE_FRAME_LOOP_RESET[] = { 1.0f,    0.0f,   0.0f, 0.0f};      
                 


bool  rightUpperLeg_ROTATE_X = false;
bool  rightLowerLeg_ROTATE_X = false;
bool  rightFoot_ROTATE_X     = false;

bool  rightUpperLeg_ROTATE_Y = false;
bool  rightLowerLeg_ROTATE_Y = false;
bool  rightFoot_ROTATE_Y     = false;

bool  rightUpperLeg_ROTATE_Z = false;
bool  rightLowerLeg_ROTATE_Z = false;
bool  rightFoot_ROTATE_Z     = false;

int    setSelection_RIGHT_LEG           = 1;
int    SelectionCount_RIGHT_LEG         = 0;
int    setSelectionLimit_RIGHT_LEG      = 0;
float  animationBlendFactor_RIGHT_LEG   = 0.032;

float  RIGHT_LEG_FRAME_TIME_01             = 0.155;
float  RIGHT_LEG_FRAME_TIME_02             = 0.155;
float  RIGHT_LEG_FRAME_TIME_03             = 0.155;
float  RIGHT_LEG_FRAME_TIME_04             = 0.155;
float  RIGHT_LEG_FRAME_TIME_05             = 0.155;
float  RIGHT_LEG_FRAME_TIME_06             = 0.155;

//----------------------------------------------------------
GLboolean rightUpperLeg_ROTATION_ACTIVE    = false;
//----------------------------------------------------------
GLboolean rightLowerLeg_ROTATION_ACTIVE    = false;
//----------------------------------------------------------
GLboolean rightFoot_ROTATION_ACTIVE        = false;

GLboolean    rightUpperLeg_AnimationSequence         = false;
  
GLfloat rightUpperLeg_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperLeg_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperLeg_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperLeg_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightUpperLeg_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightUpperLeg_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightUpperLeg_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       

GLfloat rightLowerLeg_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerLeg_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerLeg_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerLeg_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightLowerLeg_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightLowerLeg_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightLowerLeg_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};          

GLfloat rightFoot_SET_01[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightFoot_SET_02[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightFoot_SET_03[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightFoot_SET_04[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightFoot_SET_05[]                  = {1.0f, 0.0f, 0.0f, 0.0f};
GLfloat rightFoot_SET_06[]                  = {1.0f, 0.0f, 0.0f, 0.0f};                       
GLfloat rightFoot_SET_07[]                  = {1.0f, 0.0f, 0.0f, 0.0f};   

GLfloat   rightLeg_ROTATION_FRAME_TIME[]           = { 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04};







