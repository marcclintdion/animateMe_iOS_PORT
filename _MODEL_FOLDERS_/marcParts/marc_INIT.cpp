#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
//=================================================================================================================================
marc_SHADER = glCreateProgram();
//---------------------------------------------------------------------
#include "MarcWoodShader.vert"
//---------------------------------------------------------------------
marc_SHADER_VERTEX = glCreateShader(GL_VERTEX_SHADER);
glShaderSource(marc_SHADER_VERTEX, 1, &vertexSource, NULL);
glCompileShader(marc_SHADER_VERTEX);    
//---------------------------------------------------------------------
#include "MarcWoodShader.frag"
//---------------------------------------------------------------------
marc_SHADER_FRAGMENT = glCreateShader(GL_FRAGMENT_SHADER);
glShaderSource(marc_SHADER_FRAGMENT, 1, &fragmentSource, NULL);
glCompileShader(marc_SHADER_FRAGMENT);      
//------------------------------------------------
glAttachShader(marc_SHADER, marc_SHADER_VERTEX);
glAttachShader(marc_SHADER, marc_SHADER_FRAGMENT);
//------------------------------------------------    
glBindAttribLocation(marc_SHADER, 0, "position");       
glBindAttribLocation(marc_SHADER, 1, "texture");
//glBindAttribLocation(marc _SHADER, 2, "normal");   
//------------------------------------------------    
glLinkProgram(marc_SHADER);
//------------------------------------------------
#ifdef __APPLE__    
glDetachShader(marc_SHADER, marc_SHADER_VERTEX);
glDetachShader(marc_SHADER, marc_SHADER_FRAGMENT);
#endif     
//------------------------------------------------
glDeleteShader(marc_SHADER_VERTEX);
glDeleteShader(marc_SHADER_FRAGMENT);


//------------------------------------------------------------------------------------------------------------//___LOAD_UNIFORMS

UNIFORM_MODELVIEWPROJ                   = glGetUniformLocation(marc_SHADER, "modelViewProjectionMatrix");
UNIFORM_LIGHT_MATRIX                    = glGetUniformLocation(marc_SHADER, "lightMatrix");    
//UNIFORM_NORMAL_marcLeftUpperArm       = glGetUniformLocation(marc _SHADER, "normalMatrix");

UNIFORM_marc_LIGHT_POSITION_01          = glGetUniformLocation(marc_SHADER, "light_POSITION_01");      
UNIFORM_TEXTURE                         = glGetUniformLocation(marc_SHADER, "Texture1");
UNIFORM_TEXTURE_DOT3                    = glGetUniformLocation(marc_SHADER, "NormalMap");

//------------------------------------------------------------------------------------------------------------//___LOAD_TEXTURES



