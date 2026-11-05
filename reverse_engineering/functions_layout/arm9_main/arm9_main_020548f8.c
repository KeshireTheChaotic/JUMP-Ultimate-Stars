
/* JUS-SDK OS_SetProtectionRegion1 [exact] instruction template OS_SetProtectionRegion1 */

void OS_SetProtectionRegion1(undefined4 param_1)

{
  undefined4 in_cr1;
  undefined4 in_cr6;
  
  coprocessor_moveto(0xf,0,0,param_1,in_cr6,in_cr1);
  return;
}

