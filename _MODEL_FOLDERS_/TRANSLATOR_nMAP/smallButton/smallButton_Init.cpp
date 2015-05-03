//loadTexture("_MODEL_FOLDERS_/smallButton/thirdTex.png",                                  smallButton_THIRD_TEX);                          
loadTexture("_MODEL_FOLDERS_/smallButton/smallButton_DOT3.bmp",                           smallButton_NORMAL_TEX);                         
loadTexture("_MODEL_FOLDERS_/smallButton/smallButton.png",                                smallButton_TEXTURE1);                           
//------------------------------------------------------------------------------------------|___LOAD_VBO                                        
#include    "smallButton.cpp"                                                                                                                
glGenBuffersARB(1,              &smallButton_VBO);                                                                                             
glBindBufferARB(GL_ARRAY_BUFFER, smallButton_VBO);                                                                                             
glBufferDataARB(GL_ARRAY_BUFFER, sizeof(smallButton), smallButton, GL_STATIC_DRAW);                                                           
glBindBufferARB(GL_ARRAY_BUFFER, 0);                                                                                                            
