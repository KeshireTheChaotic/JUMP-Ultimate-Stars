
/* JUS-CLASS jus_Class_02096c70::jus_Class_02096c70 [class-default] stores vtable 02096c70 into
   *this (constructor) */

undefined4 *
jus_Class_02096c70::jus_Class_02096c70(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02018228(param_3);
  uVar2 = FUN_02018240(param_3);
  jus_Class_02096f88::jus_Class_02096f88(param_1,uVar1,uVar2);
  *param_1 = &vftable;
  param_1[8] = param_2;
  FUN_02016ff0(param_1 + 9,param_3);
  (**(code **)(*param_2 + 8))();
  return param_1;
}

