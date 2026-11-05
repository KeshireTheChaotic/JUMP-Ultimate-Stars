
void FUN_021663f0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)*DAT_0214ccf8)(0,DAT_0214ccf8[1],0);
  if (iVar1 != 0) {
    iVar1 = (*(code *)*DAT_0214ccf8)(1,DAT_0214ccf8[1],0);
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021665b8 + 1);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02166858 + 1);
  }
  return;
}

