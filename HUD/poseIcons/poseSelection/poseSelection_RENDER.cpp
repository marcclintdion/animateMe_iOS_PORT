

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glUseProgram(marc_SHADER);  
glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_01[0], POSITION_ICON_01[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsForwardShouldersBack_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_02[0], POSITION_ICON_02[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsUpShouldersFarBack_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_03[0], POSITION_ICON_03[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsOutShouldersBack_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_04[0], POSITION_ICON_04[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsBackTiltedIn_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_05[0], POSITION_ICON_05[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsOutShouldersForward_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_06[0], POSITION_ICON_06[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsOutShouldersBack_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================

glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_07[0], POSITION_ICON_07[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsBackTiltedIn_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================
glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_08[0], POSITION_ICON_08[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsOutShouldersForward_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================
glBindBuffer(GL_ARRAY_BUFFER, smallButton_VBO);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL 
LoadIdentity(modelView);
Translate(modelView, POSITION_ICON_09[0], POSITION_ICON_09[1], POSITION_ICON_GLOBAL[2]);  
Rotate(modelView, PlayButton_ROTATE[0], PlayButton_ROTATE[1], PlayButton_ROTATE[2], PlayButton_ROTATE[3]);//--MODEL
Scale(modelView, POSITION_ICON_SCALE, POSITION_ICON_SCALE, POSITION_ICON_SCALE);
MultiplyMatrix(mvpMatrix, projection, modelView); 
Scale(modelView, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE, 1/POSITION_ICON_SCALE);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT 
LoadIdentity(lightMatrix);
InvertMatrix(lightMatrix, modelView);
//---------------------------------------------------------------------------------------------------------------------------------------------------|__ATTRIBUTES 
glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));
glEnableVertexAttribArray(0);	
glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));
glEnableVertexAttribArray(1); 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS       
glUniform4f(UNIFORM_marc_LIGHT_POSITION_01, PlayButton_LIGHT_POSITION_01[0], PlayButton_LIGHT_POSITION_01[1], PlayButton_LIGHT_POSITION_01[2], PlayButton_LIGHT_POSITION_01[3]);    
glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ,   1,0,  mvpMatrix);
glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX,    1,0,  lightMatrix);        
//---------------------------------------------------------------------------------------------------------------------------------------------------|__TEXTURES 
glActiveTexture ( GL_TEXTURE1 );
glBindTexture(GL_TEXTURE_2D, Z_BLUE_POSITIVE_NORMAL_TEX);     
glUniform1i (UNIFORM_TEXTURE_DOT3, 1);    
//---
glActiveTexture (GL_TEXTURE0); 
glBindTexture(GL_TEXTURE_2D, armsOutShouldersForward_TEXTURE1);    
glUniform1i (UNIFORM_TEXTURE, 0 );    
//---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW  
glDrawArrays(GL_TRIANGLES, 0, 6);       

//=================================================================================================================================================================================
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//=================================================================================================================================================================================







