//loadTexture("_MODEL_FOLDERS_/backWall_2x2/thirdTex.png",                                  backWall_2x2_THIRD_TEX);                          
loadTexture("_MODEL_FOLDERS_/backWall_2x2/backWall_2x2_DOT3.bmp",                           backWall_2x2_NORMAL_TEX);                         
loadTexture("_MODEL_FOLDERS_/backWall_2x2/backWall_2x2.png",                                backWall_2x2_TEXTURE1);                           
//------------------------------------------------------------------------------------------|___LOAD_VBO                                        
#include    "backWall_2x2.cpp"                                                                                                                
glGenBuffersARB(1,              &backWall_2x2_VBO);                                                                                             
glBindBufferARB(GL_ARRAY_BUFFER, backWall_2x2_VBO);                                                                                             
glBufferDataARB(GL_ARRAY_BUFFER, sizeof(backWall_2x2), backWall_2x2, GL_STATIC_DRAW);                                                           
glBindBufferARB(GL_ARRAY_BUFFER, 0);                                                                                                            
