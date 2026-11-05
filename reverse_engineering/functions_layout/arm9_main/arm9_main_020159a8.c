
/* JUS-CLASS jus_Class_02093ff0::jus_Class_02093ff0 [class-default] stores vtable 02093ff0 into
   *this (constructor) */

undefined4 * jus_Class_02093ff0::jus_Class_02093ff0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0x100;
  param_1[4] = 0;
  uVar1 = FUN_0201a228(param_1[3]);
  param_1[2] = uVar1;
  return param_1;
}

