
/* JUS-CLASS jus_Class_02096658::jus_Class_02096658 [class-default] stores vtable 02096658 into
   *this (constructor) */

int * jus_Class_02096658::jus_Class_02096658(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  undefined4 local_c;
  
  local_c = 0x80000;
  jus_Class_02094370::jus_Class_02094370(param_1,&local_c);
  *param_1 = (int)&vftable;
  FUN_02019e9c(param_1 + 4);
  FUN_02019e9c(param_1 + 10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x43) = 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x13] = -1;
  param_1[0x14] = 0x2000;
  FUN_02031be8(param_1 + 0x19);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xff000;
  param_1[0x21] = (int)FUN_02031c00;
  jus_Class_02093eb4::jus_Class_02093eb4(param_1 + 0x23);
  iVar1 = FUN_0201a228(0x40);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02095a08::jus_Class_02095a08();
  }
  FUN_0201ce14(param_1 + 0x23,uVar2);
  iVar1 = FUN_0201a228(0x40);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02095a08::jus_Class_02095a08();
  }
  FUN_0201ce7c(param_1 + 0x23,uVar2);
  FUN_02031c04(auStack_1c,0,0,0x280,0x1e0);
  FUN_02031d8c(auStack_14,auStack_1c);
  (**(code **)(*param_1 + 0x1c))(param_1,auStack_14);
  FUN_02031c1c(param_1 + 0x19,&DAT_02093d5c);
  FUN_0201cca0(DAT_020a0cec,param_1);
  FUN_02019edc(param_1 + 4);
  FUN_02019edc(param_1 + 10);
  return param_1;
}

