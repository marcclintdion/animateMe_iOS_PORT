

//------------------------------------------------------------------------------------------------------------//___LOAD_UNIFORMS

UNIFORM_MODELVIEWPROJ_smallButton                         = glGetUniformLocation(smallButton_SHADER, "modelViewProjectionMatrix");
UNIFORM_LIGHT_MATRIX_smallButton                          = glGetUniformLocation(smallButton_SHADER, "lightMatrix");    
UNIFORM_LIGHT_POSITION_01_smallButton                     = glGetUniformLocation(smallButton_SHADER, "light_POSITION_01");      
UNIFORM_TEXTURE_smallButton                               = glGetUniformLocation(smallButton_SHADER, "Texture1");
UNIFORM_TEXTURE_DOT3_smallButton                          = glGetUniformLocation(smallButton_SHADER, "NormalMap");

//============================================================================================================================== 
filePathName = [[NSBundle mainBundle] pathForResource:@"Z_BLUE_POSITIVE" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &Z_BLUE_POSITIVE_NORMAL_TEX);
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);
ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
imgDestroyImage(image);   
//==========================================================================================================  


filePathName = [[NSBundle mainBundle] pathForResource:@"armsForwardShouldersBack" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &armsForwardShouldersBack_TEXTURE1);
glBindTexture(GL_TEXTURE_2D, armsForwardShouldersBack_TEXTURE1);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
//---------------------------------------------------------------------------------------------------------- 
filePathName = [[NSBundle mainBundle] pathForResource:@"armsUpShouldersFarBack" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &armsUpShouldersFarBack_TEXTURE1);
glBindTexture(GL_TEXTURE_2D, armsUpShouldersFarBack_TEXTURE1);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
//----------------------------------------------------------------------------------------------------------  
filePathName = [[NSBundle mainBundle] pathForResource:@"armsOutShouldersBack" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &armsOutShouldersBack_TEXTURE1);
glBindTexture(GL_TEXTURE_2D, armsOutShouldersBack_TEXTURE1);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
//----------------------------------------------------------------------------------------------------------             
filePathName = [[NSBundle mainBundle] pathForResource:@"armsBackTiltedIn" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &armsBackTiltedIn_TEXTURE1);
glBindTexture(GL_TEXTURE_2D, armsBackTiltedIn_TEXTURE1);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);
//----------------------------------------------------------------------------------------------------------             
filePathName = [[NSBundle mainBundle] pathForResource:@"armsOutShouldersForward" ofType:@"png"];
image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
glGenTextures(1, &armsOutShouldersForward_TEXTURE1);
glBindTexture(GL_TEXTURE_2D, armsOutShouldersForward_TEXTURE1);
ConfigureAndLoadTexture(image->data,  image->width, image->height );    
imgDestroyImage(image);


