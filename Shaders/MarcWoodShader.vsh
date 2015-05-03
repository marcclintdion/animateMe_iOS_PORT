//
//  Shader.vsh
//  openGl-game-0
//
//  Created by marc  dion on 12-03-04.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

attribute vec4 position;

attribute vec2 texture;

varying lowp vec4 colorVarying;



lowp vec4 lightPosition        = lowp vec4(0.0, .2, 1.0, 1.0);
varying lowp vec4 lightPosition_PASS;

uniform vec4 moveModel;

uniform mat4 modelViewProjectionMatrix;
uniform mat3 normalMatrix;
uniform mat4 lightMatrix;

varying lowp vec3  passNormal;

varying lowp vec4 eyeRotate;


varying lowp vec2 varTexcoord;

void main()
{
    lightPosition_PASS = normalize(lightMatrix * lightPosition);

    passNormal         = normal;    
    
    varTexcoord        = texture;
    
    gl_Position        = modelViewProjectionMatrix * position;
}



//---------------------------------------------------------------------------------------------------------

/*
 //
 //  Shader.vsh
 //  openGl-game-0
 //
 //  Created by marc  dion on 12-03-04.
 //  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
 //
 
 attribute vec4 position;
 attribute vec3 normal;
 attribute vec2 texture;
 
 varying lowp vec4 colorVarying;
 
 uniform vec4 translateModel;
 
 uniform mat4 modelViewProjectionMatrix;
 uniform mat3 normalMatrix;
 
 vec4 vertexFinal;
 
 varying lowp vec3 passNormal;
 
 
 varying lowp vec2 varTexcoord;
 
 void main()
 {
 
 passNormal = normal;
 vec3 eyeNormal = normalize(normalMatrix * normal);
 
 
 vec3 lightPosition = vec3(0.0, 0.0, 1.0);
 vec4 diffuseColor  = vec4(0.4, 0.4, 1.0, 1.0);
 
 varTexcoord = texture;
 
 float nDotVP = max(0.0, dot(eyeNormal, normalize(lightPosition)));
 
 colorVarying = diffuseColor * nDotVP;
 
 
 vertexFinal = position + translateModel;
 
 gl_Position = modelViewProjectionMatrix * vertexFinal;
 }
 */