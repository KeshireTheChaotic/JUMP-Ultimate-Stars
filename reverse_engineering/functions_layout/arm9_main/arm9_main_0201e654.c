
/* JUS-CLASS jus_Class_0209cac0::jus_Class_0209cac0 [class-default] stores vtable 0209cac0 into
   *this (constructor) */

undefined4 *
jus_Class_0209cac0::jus_Class_0209cac0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  jus_Class_0209cc28::jus_Class_0209cc28();
  *param_1 = &vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = param_3;
  (**(code **)(*param_3 + 8))();
  return param_1;
}

