moveSet_setSelectionLimit  = 7;
moveSet_SelectionCount     = 7;


setSelectionLimit_HEAD              = 7;
SelectionCount_HEAD                 = 7;


setSelectionLimit_TORSO             = 7;
SelectionCount_TORSO                = 7;


setSelectionLimit_HIPS              = 7;
SelectionCount_HIPS                 = 7;


setSelectionLimit_LEFT_ARM          = 7;
SelectionCount_LEFT_ARM             = 7;


setSelectionLimit_RIGHT_ARM         = 7;
SelectionCount_RIGHT_ARM            = 7;


setSelectionLimit_LEFT_LEG          = 7;
SelectionCount_LEFT_LEG             = 7;


setSelectionLimit_RIGHT_LEG         = 7;
SelectionCount_RIGHT_LEG            = 7;




if(moveSet_setSelection == 1)
{
    moveSet_MOVE_FRAMEA[0]     = 0;
    moveSet_MOVE_FRAMEA[1]     = 0;
    moveSet_MOVE_FRAMEA[2]     = 0;
    moveSet_MOVE_FRAMEB[0]     = 0;
    moveSet_MOVE_FRAMEB[1]     = 0;
    moveSet_MOVE_FRAMEB[2]     = 0;
}
if(setSelection_LEFT_ARM == 1)
{    leftUpperArm_ROTATE_FRAMEA[3]   = -152;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0;
    leftUpperArm_ROTATE_FRAMEA[2]   = -0.48;
    leftUpperArm_ROTATE_FRAMEB[3]   = -148;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = -0.02;
    leftUpperArm_ROTATE_FRAMEB[2]   = -0.999999;
    leftLowerArm_ROTATE_FRAMEA[3]   = 0;
    leftLowerArm_ROTATE_FRAMEA[0]   = 1;
    leftLowerArm_ROTATE_FRAMEA[1]   = 0;
    leftLowerArm_ROTATE_FRAMEA[2]   = 0;
    leftLowerArm_ROTATE_FRAMEB[3]   = 0;
    leftLowerArm_ROTATE_FRAMEB[0]   = 1;
    leftLowerArm_ROTATE_FRAMEB[1]   = 0;
    leftLowerArm_ROTATE_FRAMEB[2]   = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
    leftHand_ROTATE_FRAMEB[3]   = 0;
    leftHand_ROTATE_FRAMEB[0]   = 0;
    leftHand_ROTATE_FRAMEB[1]   = 1;
    leftHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_RIGHT_ARM == 1)
{    rightUpperArm_ROTATE_FRAMEA[3]   = -152;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0;
    rightUpperArm_ROTATE_FRAMEA[2]   = 0.56;
    rightUpperArm_ROTATE_FRAMEB[3]   = -146;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0.03;
    rightUpperArm_ROTATE_FRAMEB[2]   = 1.27;
    rightLowerArm_ROTATE_FRAMEA[3]   = 0;
    rightLowerArm_ROTATE_FRAMEA[0]   = 1;
    rightLowerArm_ROTATE_FRAMEA[1]   = 0;
    rightLowerArm_ROTATE_FRAMEA[2]   = 0;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEA[3]   = 0;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_LEFT_LEG == 1)
{    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]       = 0;
    leftFoot_ROTATE_FRAMEA[0]       = 1;
    leftFoot_ROTATE_FRAMEA[1]       = 0;
    leftFoot_ROTATE_FRAMEA[2]       = 0;
    leftFoot_ROTATE_FRAMEB[3]       = 0;
    leftFoot_ROTATE_FRAMEB[0]       = 1;
    leftFoot_ROTATE_FRAMEB[1]       = 0;
    leftFoot_ROTATE_FRAMEB[2]       = 0;
}
if(setSelection_RIGHT_LEG == 1)
{    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HEAD == 1)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_TORSO == 1)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HIPS == 1)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
if(moveSet_setSelection == 2)
{
    moveSet_MOVE_FRAMEA[0]         = 0;
    moveSet_MOVE_FRAMEA[1]         = 0;
    moveSet_MOVE_FRAMEA[2]         = 0;

   if(moveSet_SelectionCount == 2)
{
   moveSet_MOVE_FRAMEB[0]          = 0;
   moveSet_MOVE_FRAMEB[1]          = 0;
   moveSet_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    moveSet_MOVE_FRAMEB[0]         = 0;
    moveSet_MOVE_FRAMEB[1]         = 0;
    moveSet_MOVE_FRAMEB[2]         = 0;
}
}
if(setSelection_LEFT_ARM == 2)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = -148;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = -0.02;
    leftUpperArm_ROTATE_FRAMEA[2]     = -0.999999;
    leftLowerArm_ROTATE_FRAMEA[3]      = 0;
    leftLowerArm_ROTATE_FRAMEA[0]      = 1;
    leftLowerArm_ROTATE_FRAMEA[1]      = 0;
    leftLowerArm_ROTATE_FRAMEA[2]      = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 2)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = -152;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = -0.48;
    leftLowerArm_ROTATE_FRAMEB[3]      = 0;
    leftLowerArm_ROTATE_FRAMEB[0]      = 1;
    leftLowerArm_ROTATE_FRAMEB[1]      = 0;
    leftLowerArm_ROTATE_FRAMEB[2]      = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = -118.114;
    leftUpperArm_ROTATE_FRAMEB[0]      = 0.556001;
    leftUpperArm_ROTATE_FRAMEB[1]      = -0.754832;
    leftUpperArm_ROTATE_FRAMEB[2]      = -0.834031;
    leftLowerArm_ROTATE_FRAMEB[3]       = 0;
    leftLowerArm_ROTATE_FRAMEB[0]       = 1;
    leftLowerArm_ROTATE_FRAMEB[1]       = 0;
    leftLowerArm_ROTATE_FRAMEB[2]       = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 2)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = -146;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEA[1]   = 0.03;
    rightUpperArm_ROTATE_FRAMEA[2]   = 1.27;
    rightLowerArm_ROTATE_FRAMEA[3]    = 0;
    rightLowerArm_ROTATE_FRAMEA[0]    = 1;
    rightLowerArm_ROTATE_FRAMEA[1]    = 0;
    rightLowerArm_ROTATE_FRAMEA[2]    = 0;
    rightHand_ROTATE_FRAMEA[3]   = 0;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 2)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -122.67;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.03128;
    rightUpperArm_ROTATE_FRAMEB[1]   = 1.47925;
    rightUpperArm_ROTATE_FRAMEB[2]   = 1.40834;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 1;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 2)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 2)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 2)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 2)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 2)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 2)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 2)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 2)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 2)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 2)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(moveSet_setSelection == 3)
{
    moveSet_MOVE_FRAMEA[0]      = 0;
    moveSet_MOVE_FRAMEA[1]      = 0;
    moveSet_MOVE_FRAMEA[2]      = 0;

     if(moveSet_SelectionCount == 3)
    {
    moveSet_MOVE_FRAMEB[0]      = 0;
    moveSet_MOVE_FRAMEB[1]      = 0;
    moveSet_MOVE_FRAMEB[2]      = 0;
}
     else
    {
    moveSet_MOVE_FRAMEB[0]      = 0;
    moveSet_MOVE_FRAMEB[1]      = 0;
    moveSet_MOVE_FRAMEB[2]      = 0;
}
}
if(setSelection_LEFT_ARM == 3)
{
    leftUpperArm_ROTATE_FRAMEA[3]   = -118.114;
    leftUpperArm_ROTATE_FRAMEA[0]   = 0.556001;
    leftUpperArm_ROTATE_FRAMEA[1]   = -0.754832;
    leftUpperArm_ROTATE_FRAMEA[2]   = -0.834031;
    leftLowerArm_ROTATE_FRAMEA[3]    = 0;
    leftLowerArm_ROTATE_FRAMEA[0]    = 1;
    leftLowerArm_ROTATE_FRAMEA[1]    = 0;
    leftLowerArm_ROTATE_FRAMEA[2]    = 0;
    leftHand_ROTATE_FRAMEA[3] = 0;
    leftHand_ROTATE_FRAMEA[0] = 0;
    leftHand_ROTATE_FRAMEA[1] = 1;
    leftHand_ROTATE_FRAMEA[2] = 0;

     if(SelectionCount_LEFT_ARM == 3)
    {
    leftUpperArm_ROTATE_FRAMEB[3]   = -152;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = -0.48;
    leftLowerArm_ROTATE_FRAMEB[3]   = 0;
    leftLowerArm_ROTATE_FRAMEB[0]   = 1;
    leftLowerArm_ROTATE_FRAMEB[1]   = 0;
    leftLowerArm_ROTATE_FRAMEB[2]   = 0;
    leftHand_ROTATE_FRAMEB[3]   = 0;
    leftHand_ROTATE_FRAMEB[0]   = 0;
    leftHand_ROTATE_FRAMEB[1]   = 1;
    leftHand_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    leftUpperArm_ROTATE_FRAMEB[3]   = 93;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0.24;
    leftUpperArm_ROTATE_FRAMEB[2]   = 2.47;
    leftLowerArm_ROTATE_FRAMEB[3]   = 0;
    leftLowerArm_ROTATE_FRAMEB[0]   = 1;
    leftLowerArm_ROTATE_FRAMEB[1]   = 0;
    leftLowerArm_ROTATE_FRAMEB[2]   = 0;
    leftHand_ROTATE_FRAMEB[3]   = 0;
    leftHand_ROTATE_FRAMEB[0]   = 0;
    leftHand_ROTATE_FRAMEB[1]   = 1;
    leftHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_ARM == 3)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = -122.67;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.03128;
    rightUpperArm_ROTATE_FRAMEA[1]   = 1.47925;
    rightUpperArm_ROTATE_FRAMEA[2]   = 1.40834;
    rightLowerArm_ROTATE_FRAMEA[3]    = 0;
    rightLowerArm_ROTATE_FRAMEA[0]    = 1;
    rightLowerArm_ROTATE_FRAMEA[1]    = 0;
    rightLowerArm_ROTATE_FRAMEA[2]    = 0;
    rightHand_ROTATE_FRAMEA[3] = 1;
    rightHand_ROTATE_FRAMEA[0] = 0;
    rightHand_ROTATE_FRAMEA[1] = 1;
    rightHand_ROTATE_FRAMEA[2] = 0;

     if(SelectionCount_RIGHT_ARM == 3)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 91;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEB[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEB[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 2;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 3)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 3)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 3)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 3)
    {
     rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 3)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_HEAD == 3)
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 3)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_TORSO == 3)
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 3)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_HIPS == 3)
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(moveSet_setSelection == 4)
{
    moveSet_MOVE_FRAMEA[0]         = 0;
    moveSet_MOVE_FRAMEA[1]         = 0;
    moveSet_MOVE_FRAMEA[2]         = 0;

   if(moveSet_SelectionCount == 4)
{
   moveSet_MOVE_FRAMEB[0]          = 0;
   moveSet_MOVE_FRAMEB[1]          = 0;
   moveSet_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    moveSet_MOVE_FRAMEB[0]         = 0;
    moveSet_MOVE_FRAMEB[1]         = 0;
    moveSet_MOVE_FRAMEB[2]         = 0;
}
}
if(setSelection_LEFT_ARM == 4)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 93;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0.24;
    leftUpperArm_ROTATE_FRAMEA[2]     = 2.47;
    leftLowerArm_ROTATE_FRAMEA[3]      = 0;
    leftLowerArm_ROTATE_FRAMEA[0]      = 1;
    leftLowerArm_ROTATE_FRAMEA[1]      = 0;
    leftLowerArm_ROTATE_FRAMEA[2]      = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 4)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = -152;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = -0.48;
    leftLowerArm_ROTATE_FRAMEB[3]      = 0;
    leftLowerArm_ROTATE_FRAMEB[0]      = 1;
    leftLowerArm_ROTATE_FRAMEB[1]      = 0;
    leftLowerArm_ROTATE_FRAMEB[2]      = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = 93;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0.24;
    leftUpperArm_ROTATE_FRAMEB[2]      = 2.47;
    leftLowerArm_ROTATE_FRAMEB[3]       = 0;
    leftLowerArm_ROTATE_FRAMEB[0]       = 1;
    leftLowerArm_ROTATE_FRAMEB[1]       = 0;
    leftLowerArm_ROTATE_FRAMEB[2]       = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 4)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = 91;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEA[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEA[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEA[3]    = 0;
    rightLowerArm_ROTATE_FRAMEA[0]    = 1;
    rightLowerArm_ROTATE_FRAMEA[1]    = 0;
    rightLowerArm_ROTATE_FRAMEA[2]    = 0;
    rightHand_ROTATE_FRAMEA[3]   = 2;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 4)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 91;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEB[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEB[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 2;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 4)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 4)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 4)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 4)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 4)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 4)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 4)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 4)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 4)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 4)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(moveSet_setSelection == 5)
{
    moveSet_MOVE_FRAMEA[0]         = 0;
    moveSet_MOVE_FRAMEA[1]         = 0;
    moveSet_MOVE_FRAMEA[2]         = 0;

   if(moveSet_SelectionCount == 5)
{
   moveSet_MOVE_FRAMEB[0]          = 0;
   moveSet_MOVE_FRAMEB[1]          = 0;
   moveSet_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    moveSet_MOVE_FRAMEB[0]         = 0;
    moveSet_MOVE_FRAMEB[1]         = 0;
    moveSet_MOVE_FRAMEB[2]         = 0;
}
}
if(setSelection_LEFT_ARM == 5)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 93;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0.24;
    leftUpperArm_ROTATE_FRAMEA[2]     = 2.47;
    leftLowerArm_ROTATE_FRAMEA[3]      = 0;
    leftLowerArm_ROTATE_FRAMEA[0]      = 1;
    leftLowerArm_ROTATE_FRAMEA[1]      = 0;
    leftLowerArm_ROTATE_FRAMEA[2]      = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 5)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = -152;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = -0.48;
    leftLowerArm_ROTATE_FRAMEB[3]      = 0;
    leftLowerArm_ROTATE_FRAMEB[0]      = 1;
    leftLowerArm_ROTATE_FRAMEB[1]      = 0;
    leftLowerArm_ROTATE_FRAMEB[2]      = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = 93;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0.24;
    leftUpperArm_ROTATE_FRAMEB[2]      = 2.47;
    leftLowerArm_ROTATE_FRAMEB[3]       = 0;
    leftLowerArm_ROTATE_FRAMEB[0]       = 1;
    leftLowerArm_ROTATE_FRAMEB[1]       = 0;
    leftLowerArm_ROTATE_FRAMEB[2]       = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 5)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = 91;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEA[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEA[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEA[3]    = 0;
    rightLowerArm_ROTATE_FRAMEA[0]    = 1;
    rightLowerArm_ROTATE_FRAMEA[1]    = 0;
    rightLowerArm_ROTATE_FRAMEA[2]    = 0;
    rightHand_ROTATE_FRAMEA[3]   = 2;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 5)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 91;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEB[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEB[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 2;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 5)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 5)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 5)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 5)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 5)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 5)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 5)
{
    torso_ROTATE_FRAMEA[3]   = 0;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 5)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 45;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 5)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 5)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(moveSet_setSelection == 6)
{
    moveSet_MOVE_FRAMEA[0]         = 0;
    moveSet_MOVE_FRAMEA[1]         = 0;
    moveSet_MOVE_FRAMEA[2]         = 0;

   if(moveSet_SelectionCount == 6)
{
   moveSet_MOVE_FRAMEB[0]          = 0;
   moveSet_MOVE_FRAMEB[1]          = 0;
   moveSet_MOVE_FRAMEB[2]          = 0;
}
     else 
    {
    moveSet_MOVE_FRAMEB[0]         = 0;
    moveSet_MOVE_FRAMEB[1]         = 0;
    moveSet_MOVE_FRAMEB[2]         = 0;
}
}
if(setSelection_LEFT_ARM == 6)
{
    leftUpperArm_ROTATE_FRAMEA[3]     = 93;
    leftUpperArm_ROTATE_FRAMEA[0]     = 1;
    leftUpperArm_ROTATE_FRAMEA[1]     = 0.24;
    leftUpperArm_ROTATE_FRAMEA[2]     = 2.47;
    leftLowerArm_ROTATE_FRAMEA[3]      = 0;
    leftLowerArm_ROTATE_FRAMEA[0]      = 1;
    leftLowerArm_ROTATE_FRAMEA[1]      = 0;
    leftLowerArm_ROTATE_FRAMEA[2]      = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_ARM == 6)
    {
    leftUpperArm_ROTATE_FRAMEB[3]     = -152;
    leftUpperArm_ROTATE_FRAMEB[0]     = 1;
    leftUpperArm_ROTATE_FRAMEB[1]     = 0;
    leftUpperArm_ROTATE_FRAMEB[2]     = -0.48;
    leftLowerArm_ROTATE_FRAMEB[3]      = 0;
    leftLowerArm_ROTATE_FRAMEB[0]      = 1;
    leftLowerArm_ROTATE_FRAMEB[1]      = 0;
    leftLowerArm_ROTATE_FRAMEB[2]      = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
     else 
    {
    leftUpperArm_ROTATE_FRAMEB[3]      = 93;
    leftUpperArm_ROTATE_FRAMEB[0]      = 1;
    leftUpperArm_ROTATE_FRAMEB[1]      = 0.24;
    leftUpperArm_ROTATE_FRAMEB[2]      = 2.47;
    leftLowerArm_ROTATE_FRAMEB[3]       = -35;
    leftLowerArm_ROTATE_FRAMEB[0]       = 1;
    leftLowerArm_ROTATE_FRAMEB[1]       = 0;
    leftLowerArm_ROTATE_FRAMEB[2]       = 0;
    leftHand_ROTATE_FRAMEB[3]    = 0;
    leftHand_ROTATE_FRAMEB[0]    = 0;
    leftHand_ROTATE_FRAMEB[1]    = 1;
    leftHand_ROTATE_FRAMEB[2]    = 0;
}
}
if(setSelection_RIGHT_ARM == 6)
{
    rightUpperArm_ROTATE_FRAMEA[3]   = 91;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEA[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEA[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEA[3]    = 0;
    rightLowerArm_ROTATE_FRAMEA[0]    = 1;
    rightLowerArm_ROTATE_FRAMEA[1]    = 0;
    rightLowerArm_ROTATE_FRAMEA[2]    = 0;
    rightHand_ROTATE_FRAMEA[3]   = 2;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_ARM == 6)
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperArm_ROTATE_FRAMEB[3]   = 91;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEB[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEB[2]   = -2.44;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 2;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_LEFT_LEG == 6)
{
    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]   = 0;
    leftFoot_ROTATE_FRAMEA[0]   = 1;
    leftFoot_ROTATE_FRAMEA[1]   = 0;
    leftFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_LEFT_LEG == 6)
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEB[3]   = 0;
    leftFoot_ROTATE_FRAMEB[0]   = 1;
    leftFoot_ROTATE_FRAMEB[1]   = 0;
    leftFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_RIGHT_LEG == 6)
{
    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
     if(SelectionCount_RIGHT_LEG == 6)
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HEAD == 6)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HEAD == 6)
{
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_TORSO == 6)
{
    torso_ROTATE_FRAMEA[3]   = 45;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_TORSO == 6)
{
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    torso_ROTATE_FRAMEB[3]   = 9;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
}
if(setSelection_HIPS == 6)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
   if(SelectionCount_HIPS == 6)
{
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
     else 
    {
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
}
if(moveSet_setSelection == 7)
{
    moveSet_MOVE_FRAMEA[0]     = 0;
    moveSet_MOVE_FRAMEA[1]     = 0;
    moveSet_MOVE_FRAMEA[2]     = 0;
    moveSet_MOVE_FRAMEB[0]     = 0;
    moveSet_MOVE_FRAMEB[1]     = 0;
    moveSet_MOVE_FRAMEB[2]     = 0;
}
if(setSelection_LEFT_ARM == 7)
{    leftUpperArm_ROTATE_FRAMEA[3]   = 93;
    leftUpperArm_ROTATE_FRAMEA[0]   = 1;
    leftUpperArm_ROTATE_FRAMEA[1]   = 0.24;
    leftUpperArm_ROTATE_FRAMEA[2]   = 2.47;
    leftUpperArm_ROTATE_FRAMEB[3]   = -152;
    leftUpperArm_ROTATE_FRAMEB[0]   = 1;
    leftUpperArm_ROTATE_FRAMEB[1]   = 0;
    leftUpperArm_ROTATE_FRAMEB[2]   = -0.48;
    leftLowerArm_ROTATE_FRAMEA[3]   = -35;
    leftLowerArm_ROTATE_FRAMEA[0]   = 1;
    leftLowerArm_ROTATE_FRAMEA[1]   = 0;
    leftLowerArm_ROTATE_FRAMEA[2]   = 0;
    leftLowerArm_ROTATE_FRAMEB[3]   = 0;
    leftLowerArm_ROTATE_FRAMEB[0]   = 1;
    leftLowerArm_ROTATE_FRAMEB[1]   = 0;
    leftLowerArm_ROTATE_FRAMEB[2]   = 0;
    leftHand_ROTATE_FRAMEA[3]   = 0;
    leftHand_ROTATE_FRAMEA[0]   = 0;
    leftHand_ROTATE_FRAMEA[1]   = 1;
    leftHand_ROTATE_FRAMEA[2]   = 0;
    leftHand_ROTATE_FRAMEB[3]   = 0;
    leftHand_ROTATE_FRAMEB[0]   = 0;
    leftHand_ROTATE_FRAMEB[1]   = 1;
    leftHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_RIGHT_ARM == 7)
{    rightUpperArm_ROTATE_FRAMEA[3]   = 91;
    rightUpperArm_ROTATE_FRAMEA[0]   = 1.05;
    rightUpperArm_ROTATE_FRAMEA[1]   = -0.2;
    rightUpperArm_ROTATE_FRAMEA[2]   = -2.44;
    rightUpperArm_ROTATE_FRAMEB[3]   = -152;
    rightUpperArm_ROTATE_FRAMEB[0]   = 1;
    rightUpperArm_ROTATE_FRAMEB[1]   = 0;
    rightUpperArm_ROTATE_FRAMEB[2]   = 0.56;
    rightLowerArm_ROTATE_FRAMEA[3]   = 0;
    rightLowerArm_ROTATE_FRAMEA[0]   = 1;
    rightLowerArm_ROTATE_FRAMEA[1]   = 0;
    rightLowerArm_ROTATE_FRAMEA[2]   = 0;
    rightLowerArm_ROTATE_FRAMEB[3]   = 0;
    rightLowerArm_ROTATE_FRAMEB[0]   = 1;
    rightLowerArm_ROTATE_FRAMEB[1]   = 0;
    rightLowerArm_ROTATE_FRAMEB[2]   = 0;
    rightHand_ROTATE_FRAMEA[3]   = 2;
    rightHand_ROTATE_FRAMEA[0]   = 0;
    rightHand_ROTATE_FRAMEA[1]   = 1;
    rightHand_ROTATE_FRAMEA[2]   = 0;
    rightHand_ROTATE_FRAMEB[3]   = 0;
    rightHand_ROTATE_FRAMEB[0]   = 0;
    rightHand_ROTATE_FRAMEB[1]   = 1;
    rightHand_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_LEFT_LEG == 7)
{    leftUpperLeg_ROTATE_FRAMEA[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEA[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEA[2]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[3]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[0]   = 1;
    leftUpperLeg_ROTATE_FRAMEB[1]   = 0;
    leftUpperLeg_ROTATE_FRAMEB[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEA[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEA[2]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[3]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[0]   = 1;
    leftLowerLeg_ROTATE_FRAMEB[1]   = 0;
    leftLowerLeg_ROTATE_FRAMEB[2]   = 0;
    leftFoot_ROTATE_FRAMEA[3]       = 0;
    leftFoot_ROTATE_FRAMEA[0]       = 1;
    leftFoot_ROTATE_FRAMEA[1]       = 0;
    leftFoot_ROTATE_FRAMEA[2]       = 0;
    leftFoot_ROTATE_FRAMEB[3]       = 0;
    leftFoot_ROTATE_FRAMEB[0]       = 1;
    leftFoot_ROTATE_FRAMEB[1]       = 0;
    leftFoot_ROTATE_FRAMEB[2]       = 0;
}
if(setSelection_RIGHT_LEG == 7)
{    rightUpperLeg_ROTATE_FRAMEA[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEA[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEA[2]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[3]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[0]   = 1;
    rightUpperLeg_ROTATE_FRAMEB[1]   = 0;
    rightUpperLeg_ROTATE_FRAMEB[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEA[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEA[2]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[3]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[0]   = 1;
    rightLowerLeg_ROTATE_FRAMEB[1]   = 0;
    rightLowerLeg_ROTATE_FRAMEB[2]   = 0;
    rightFoot_ROTATE_FRAMEA[3]   = 0;
    rightFoot_ROTATE_FRAMEA[0]   = 1;
    rightFoot_ROTATE_FRAMEA[1]   = 0;
    rightFoot_ROTATE_FRAMEA[2]   = 0;
    rightFoot_ROTATE_FRAMEB[3]   = 0;
    rightFoot_ROTATE_FRAMEB[0]   = 1;
    rightFoot_ROTATE_FRAMEB[1]   = 0;
    rightFoot_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HEAD == 7)
{
    head_ROTATE_FRAMEA[3]   = 0;
    head_ROTATE_FRAMEA[0]   = 0;
    head_ROTATE_FRAMEA[1]   = 1;
    head_ROTATE_FRAMEA[2]   = 0;
    head_ROTATE_FRAMEB[3]   = 0;
    head_ROTATE_FRAMEB[0]   = 0;
    head_ROTATE_FRAMEB[1]   = 1;
    head_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_TORSO == 7)
{
    torso_ROTATE_FRAMEA[3]   = 9;
    torso_ROTATE_FRAMEA[0]   = 1;
    torso_ROTATE_FRAMEA[1]   = 0;
    torso_ROTATE_FRAMEA[2]   = 0;
    torso_ROTATE_FRAMEB[3]   = 0;
    torso_ROTATE_FRAMEB[0]   = 1;
    torso_ROTATE_FRAMEB[1]   = 0;
    torso_ROTATE_FRAMEB[2]   = 0;
}
if(setSelection_HIPS == 7)
{
    hips_ROTATE_FRAMEA[3]   = 0;
    hips_ROTATE_FRAMEA[0]   = 0;
    hips_ROTATE_FRAMEA[1]   = 0.992;
    hips_ROTATE_FRAMEA[2]   = 0;
    hips_ROTATE_FRAMEB[3]   = 0;
    hips_ROTATE_FRAMEB[0]   = 0;
    hips_ROTATE_FRAMEB[1]   = 0.992;
    hips_ROTATE_FRAMEB[2]   = 0;
}
