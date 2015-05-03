GLfloat     PlayButton_POSITION[]               = { -0.305,  -0.494,  -1.2,  1.0};                                           
GLfloat     PlayButton_ROTATE[]                 = { 0.0,  0.0,  1.0,  -90.0};                                           
GLfloat     PlayButton_SCALE[]                  = { 1.0,  1.0,  1.0,  1.0};                                           

GLfloat     PlayButton_LIGHT_POSITION_01[]      = { 1.0,  .26,  2.0,  1.0};  

GLfloat     offset_smallButton[]                 = { 0.0,  0.0,  0.0,  1.0};                                           
GLfloat     tileJump_smallButton[]               = { 0.0,  0.0,  0.0,  1.0};                                           

GLuint      smallButton_VBO;                                                                                           
GLuint      smallButton_SHADER_VERTEX;                                                                                 
GLuint      smallButton_SHADER_FRAGMENT;                                                                               
GLuint      smallButton_SHADER;                                                                                        

GLuint      UNIFORM_LIGHT_POSITION_01_smallButton;                                                                     
GLuint      UNIFORM_counter_smallButton;                                                                               

GLuint      UNIFORM_offset_smallButton;                                                                                
GLuint      UNIFORM_tileJump_smallButton;                                                                              

GLuint      UNIFORM_MODELVIEW_smallButton;                                                                             
GLuint      UNIFORM_MODELVIEWPROJ_smallButton;                                                                         
GLuint      UNIFORM_MODELVIEWPROJ_INVERSE_smallButton;                                                                 
GLuint      UNIFORM_LIGHT_MATRIX_smallButton;                                                                          
GLuint      UNIFORM_TEXTURE_MATRIX_smallButton;                                                                        

GLuint      UNIFORM_TEXTURE_SHADOW_smallButton;                                                                        
GLuint      UNIFORM_TEXTURE_DOT3_smallButton;                                                                          
GLuint      UNIFORM_TEXTURE_smallButton;                                                                               
//-----------------------------                                                                                        
GLuint      smallButton_SHADOW_TEX;                                                                                    
GLuint      smallButton_NORMAL_TEX;                                                                                    
GLuint      smallButton_TEXTURE1;                                                                                      
