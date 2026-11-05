
undefined4 FUN_02177ea4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_021a75a4 == 0) || (iVar1 = FUN_02176f90(), iVar1 == 0)) {
    return 0;
  }
  if (param_1 == -1) {
    param_1 = *(int *)(**(int **)(DAT_021a75a4 + 4) + 0x214);
  }
  if (param_2 == 0) {
    param_2 = **(int **)(DAT_021a75a4 + 4) + 0x218;
  }
  if (param_3 == 0) {
    param_3 = **(int **)(DAT_021a75a4 + 4) + 0x318;
  }
  uVar2 = FUN_02181b94(*(undefined4 *)(DAT_021a75a4 + 4),param_1,param_2,param_3);
  return uVar2;
}

