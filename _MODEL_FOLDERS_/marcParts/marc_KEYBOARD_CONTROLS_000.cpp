
    
    //--------------------------------------------------------------------------------------------------   

    
    if (!keys[VK_SPACE] && !marcJumping)
	{    
          spaceBarIsPressed = false;
    }
    if (keys[VK_SPACE] && !spaceBarIsPressed)
	{
           spaceBarIsPressed = true;
           marcJumping = true;
           resetAnimation = true;                    
    }     
    
    if (keys[VK_RIGHT] &! keys[VK_UP] &! keys[VK_DOWN])
	{
                         if(marcRotation >= 360.0)
                         {
                                 marcRotation -= 360.0;
                         }
                         if(marcRotation < 0.0)
                         {
                                 marcRotation += 360.0;
                         }            

           if(marcRotation > 90.0 && marcRotation <= 270.0)
           {
                 marcRotation -= 4.0* frameRateAdjustment;
           }
           if(marcRotation < 90.0 && marcRotation >= 0.0 || marcRotation > 270.0 && marcRotation < 360.0)
           {
                 marcRotation += 4.0* frameRateAdjustment;
           }
                      
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                  CollisionCheck_RIGHT(boundingBox_MAIN_CHARACTER_left_edge,   boundingBox_MAIN_CHARACTER_right_edge,
                                       boundingBox_MAIN_CHARACTER_lower_edge,  boundingBox_MAIN_CHARACTER_upper_edge,
                                       boundingBox_MAIN_CHARACTER_near_edge,   boundingBox_MAIN_CHARACTER_far_edge);                
                  if(RIGHT == true)               
			      {
                           marcWalking = true;  
                           eyePosition[0]                   -= .01965 * frameRateAdjustment;
                           
                           marcModelPosition[0]             += .01965 * frameRateAdjustment;
                           
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    
    }
//--------------------------------------------------------------    
    if (keys[VK_LEFT] &! keys[VK_UP] &! keys[VK_DOWN])
	{
                         if(marcRotation >= 360.0)
                         {
                                 marcRotation -= 360.0;
                         }
                         if(marcRotation <= 0.0)
                         {
                                 marcRotation += 360.0;
                         }          
           
           if(marcRotation == 0.0)
           {
                 marcRotation += 360.0;
           }
           if(marcRotation >= 270.0 && marcRotation <= 360.0 || marcRotation >= 0.0 && marcRotation <= 90.0)
           {
                 marcRotation -= 4.0* frameRateAdjustment;
           }
           if(marcRotation < 270.0  && marcRotation  >= 90.0)
           {
                 marcRotation += 4.0* frameRateAdjustment;
           }           
          
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%           
                  CollisionCheck_LEFT(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,    
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge); 
                  if(LEFT == true)              
                  {             
                                marcWalking = true;                    
                                eyePosition[0]                += .01965 * frameRateAdjustment;
                                
                                marcModelPosition[0]          -= .01965 * frameRateAdjustment;                                
                                
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }
//--------------------------------------------------------------    
    if (keys[VK_UP] &! keys[VK_LEFT] &! keys[VK_RIGHT])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         }            
           
           if(marcRotation >= 180 && marcRotation < 360)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }
           if(marcRotation < 180 && marcRotation >= 0.0)
           {
                 marcRotation += 4* frameRateAdjustment;
           }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%           
                  CollisionCheck_UP(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,    
                                    boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                    boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge);  
                  if(UP == true)            
			      { 
                          marcWalking = true;                     
                          eyePosition[1]                     -= .000      * frameRateAdjustment;
                          eyePosition[2]                     += .01965    * frameRateAdjustment;
                          
                          marcModelPosition[1]               += .000      * frameRateAdjustment;                          
                          marcModelPosition[2]               -= .01965    * frameRateAdjustment;                          
                          
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }	
//--------------------------------------------------------------    
    if (keys[VK_DOWN] &! keys[VK_LEFT] &! keys[VK_RIGHT])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         } 
           
           if(marcRotation <= 3)
           {
                 marcRotation = 0;
           }
           if(marcRotation >= 357)
           {
                 marcRotation = 0;
           }            
           
           if(marcRotation < 360 && marcRotation > 180.0)
           {
                 marcRotation += 4* frameRateAdjustment;
           }           
           if(marcRotation > 0.0 && marcRotation <= 180.0)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }

//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%            
                  CollisionCheck_DOWN(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,   
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge); 
                  if(DOWN == true)              
			      {              
                                 marcWalking = true;                    
                                 eyePosition[1]              += .000      * frameRateAdjustment;                                 
                                 eyePosition[2]              -= .01965    * frameRateAdjustment;
                                 
                                 marcModelPosition[1]        -= .000      * frameRateAdjustment;                          
                                 marcModelPosition[2]        += .01965    * frameRateAdjustment;                                 
                                 
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }      
//--------------------------------------------------------------  
    if (keys[VK_DOWN] && keys[VK_RIGHT])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         } 
           
           if(marcRotation > 45 && marcRotation <= 225)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }
           if(marcRotation < 45 && marcRotation >= 0.0 || marcRotation >= 225 && marcRotation <= 360)
           {
                 marcRotation += 4* frameRateAdjustment;
           }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%            
                  CollisionCheck_DOWN(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,   
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge);
                  
                  CollisionCheck_RIGHT(boundingBox_MAIN_CHARACTER_left_edge,   boundingBox_MAIN_CHARACTER_right_edge,
                                       boundingBox_MAIN_CHARACTER_lower_edge,  boundingBox_MAIN_CHARACTER_upper_edge,
                                       boundingBox_MAIN_CHARACTER_near_edge,   boundingBox_MAIN_CHARACTER_far_edge);                   
                  
                  if(DOWN == true  && RIGHT == true )              
			      {              
                                 marcWalking = true;                    
                                 eyePosition[0]                -= .014   *   frameRateAdjustment;
                                 eyePosition[1]                += .000   *   frameRateAdjustment;                                
                                 eyePosition[2]                -= .014   *   frameRateAdjustment;
                                 
                                 marcModelPosition[0]          += .014   *   frameRateAdjustment;                                  
                                 marcModelPosition[1]          += .000   *   frameRateAdjustment;                          
                                 marcModelPosition[2]          += .014   *   frameRateAdjustment;                                   
                                 
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%           
    }      
