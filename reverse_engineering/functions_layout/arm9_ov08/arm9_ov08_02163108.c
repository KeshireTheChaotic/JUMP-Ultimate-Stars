
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02163108(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_04000000 = _DAT_04000000 & 0xffff1fff;
  FUN_02165d6c(*DAT_0216e804);
  FUN_02165d6c(DAT_0216e804[1]);
  iVar2 = 0;
  if ((&DAT_0216ae24)[*(byte *)(DAT_0216e804 + 7)] != '\0') {
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_0216e804 + iVar1 + 8) != 0) {
        FUN_02165d6c();
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)(byte)(&DAT_0216ae24)[*(byte *)(DAT_0216e804 + 7)]);
  }
  FUN_021666f4(DAT_0216e804[4]);
  FUN_021677a0(1,param_1);
  FUN_02166b5c(&DAT_0216e804);
  return;
}

