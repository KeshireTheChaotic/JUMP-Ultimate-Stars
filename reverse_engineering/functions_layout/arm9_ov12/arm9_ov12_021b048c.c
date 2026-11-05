
/* JUS-CLASS jus_Class_021d1be8::jus_Class_021d1be8 [class-default] stores vtable 021d1be8 into
   *this (constructor) */

undefined4 * jus_Class_021d1be8::jus_Class_021d1be8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  jus_Class_02095260::jus_Class_02095260();
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  iVar1 = DAT_021d512c + 1;
  param_1[10] = DAT_021d512c;
  DAT_021d512c = iVar1;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  FUN_021b051c(param_1 + 0xd);
  param_1[0x10] = 0;
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x16] = 0;
  FUN_021b051c(param_1 + 0x17);
  param_1[7] = 0;
  FUN_021b0530(param_1 + 0x17,param_2 + 0x5c);
  return param_1;
}

