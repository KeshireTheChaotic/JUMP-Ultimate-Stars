
void FUN_021541b8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_021677a0(0,param_1);
  if (*(int *)(DAT_0216e688 + 0x10) != 0) {
    FUN_021677a0(0);
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(DAT_0216e688 + iVar1) != 0) {
      FUN_02165d6c();
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_02165d6c(*(undefined4 *)(DAT_0216e688 + 8));
  FUN_02166b5c(&DAT_0216e688);
  return;
}

