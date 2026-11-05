
/* JUS-SDK OS_SetDPermissionsForProtectionRegion [exact] instruction template
   OS_SetDPermissionsForProtectionRegion */

void OS_SetDPermissionsForProtectionRegion(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_cr0;
  undefined4 in_cr5;
  
  uVar1 = coprocessor_movefromRt(0xf,0,2,in_cr5,in_cr0);
  coprocessor_moveto(0xf,0,2,uVar1 & ~param_1 | param_2,in_cr5,in_cr0);
  return;
}