//------------------------------------------------------------------------------------------
#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"hips_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[5]);
glBindTexture(GL_TEXTURE_2D, normalMap[5]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"hips" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[5]);
glBindTexture(GL_TEXTURE_2D, textureMap[5]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("hips/hips_DOT3.bmp",          normalMap[5]);    
loadTexture("hips/hips.jpg",               textureMap[5]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "hips/hips.cpp"
glGenBuffers(1,              &hips_VBO);
glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(hips), hips, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"torso_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[6]);
glBindTexture(GL_TEXTURE_2D, normalMap[6]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"torso" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[6]);
glBindTexture(GL_TEXTURE_2D, textureMap[6]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("torso/torso_DOT3.bmp",          normalMap[6]);    
loadTexture("torso/torso.jpg",               textureMap[6]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "torso/torso.cpp"
glGenBuffers(1,              &torso_VBO);
glBindBuffer(GL_ARRAY_BUFFER, torso_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(torso), torso, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 

//=================================================================================================================================
                 
//=================================================================================================================================      

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"head_neck_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[7]);
glBindTexture(GL_TEXTURE_2D, normalMap[7]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"head_neck" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[7]);
glBindTexture(GL_TEXTURE_2D, textureMap[7]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("head_neck/head_neck_DOT3.bmp",          normalMap[7]);    
loadTexture("head_neck/head_neck.jpg",               textureMap[7]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "head_neck/head_neck.cpp"
glGenBuffers(1,              &head_neck_VBO);
glBindBuffer(GL_ARRAY_BUFFER, head_neck_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(head_neck), head_neck, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================    

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"face_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[14]);
glBindTexture(GL_TEXTURE_2D, normalMap[14]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"face" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[14]);
glBindTexture(GL_TEXTURE_2D, textureMap[14]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("face/face_DOT3.bmp",          normalMap[14]);    
loadTexture("face/face.jpg",               textureMap[14]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "face/face.cpp"
glGenBuffers(1,              &face_VBO);
glBindBuffer(GL_ARRAY_BUFFER, face_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(face), face, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================        





#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftUpperArm_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[8]);
glBindTexture(GL_TEXTURE_2D, normalMap[8]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftUpperArm" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[8]);
glBindTexture(GL_TEXTURE_2D, textureMap[8]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftUpperArm/leftUpperArm_DOT3.bmp",          normalMap[8]);    
loadTexture("leftUpperArm/leftUpperArm.jpg",               textureMap[8]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftUpperArm/leftUpperArm.cpp"
glGenBuffers(1,              &leftUpperArm_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftUpperArm_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftUpperArm), leftUpperArm, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftLowerArm_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[9]);
glBindTexture(GL_TEXTURE_2D, normalMap[9]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftLowerArm" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[9]);
glBindTexture(GL_TEXTURE_2D, textureMap[9]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftLowerArm/leftLowerArm_DOT3.bmp",          normalMap[9]);    
loadTexture("leftLowerArm/leftLowerArm.jpg",               textureMap[9]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftLowerArm/leftLowerArm.cpp"
glGenBuffers(1,              &leftLowerArm_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftLowerArm_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftLowerArm), leftLowerArm, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftHand_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[10]);
glBindTexture(GL_TEXTURE_2D, normalMap[10]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftHand" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[10]);
glBindTexture(GL_TEXTURE_2D, textureMap[10]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftHand/leftHand_DOT3.bmp",          normalMap[10]);    
loadTexture("leftHand/leftHand.jpg",               textureMap[10]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftHand/leftHand.cpp"
glGenBuffers(1,              &leftHand_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftHand_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftHand), leftHand, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================    

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"rightUpperArm_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[11]);
glBindTexture(GL_TEXTURE_2D, normalMap[11]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"rightUpperArm" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[11]);
glBindTexture(GL_TEXTURE_2D, textureMap[11]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("rightUpperArm/rightUpperArm_DOT3.bmp",          normalMap[11]);    
loadTexture("rightUpperArm/rightUpperArm.jpg",               textureMap[11]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightUpperArm/rightUpperArm.cpp"
glGenBuffers(1,              &rightUpperArm_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightUpperArm_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightUpperArm), rightUpperArm, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"rightLowerArm_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[12]);
glBindTexture(GL_TEXTURE_2D, normalMap[12]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"rightLowerArm" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[12]);
glBindTexture(GL_TEXTURE_2D, textureMap[12]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("rightLowerArm/rightLowerArm_DOT3.bmp",          normalMap[12]);    
loadTexture("rightLowerArm/rightLowerArm.jpg",               textureMap[12]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightLowerArm/rightLowerArm.cpp"
glGenBuffers(1,              &rightLowerArm_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightLowerArm_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightLowerArm), rightLowerArm, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"rightHand_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[13]);
glBindTexture(GL_TEXTURE_2D, normalMap[13]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"rightHand" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[13]);
glBindTexture(GL_TEXTURE_2D, textureMap[13]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("rightHand/rightHand_DOT3.bmp",          normalMap[13]);    
loadTexture("rightHand/rightHand.jpg",               textureMap[13]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightHand/rightHand.cpp"
glGenBuffers(1,              &rightHand_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightHand_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightHand), rightHand, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================     

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftUpperLeg_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[15]);
glBindTexture(GL_TEXTURE_2D, normalMap[15]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftUpperLeg" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[15]);
glBindTexture(GL_TEXTURE_2D, textureMap[15]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftUpperLeg/leftUpperLeg_DOT3.bmp",          normalMap[15]);    
loadTexture("leftUpperLeg/leftUpperLeg.jpg",               textureMap[15]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftUpperLeg/leftUpperLeg.cpp"
glGenBuffers(1,              &leftUpperLeg_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftUpperLeg_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftUpperLeg), leftUpperLeg, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================     

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftLowerLeg_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[16]);
glBindTexture(GL_TEXTURE_2D, normalMap[16]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftLowerLeg" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[16]);
glBindTexture(GL_TEXTURE_2D, textureMap[16]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftLowerLeg/leftLowerLeg_DOT3.bmp",          normalMap[16]);    
loadTexture("leftLowerLeg/leftLowerLeg.jpg",               textureMap[16]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftLowerLeg/leftLowerLeg.cpp"
glGenBuffers(1,              &leftLowerLeg_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftLowerLeg_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftLowerLeg), leftLowerLeg, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================      

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"leftFoot_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[17]);
glBindTexture(GL_TEXTURE_2D, normalMap[17]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"leftFoot" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[17]);
glBindTexture(GL_TEXTURE_2D, textureMap[17]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("leftFoot/leftFoot_DOT3.bmp",          normalMap[17]);    
loadTexture("leftFoot/leftFoot.jpg",               textureMap[17]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "leftFoot/leftFoot.cpp"
glGenBuffers(1,              &leftFoot_VBO);
glBindBuffer(GL_ARRAY_BUFFER, leftFoot_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(leftFoot), leftFoot, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================       


#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"rightUpperLeg_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[18]);
glBindTexture(GL_TEXTURE_2D, normalMap[18]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"rightUpperLeg" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[18]);
glBindTexture(GL_TEXTURE_2D, textureMap[18]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("rightUpperLeg/rightUpperLeg_DOT3.bmp",          normalMap[18]);    
loadTexture("rightUpperLeg/rightUpperLeg.jpg",               textureMap[18]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightUpperLeg/rightUpperLeg.cpp"
glGenBuffers(1,              &rightUpperLeg_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightUpperLeg_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightUpperLeg), rightUpperLeg, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================     

#ifdef __APPLE__
filePathName = [[NSBundle mainBundle] pathForResource:@"rightLowerLeg_DOT3" ofType:@"bmp"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &normalMap[19]);
glBindTexture(GL_TEXTURE_2D, normalMap[19]);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//---------------------
filePathName = [[NSBundle mainBundle] pathForResource:@"rightLowerLeg" ofType:@"jpg"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &textureMap[19]);
glBindTexture(GL_TEXTURE_2D, textureMap[19]);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
#endif    
//------------------------------------------------------------------------------------------
#ifdef _WIN32_     
loadTexture("rightLowerLeg/rightLowerLeg_DOT3.bmp",          normalMap[19]);    
loadTexture("rightLowerLeg/rightLowerLeg.jpg",               textureMap[19]);
#endif  
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightLowerLeg/rightLowerLeg.cpp"
glGenBuffers(1,              &rightLowerLeg_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightLowerLeg_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightLowerLeg), rightLowerLeg, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================      

/* #ifdef __APPLE__
 filePathName = [[NSBundle mainBundle] pathForResource:@"rightFoot_DOT3" ofType:@"bmp"];
 image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
 glGenTextures(1, &normalMap[17]);
 glBindTexture(GL_TEXTURE_2D, normalMap[17]);
 ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
 imgDestroyImage(image);   
 //---------------------
 filePathName = [[NSBundle mainBundle] pathForResource:@"rightFoot" ofType:@"jpg"];
 image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
 glGenTextures(1, &textureMap[17]);
 glBindTexture(GL_TEXTURE_2D, textureMap[17]);
 ConfigureAndLoadTexture(image->data,  image->width, image->height );    
 imgDestroyImage(image);
 #endif    
 //------------------------------------------------------------------------------------------
 #ifdef _WIN32_     
 loadTexture("rightFoot/rightFoot_DOT3.bmp",          normalMap[17]);    
 loadTexture("rightFoot/rightFoot.jpg",               textureMap[17]);
 #endif
 */ 
//------------------------------------------------------------------------------------------------------------//___LOAD_VBO      
#include    "rightFoot/rightFoot.cpp"
glGenBuffers(1,              &rightFoot_VBO);
glBindBuffer(GL_ARRAY_BUFFER, rightFoot_VBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(rightFoot), rightFoot, GL_STATIC_DRAW);
glBindBuffer(GL_ARRAY_BUFFER, 0); 
//=================================================================================================================================     



