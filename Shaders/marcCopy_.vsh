#define lowp

    uniform lowp vec4 light_POSITION_01;
    uniform      mat4 modelViewProjectionMatrix;
    uniform      mat4 lightMatrix;

    attribute    vec4 position;
    attribute    vec2 texture;

    varying lowp vec4 lightPosition_PASS;
    varying lowp vec2 varTexcoord;


void main()
{
    lightPosition_PASS = normalize(lightMatrix * light_POSITION_01);
    
    varTexcoord        = texture;
    
    gl_Position        = modelViewProjectionMatrix * position;
}


