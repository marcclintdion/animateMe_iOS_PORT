//
//  Shader.fsh
//  openGl-game-0
//
//  Created by marc  dion on 12-03-04.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

varying lowp vec4  colorVarying;
varying lowp vec2  varTexcoord;
uniform sampler2D  diffuseTextureMap;
uniform sampler2D  normalTextureMap;


        lowp vec3  normal;

varying lowp vec4  lightPosition_PASS;

        lowp float NdotL1;

varying lowp vec3  passNormal;

void main()
{
    lowp vec3 NormalTex   =  texture2D(normalTextureMap,  varTexcoord).xyz;
    NormalTex             = (NormalTex - 0.5) * 2.0;
	normal                =  normalize(NormalTex);
	normal                =  normal.rgb;
    
    //normal.b             *= -1.0;
    
    NdotL1                =  dot(normal, lightPosition_PASS.xyz);
    
    
   gl_FragColor          =  (texture2D(diffuseTextureMap, varTexcoord.st, 0.0) * NdotL1 * NdotL1 + texture2D(diffuseTextureMap, varTexcoord.st, 0.0) * 0.3) + pow(NdotL1,150.0) * NdotL1;    
   //gl_FragColor          =  vec4(normal, 1.0);    

  
}
