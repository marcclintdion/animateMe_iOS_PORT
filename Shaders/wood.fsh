



uniform sampler2D  diffuseTextureMap;
uniform sampler2D  normalTextureMap;

varying lowp vec4  lightPosition_PASS;
varying lowp vec2  varTexcoord;
        
        lowp float NdotL1;
        lowp vec3  normal;




void main()
{
    lowp vec3 NormalTex   =  texture2D(normalTextureMap,  varTexcoord).xyz;
    NormalTex             = (NormalTex - 0.5);
	normal                =  normalize(NormalTex);
	normal                =  normal.rgb;
    
    NdotL1                =  dot(normal, lightPosition_PASS.xyz);
    
    gl_FragColor          =  texture2D(diffuseTextureMap, varTexcoord.st, 0.0).bgra * 0.3             //ambient
                        
                          +  texture2D(diffuseTextureMap, varTexcoord.st, 0.0) * NdotL1 * NdotL1      //ambient * diffuse^2
                           
                          +  texture2D(diffuseTextureMap, varTexcoord.st, 0.0) * pow(NdotL1, 100.0) ; //ambient * specular

}
