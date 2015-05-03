

uniform lowp vec4 lightPosition;

uniform      mat4 modelViewProjectionMatrix;
uniform      mat4 lightMatrix;

attribute    vec4 position;
attribute    vec2 texture;



varying lowp vec4 lightPosition_PASS;
varying lowp vec2 varTexcoord;



void main()
{
    lightPosition_PASS = normalize(lightMatrix * lightPosition);

    varTexcoord        = texture;
    
    gl_Position        = modelViewProjectionMatrix * position;
}
