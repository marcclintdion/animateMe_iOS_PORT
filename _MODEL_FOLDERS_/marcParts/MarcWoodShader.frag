const GLchar *fragmentSource =     
  
" #ifdef GL_ES                                                                                                  \n"
" #else                                                                                                         \n"
" #define highp                                                                                               \n"
" #endif                                                                                                        \n"


"    uniform sampler2D  Texture1;                                                                               \n"
"    uniform sampler2D  NormalMap;                                                                              \n"

"    varying highp vec4  lightPosition_PASS;                                                                  \n"
"    varying highp vec2  varTexcoord;                                                                         \n"

"     highp float NdotL1;                                                                                     \n"
"     highp vec3  normal;                                                                                     \n"



"     void main()                                                                                               \n"
"     {                                                                                                         \n"
"         highp vec3 NormalTex   =  texture2D(NormalMap,  varTexcoord).xyz;                                   \n"
"         NormalTex             = (NormalTex - 0.5);                                                            \n"
"         normal                =  normalize(NormalTex);                                                        \n"
"         normal                =  normal.rgb;                                                                  \n"

"         NdotL1                =  dot(normal, lightPosition_PASS.xyz);                                         \n"

"         gl_FragColor          =  texture2D(Texture1, varTexcoord.st, 0.0)  * .2                               \n"         

"                               +  texture2D(Texture1, varTexcoord.st, 0.0) * NdotL1 * NdotL1* NdotL1           \n"

"                               +  texture2D(Texture1, varTexcoord.st, 0.0) * pow(NdotL1, 80.0)*.6 ;            \n"

"     }                                                                                                          \n";