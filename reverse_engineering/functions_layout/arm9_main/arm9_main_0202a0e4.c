
/* JUS-CLASS jus_Class_0209647c::jus_Class_0209647c [class-default] stores vtable 0209647c into
   *this (constructor) */

undefined4 * jus_Class_0209647c::jus_Class_0209647c(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  param_1[2] = 0xffffffff;
  FUN_02024e9c(param_1 + 3,param_2 + 0xc);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  DAT_020a0cc8 = DAT_020a0cc8 + 1;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x30;
  if (param_3 != 0) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x3f;
  }
  return param_1;
}

