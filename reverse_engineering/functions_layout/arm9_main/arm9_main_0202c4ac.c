
/* JUS-CLASS jus_Class_02098708::jus_Class_02098708 [class-default] stores vtable 02098708 into
   *this (constructor) */

undefined4 * jus_Class_02098708::jus_Class_02098708(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  *param_1 = &vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  if (param_3 != 0) {
    param_2 = param_3;
  }
  param_1[3] = param_2;
  uVar1 = FUN_020326b0(param_1[2]);
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_020326b0(param_1[3]);
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  DAT_020a0f40 = DAT_020a0f40 + 1;
  return param_1;
}

