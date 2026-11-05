
/* JUS-CLASS jus_Class_02094658::jus_Class_02094658 [class-default] stores vtable 02094658 into
   *this (constructor) */

undefined4 * jus_Class_02094658::jus_Class_02094658(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar1 = FUN_0201a228(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = ALCollision_02094f78::ALCollision_02094f78(iVar1,param_2);
  }
  param_1[1] = iVar2;
  *(undefined4 **)(iVar2 + 0x18) = param_1;
  return param_1;
}

