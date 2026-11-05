
/* JUS-CLASS jus_Class_02098858::vfunc_08 [class-virtual] slot 8 of vtable 02098858 (own slot, not
   inherited) */

void jus_Class_02098858::vfunc_08(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 100);
  uVar1 = FUN_0200c99c(*(ushort *)(iVar2 + 0x24) & 0x1f);
  uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar1);
  uVar1 = FUN_0200c8e0();
  *param_3 = uVar1;
  uVar1 = FUN_0200c99c((int)(uint)*(ushort *)(iVar2 + 0x24) >> 5 & 0x1f);
  uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar1);
  uVar1 = FUN_0200c8e0();
  param_3[1] = uVar1;
  uVar1 = FUN_0200c99c((int)(uint)*(ushort *)(iVar2 + 0x24) >> 10 & 0x1f);
  uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar1);
  uVar1 = FUN_0200c8e0();
  param_3[2] = uVar1;
  uVar1 = FUN_0200c99c(*(undefined2 *)(iVar2 + 0x26));
  uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar1);
  uVar1 = FUN_0200c8e0();
  param_3[3] = uVar1;
  return;
}

