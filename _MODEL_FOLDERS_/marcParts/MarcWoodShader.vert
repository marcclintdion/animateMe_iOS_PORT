const GLchar *vertexSource =

"    #define highp                                                                                \n"

"    uniform highp vec4 light_POSITION_01;                                                        \n"
"    uniform         mat4 modelViewProjectionMatrix;                                                \n"
"    uniform         mat4 lightMatrix;                                                              \n"

"    attribute       vec4 position;                                                                 \n"
"    attribute       vec2 texture;                                                                  \n"

"    varying highp vec4 lightPosition_PASS;                                                       \n"
"    varying highp vec2 varTexcoord;                                                              \n"


"    void main()                                                                                    \n"
"    {                                                                                              \n"
"        lightPosition_PASS = normalize(lightMatrix * light_POSITION_01);                           \n"

"        varTexcoord        = texture;                                                              \n"

"        gl_Position        = modelViewProjectionMatrix * position;                                 \n"
"    }                                                                                              \n";