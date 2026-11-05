
void FUN_02155ff4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_021677a0(0,param_1);
  iVar2 = 0;
  iVar1 = 0;
  do {
    FUN_02165d6c(*(undefined4 *)(DAT_0216e6e0 + iVar1 + 0x48));
    FUN_021666f4(*(undefined4 *)(DAT_0216e6e0 + iVar1));
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar1 = 0;
  iVar2 = 0;
  do {
    FUN_02165d6c(*(undefined4 *)(DAT_0216e6e0 + iVar2 + 0x40));
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  iVar2 = 0;
  do {
    FUN_02167204(*(undefined4 *)(DAT_0216e6e0 + iVar2 + 0x38));
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  iVar2 = 0;
  do {
    FUN_02167204(*(undefined4 *)(DAT_0216e6e0 + iVar2 + 0x10));
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  FUN_02166b5c(&DAT_0216e6e0);
  return;
}

