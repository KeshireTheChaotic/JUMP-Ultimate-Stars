
undefined4 FUN_02168454(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0208c220();
  if ((iVar1 == 0) && (iVar1 = FUN_0208c244(), iVar1 == 0)) {
    return 0;
  }
  if (DAT_020afeb9 == '\0') {
    FUN_0208b784(1);
    FUN_02086c24();
    DAT_020afeb8 = 0;
  }
  DAT_020afeb9 = 0;
  *(undefined4 *)(iVar2 + 0x24) = 2;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02168858);
  return 1;
}

