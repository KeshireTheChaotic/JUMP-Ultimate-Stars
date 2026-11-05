
/* JUS-CLASS jus_Class_0209b6b8::vfunc_41 [class-virtual] slot 41 of vtable 0209b6b8 (own slot, not
   inherited) */

void jus_Class_0209b6b8::vfunc_41(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r7;
  bool bVar3;
  
  if (*(int **)(param_1 + 0x5c) == (int *)0x0) {
    bVar3 = *(char *)(param_1 + 0x92) != '\0';
    if (bVar3) {
      unaff_r7 = *(int *)(param_1 + 0xac);
    }
    if ((bVar3 && unaff_r7 != 0) && (iVar1 = FUN_0201a9ec(unaff_r7), iVar1 == 0)) {
      FUN_0201a958(unaff_r7,1);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar1 = (param_2 * param_3 + 1U & 0xfffffffe) << 1;
  uVar2 = jus_AllocDebug(iVar1);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined1 *)(param_1 + 0x92) = 1;
  *(int *)(param_1 + 0x6c) = param_2;
  *(int *)(param_1 + 0x70) = param_3;
  MIi_CpuClear16(0,*(undefined4 *)(param_1 + 0xac),iVar1);
  return;
}

