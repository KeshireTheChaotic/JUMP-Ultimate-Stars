
/* JUS-CLASS jus_Class_021d1be8::jus_Class_021d1be8 [class-default] stores vtable 021d1be8 into
   *this (constructor) */

undefined4 *
jus_Class_021d1be8::jus_Class_021d1be8(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  
  jus_Class_02095260::jus_Class_02095260(param_1,0);
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  uVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  if (((*param_3 != 0) || (param_3[1] != 0)) || (param_3[2] != 0)) {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  iVar2 = DAT_021d512c + 1;
  param_1[10] = DAT_021d512c;
  DAT_021d512c = iVar2;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  FUN_021b051c(param_1 + 0xd);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  FUN_021b051c(param_1 + 0x17);
  FUN_021b0530(param_1 + 0x17,param_3);
  piVar1 = DAT_021d5130;
  param_1[5] = DAT_021d5130;
  (**(code **)(*piVar1 + 8))();
  return param_1;
}

