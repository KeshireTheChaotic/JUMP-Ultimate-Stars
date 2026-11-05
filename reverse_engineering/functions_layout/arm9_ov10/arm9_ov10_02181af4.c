
int FUN_02181af4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  iVar1 = FUN_0217fa50(*param_1,*(undefined4 *)(DAT_021a7d24 + 0x498),0);
  iVar2 = FUN_0217fa50(uVar3,*(undefined4 *)(DAT_021a7d24 + 0x498),0);
  iVar1 = iVar1 - iVar2;
  if (*(int *)(DAT_021a7d24 + 0x49c) == 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