//--------------------------------------------------------------    
    if (keys[VK_UP] && keys[VK_RIGHT])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         } 
           
           if(marcRotation > 135 && marcRotation <= 315)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }
           if(marcRotation < 135 && marcRotation >= 0.0 || marcRotation >= 315 && marcRotation <= 360)
           {
                 marcRotation += 4* frameRateAdjustment;
           }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%            
                  CollisionCheck_UP(boundingBox_MAIN_CHARACTER_left_edge,   boundingBox_MAIN_CHARACTER_right_edge,  
                                    boundingBox_MAIN_CHARACTER_lower_edge,  boundingBox_MAIN_CHARACTER_upper_edge,
                                    boundingBox_MAIN_CHARACTER_near_edge,   boundingBox_MAIN_CHARACTER_far_edge); 
                  
                  CollisionCheck_RIGHT(boundingBox_MAIN_CHARACTER_left_edge,   boundingBox_MAIN_CHARACTER_right_edge,
                                       boundingBox_MAIN_CHARACTER_lower_edge,  boundingBox_MAIN_CHARACTER_upper_edge,
                                       boundingBox_MAIN_CHARACTER_near_edge,   boundingBox_MAIN_CHARACTER_far_edge);                  
                  
                  if(UP == true && RIGHT == true )            
			      {            
                               marcWalking = true;                    
                               eyePosition[0]              -= .014     *   frameRateAdjustment;
                               eyePosition[1]              -= .000     *   frameRateAdjustment;                               
                               eyePosition[2]              += .014     *   frameRateAdjustment;
                               
                               marcModelPosition[0]        += .014     *   frameRateAdjustment;                                  
                               marcModelPosition[1]        += .000     *   frameRateAdjustment;                          
                               marcModelPosition[2]        -= .014     *   frameRateAdjustment;                                  
                               
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }    
//--------------------------------------------------------------    
    if (keys[VK_UP] && keys[VK_LEFT])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         } 
           
           if(marcRotation > 225 && marcRotation <= 360 || marcRotation <= 45 && marcRotation >= 0)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }
           if(marcRotation < 225 && marcRotation >= 45)
           {
                 marcRotation += 4* frameRateAdjustment;
           }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%            
                  CollisionCheck_UP(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,
                                    boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge, 
                                    boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge);
                  
                  CollisionCheck_LEFT(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,    
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge); 
                                      
                  
                  if(UP == true && LEFT == true)            
			      {            
                               marcWalking = true;                    
                               eyePosition[0]            += .014   *   frameRateAdjustment;
                               eyePosition[1]            -= .000   *   frameRateAdjustment;                              
                               eyePosition[2]            += .014   *   frameRateAdjustment;
                               
                               marcModelPosition[0]      -= .014   *   frameRateAdjustment;                                  
                               marcModelPosition[1]      += .000   *   frameRateAdjustment;                          
                               marcModelPosition[2]      -= .014   *   frameRateAdjustment;                                  
                              
                  }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }      
//--------------------------------------------------------------    
    if (keys[VK_LEFT] && keys[VK_DOWN])
	{
                         if(marcRotation >= 360)
                         {
                                 marcRotation -= 360;
                         }
                         if(marcRotation < 0)
                         {
                                 marcRotation += 360;
                         } 
           
           if(marcRotation > 315 && marcRotation <= 360 || marcRotation <= 135 && marcRotation >= 0)
           {
                 marcRotation -= 4* frameRateAdjustment;
           }
           if(marcRotation < 315 && marcRotation >= 135)
           {
                 marcRotation += 4* frameRateAdjustment;
           }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%            
                  CollisionCheck_LEFT(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge);
                  
                  CollisionCheck_DOWN(boundingBox_MAIN_CHARACTER_left_edge,  boundingBox_MAIN_CHARACTER_right_edge,   
                                      boundingBox_MAIN_CHARACTER_lower_edge, boundingBox_MAIN_CHARACTER_upper_edge,
                                      boundingBox_MAIN_CHARACTER_near_edge,  boundingBox_MAIN_CHARACTER_far_edge);                  
                  if(LEFT == true && DOWN == true)              
                  {             
                                 marcWalking  = true;                    
                                 eyePosition[0]            += .014   *   frameRateAdjustment;
                                 eyePosition[1]            += .000   *   frameRateAdjustment;                                
                                 eyePosition[2]            -= .014   *   frameRateAdjustment;
                                 
                                 marcModelPosition[0]      -= .014   *   frameRateAdjustment;                                  
                                 marcModelPosition[1]      += .000   *   frameRateAdjustment;                          
                                 marcModelPosition[2]      += .014   *   frameRateAdjustment;                                   
                                
                   }
//____%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    
    }     
    //--------------------------------------------------------------------------------------------------
    if (!keys[VK_RIGHT] && !keys[VK_LEFT] && !keys[VK_UP] && !keys[VK_DOWN])
	{
           marcWalking = false;  
    }        
    //===================================================================================================
    //===================================================================================================    
    //===================================================================================================
    //=================================================================================================== 
