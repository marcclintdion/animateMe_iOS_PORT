
//############################################################################################################################################################   
glUseProgram(marc_SHADER);  
glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, marcModelPosition[0], marcModelPosition[1], marcModelPosition[2]);    
Rotate(modelView, marcModel_ROTATE[0], marcModel_ROTATE[1], marcModel_ROTATE[2], marcModel_ROTATE[3]);//--MODEL
Rotate(modelView, hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2], hips_ROTATE[3]);//--MODEL
//Translate(modelView, hips_POSITION[0], hips_POSITION[1], hips_POSITION[2]);  
Rotate(modelView, hips_ROTATE[0], hips_ROTATE[1], hips_ROTATE[2], hips_ROTATE[3]);//--MODEL
AssignMatrix(hipsMatrix, modelView); 
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[5]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[5]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 354);       
///############################################################################################################################################################   
glBindBuffer(GL_ARRAY_BUFFER, torso_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, torso_POSITION[0], torso_POSITION[1], torso_POSITION[2]);  
Rotate(modelView, torso_ROTATE[0], torso_ROTATE[1], torso_ROTATE[2], torso_ROTATE[3]);
AssignMatrix(torsoMatrix, modelView);    
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[6]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[6]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 912);           
///############################################################################################################################################################   
///############################################################################################################################################################      
glUseProgram(chestArmor_SHADER);                   
//-----------------------------------------------------------------------------                                             
glBindBuffer(GL_ARRAY_BUFFER, chestArmor_VBO);                                                                          
//-----------------------------------------------------------------------------|__TRANSFORMATIONS                           
// LoadIdentity(modelView);                                                                                                    


LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix,   goldenSunset_LIGHT_POSITION_01[0]*5, goldenSunset_LIGHT_POSITION_01[1]*5, goldenSunset_LIGHT_POSITION_01[2]*3);     
Rotate(lightMatrix,1.0, 0.0, 0.0,  -look_UP_DOWN);
Rotate(lightMatrix,0.0, 1.0, 0.0,  look_LEFT_RIGHT);                                                                               
//------------------------------------------------------------------------------|__ATTRIBUTES                               
glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));                                                  
glEnableVertexAttribArray(0);	                                                                                              
//--------------------------                                                                                                
glVertexAttribPointer(1,     2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));                                                 
glEnableVertexAttribArray(1);                                                                                               
//------------------------------------------------------------------------------|__UNIFORMS                                 
glUniform4f(UNIFORM_LIGHT_POSITION_01_chestArmor, 
            chestArmor_LIGHT_POSITION_01[0], 
            chestArmor_LIGHT_POSITION_01[1], 
            chestArmor_LIGHT_POSITION_01[2], 
            chestArmor_LIGHT_POSITION_01[3]);                      

glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_chestArmor, 1, 0,         mvpMatrix);                                   
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_chestArmor,  1, 0,         lightMatrix);                                           
//------------------------------------------------------------------------------|__TEXTURES                                 
glUniform1i(UNIFORM_TEXTURE_DOT3_chestArmor, 1);                                                                        
glActiveTexture(GL_TEXTURE1);                                                                                        
glBindTexture(GL_TEXTURE_2D,  chestArmor_NORMAL_TEX);                                                                      
//---                                                                                                                       
glUniform1i(UNIFORM_TEXTURE_chestArmor, 0);                                                                             
glActiveTexture(GL_TEXTURE0);                                                                                        
glBindTexture(GL_TEXTURE_2D, chestArmor_TEXTURE1);                                                                         
//-------------------------------------------------------------------------------|__DRAW                                    
glDrawArrays(GL_TRIANGLES, 0, 1008);                                                        
///############################################################################################################################################################      
///############################################################################################################################################################   
glUseProgram(marc_SHADER);    
glBindBuffer(GL_ARRAY_BUFFER, head_neck_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, head_neck_POSITION[0], head_neck_POSITION[1], head_neck_POSITION[2]);  
//-----------------
//Rotate(modelView, 15, 1.0, 0.0, 0.0);//ADJUST_FOR_NECK_ANGLE
//-----------------
Rotate(modelView, head_ROTATE[0], head_ROTATE[1], head_ROTATE[2], head_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, 
            marc_LIGHT_POSITION_01[0], 
            marc_LIGHT_POSITION_01[1], 
            marc_LIGHT_POSITION_01[2], 
            marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[7]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[7]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 390);           
///############################################################################################################################################################   
glBindBuffer(GL_ARRAY_BUFFER, face_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]+3);    

glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[14]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[14]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 1416);           
///############################################################################################################################################################       
glBindBuffer(GL_ARRAY_BUFFER, leftUpperArm_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
AssignMatrix(modelView, torsoMatrix);    
Translate(modelView, leftUpperArm_POSITION[0], leftUpperArm_POSITION[1], leftUpperArm_POSITION[2]);  
Rotate(modelView, leftUpperArm_ROTATE[0], leftUpperArm_ROTATE[1], leftUpperArm_ROTATE[2], leftUpperArm_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[8]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[8]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 489);   
///############################################################################################################################################################   
glBindBuffer(GL_ARRAY_BUFFER, leftLowerArm_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, leftLowerArm_POSITION[0], leftLowerArm_POSITION[1], leftLowerArm_POSITION[2]);  
Rotate(modelView, leftLowerArm_ROTATE[0], leftLowerArm_ROTATE[1], leftLowerArm_ROTATE[2], leftLowerArm_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[9]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[9]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 222);   
///############################################################################################################################################################=  
glBindBuffer(GL_ARRAY_BUFFER, leftHand_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, leftHand_POSITION[0], leftHand_POSITION[1], leftHand_POSITION[2]);  
Rotate(modelView, leftHand_ROTATE[0], leftHand_ROTATE[1], leftHand_ROTATE[2], leftHand_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[10]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[10]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 540);   
///############################################################################################################################################################=      
glBindBuffer(GL_ARRAY_BUFFER, rightUpperArm_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
AssignMatrix(modelView, torsoMatrix);    
Translate(modelView, rightUpperArm_POSITION[0], rightUpperArm_POSITION[1], rightUpperArm_POSITION[2]);  
Rotate(modelView, rightUpperArm_ROTATE[0], rightUpperArm_ROTATE[1], rightUpperArm_ROTATE[2], rightUpperArm_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[11]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[11]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 489);   
//############################################################################################################################################################=  
glBindBuffer(GL_ARRAY_BUFFER, rightLowerArm_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, rightLowerArm_POSITION[0], rightLowerArm_POSITION[1], rightLowerArm_POSITION[2]);  
Rotate(modelView, rightLowerArm_ROTATE[0], rightLowerArm_ROTATE[1], rightLowerArm_ROTATE[2], rightLowerArm_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[12]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[12]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 222);   
//############################################################################################################################################################=  
glBindBuffer(GL_ARRAY_BUFFER, rightHand_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, rightHand_POSITION[0], rightHand_POSITION[1], rightHand_POSITION[2]);  
Rotate(modelView, rightHand_ROTATE[0], rightHand_ROTATE[1], rightHand_ROTATE[2], rightHand_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[13]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[13]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 540);   
//############################################################################################################################################################=       
glBindBuffer(GL_ARRAY_BUFFER, leftUpperLeg_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
AssignMatrix(modelView, hipsMatrix);    
Translate(modelView, leftUpperLeg_POSITION[0], leftUpperLeg_POSITION[1], leftUpperLeg_POSITION[2]);  
Rotate(modelView, leftUpperLeg_ROTATE[0], leftUpperLeg_ROTATE[1], leftUpperLeg_ROTATE[2], leftUpperLeg_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[15]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[15]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 288);       
//############################################################################################################################################################=     
glBindBuffer(GL_ARRAY_BUFFER, leftLowerLeg_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, leftLowerLeg_POSITION[0], leftLowerLeg_POSITION[1], leftLowerLeg_POSITION[2]);  
Rotate(modelView, leftLowerLeg_ROTATE[0], leftLowerLeg_ROTATE[1], leftLowerLeg_ROTATE[2], leftLowerLeg_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[16]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[16]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 258);         
//############################################################################################################################################################= 
glBindBuffer(GL_ARRAY_BUFFER, leftFoot_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, leftFoot_POSITION[0], leftFoot_POSITION[1], leftFoot_POSITION[2]);  
Rotate(modelView, leftFoot_ROTATE[0], leftFoot_ROTATE[1], leftFoot_ROTATE[2], leftFoot_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[17]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[17]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 300);         
//############################################################################################################################################################=     
glBindBuffer(GL_ARRAY_BUFFER, rightUpperLeg_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
AssignMatrix(modelView, hipsMatrix);    
Translate(modelView, rightUpperLeg_POSITION[0], rightUpperLeg_POSITION[1], rightUpperLeg_POSITION[2]);  
Rotate(modelView, rightUpperLeg_ROTATE[0], rightUpperLeg_ROTATE[1], rightUpperLeg_ROTATE[2], rightUpperLeg_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[18]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[18]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 288);       
//############################################################################################################################################################=     
glBindBuffer(GL_ARRAY_BUFFER, rightLowerLeg_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, rightLowerLeg_POSITION[0], rightLowerLeg_POSITION[1], rightLowerLeg_POSITION[2]);  
Rotate(modelView, rightLowerLeg_ROTATE[0], rightLowerLeg_ROTATE[1], rightLowerLeg_ROTATE[2], rightLowerLeg_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[19]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[19]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 258);         
//############################################################################################################################################################= 
glBindBuffer(GL_ARRAY_BUFFER, rightFoot_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
Translate(modelView, rightFoot_POSITION[0], rightFoot_POSITION[1], rightFoot_POSITION[2]);  
Rotate(modelView, rightFoot_ROTATE[0], rightFoot_ROTATE[1], rightFoot_ROTATE[2], rightFoot_ROTATE[3]);
MultiplyMatrix(mvpMatrix, projection, modelView); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
Translate(lightMatrix, 1.0, -10.0, 2.0);         
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, marc_LIGHT_POSITION_01[0], marc_LIGHT_POSITION_01[1], marc_LIGHT_POSITION_01[2], marc_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, normalMap[17]);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, textureMap[17]);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 300);         
//############################################################################################################################################################=      


