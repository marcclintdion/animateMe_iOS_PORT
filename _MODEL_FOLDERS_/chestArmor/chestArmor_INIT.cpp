chestArmor_SHADER = glCreateProgram();                                                                                     

//---------------------------------------------------------------------
const GLchar *vertexSource_chestArmor =                                                                                    

" #define highp                                                                                                       \n" 

"     attribute vec4 position;                                                                                      \n" 
"     attribute vec2 texture;                                                                                        \n" 

"     uniform   highp vec4 light_POSITION_01;                                                                         \n" 
"     uniform        mat4 modelViewProjectionMatrix;                                                                       \n" 
"     uniform        mat4 lightMatrix;                                                                               \n" 

" //-------------------------------------------------                                                                \n" 

"     varying highp   vec4 lightPosition_PASS;                                                                        \n" 
"     varying highp   vec2 varTexcoord;                                                                               \n" 
" //-------------------------------------------------                                                                \n" 
" void main()                                                                                                        \n" 
" {                                                                                                                  \n" 
"     varTexcoord             = texture;                                                                             \n" 

"     lightPosition_PASS      = normalize(lightMatrix * light_POSITION_01);                                          \n" 
"     gl_Position             = modelViewProjectionMatrix * position;                                                     \n" 
" }                                                                                                                    \n";   
//--------------------------------------------------------------------------------------------------------                  

const GLchar *fragmentSource_chestArmor =                                                                                  

"#ifdef GL_ES                                                                                                        \n" 
"#else                                                                                                               \n" 
"#define highp                                                                                                        \n" 
"#endif                                                                                                              \n" 

"//---------------------------------------------------------------------------------------GLOBALS                    \n" 

"    uniform sampler2D  Texture1;                                                                                    \n" 
"    uniform sampler2D  NormalMap;                                                                                   \n" 

"                                                                                  //uniform highp  float counter;    \n" 
"   //--------------------------------------------                                                                   \n" 
"    varying highp vec4  lightPosition_PASS;                                                                          \n" 
"    varying highp vec2  varTexcoord;                                                                                 \n" 

"    //--------------------------------------------                                                                  \n" 
"            highp vec4  tempColor;                                                                                   \n" 
"            highp vec3  NormalTex;                                                                                   \n" 

"            //------------------------                                                                              \n" 
"            highp float NdotL1;                                                                                      \n" 
"//---------------------------------------------------------------------------------------MAIN                       \n" 

"void main()                                                                                                         \n" 
"{                                                                                                                   \n" 
"            //----------------------------------------------------------------------------                          \n" 
"            NormalTex       =  texture2D(NormalMap,  varTexcoord.xy).xyz;                                           \n" 
"            NormalTex       =  normalize((NormalTex  - 0.5)*2.0);                                                   \n" 
"            NdotL1          =  dot(NormalTex, lightPosition_PASS.xyz);                                              \n" 

"            tempColor       =  texture2D(Texture1, varTexcoord.st, 0.0);                                                 \n"

"            highp float specularLight   =  pow(max(NdotL1, 0.0), 30.0)*tempColor.x;                                                      \n"  

"            tempColor      +=  specularLight * vec4(2.7, 1.78, 0.0, 1.0) * 0.7 * tempColor * tempColor* tempColor;                             \n" 

"            tempColor      *=  0.6  * tempColor * NdotL1* NdotL1* NdotL1;                                                 \n" 

"            gl_FragColor    =  tempColor;                                                                          \n" 
 

"}                                                                                                                   \n";
//--------------------------------------------------------------------------------------------------      
//---------------------------------------------------------------------
chestArmor_SHADER_VERTEX = glCreateShader(GL_VERTEX_SHADER);
glShaderSource(chestArmor_SHADER_VERTEX, 1, &vertexSource_chestArmor, 0);
glCompileShader(chestArmor_SHADER_VERTEX);    
//---------------------------------------------------------------------
chestArmor_SHADER_FRAGMENT = glCreateShader(GL_FRAGMENT_SHADER);
glShaderSource(chestArmor_SHADER_FRAGMENT, 1, &fragmentSource_chestArmor, 0);
glCompileShader(chestArmor_SHADER_FRAGMENT);      
//------------------------------------------------
glAttachShader(chestArmor_SHADER, chestArmor_SHADER_VERTEX);
glAttachShader(chestArmor_SHADER, chestArmor_SHADER_FRAGMENT);
//------------------------------------------------    
glBindAttribLocation(chestArmor_SHADER, 0, "position");       
glBindAttribLocation(chestArmor_SHADER, 1, "texture");
//------------------------------------------------    
glLinkProgram(chestArmor_SHADER);
//------------------------------------------------
#ifdef __APPLE__    
glDetachShader(chestArmor_SHADER, chestArmor_SHADER_VERTEX);
glDetachShader(chestArmor_SHADER, chestArmor_SHADER_FRAGMENT);
#endif     
//------------------------------------------------
glDeleteShader(chestArmor_SHADER_VERTEX);
glDeleteShader(chestArmor_SHADER_FRAGMENT);


//------------------------------------------------------------------------------------------------------------//___LOAD_UNIFORMS

UNIFORM_MODELVIEWPROJ_chestArmor                         = glGetUniformLocation(chestArmor_SHADER, "modelViewProjectionMatrix");
UNIFORM_LIGHT_MATRIX_chestArmor                          = glGetUniformLocation(chestArmor_SHADER, "lightMatrix");    
UNIFORM_LIGHT_POSITION_01_chestArmor                     = glGetUniformLocation(chestArmor_SHADER, "light_POSITION_01");      
UNIFORM_TEXTURE_chestArmor                               = glGetUniformLocation(chestArmor_SHADER, "Texture1");
UNIFORM_TEXTURE_DOT3_chestArmor                          = glGetUniformLocation(chestArmor_SHADER, "NormalMap");

//------------------------------------------------------------------------------------------------------------//___LOAD_TEXTURES    
        #ifdef __APPLE__
        filePathName = [[NSBundle mainBundle] pathForResource:@"chestArmor_DOT3" ofType:@"bmp"];
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
        glGenTextures(1, &chestArmor_NORMAL_TEX);
        glBindTexture(GL_TEXTURE_2D, chestArmor_NORMAL_TEX);
        ConfigureAndLoadTexture(image->data,  image->width, image->height ); 
        imgDestroyImage(image);   
        //---------------------
        filePathName = [[NSBundle mainBundle] pathForResource:@"chestArmor" ofType:@"jpg"];
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
        glGenTextures(1, &chestArmor_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, chestArmor_TEXTURE1);
        ConfigureAndLoadTexture(image->data,  image->width, image->height );    
        imgDestroyImage(image);
        #endif            

        #ifdef _WIN32_  
        loadTexture("chestArmor_DOT3.bmp",                       chestArmor_NORMAL_TEX);                
        loadTexture("chestArmor.jpg",                            chestArmor_TEXTURE1);                  
        #endif
//------------------------------------------------------------------------------------------|___LOAD_VBO                        
        #include    "chestArmor.cpp"                                                                                           
        glGenBuffers(1,              &chestArmor_VBO);                                                                              
        glBindBuffer(GL_ARRAY_BUFFER, chestArmor_VBO);                                                                              
        glBufferData(GL_ARRAY_BUFFER, sizeof(chestArmor), chestArmor, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                            

