
/* JUS-SDK OS_SetProtectionRegion2 [exact] instruction template OS_SetProtectionRegion2 */

void OS_SetProtectionRegion2(undefined4 param_1)

{
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  coprocessor_moveto(0xf,0,0,param_1,in_cr6,in_cr2);
  return;
}

