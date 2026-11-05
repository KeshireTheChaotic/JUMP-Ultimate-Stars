
int * FUN_02035e88(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_02032598(&DAT_020a1d78,param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    FUN_02035c38(piVar1);
    return piVar1;
  }
  iVar2 = FUN_020104b4(param_1 | 0x40000000);
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_020165dc(param_1);
    if (piVar1 == (int *)0x0) {
      return DAT_020a1054;
    }
    piVar3 = (int *)(**(code **)(*DAT_020a0dfc + 8))();
    (**(code **)(*piVar3 + 0x28))(piVar3,piVar1);
    (**(code **)(*piVar1 + 0xc))();
    piVar3[2] = param_1;
    FUN_020324dc(&DAT_020a1d78,piVar3);
    return piVar3;
  }
  piVar1 = (int *)FUN_02035db0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  if (piVar1 == (int *)0x0) {
    return DAT_020a1054;
  }
  piVar1[2] = param_1;
  FUN_020324dc(&DAT_020a1d78,piVar1);
  return piVar1;
}

