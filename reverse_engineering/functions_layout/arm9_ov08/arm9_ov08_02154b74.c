
void FUN_02154b74(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  FUN_021677a0(0,param_1);
  iVar3 = 0;
  iVar4 = 0;
  local_18 = 0;
  do {
    iVar1 = local_18;
    iVar2 = local_18;
    do {
      FUN_021666f4(*(undefined4 *)(iVar1 + iVar4 + DAT_0216e6dc));
      if (iVar3 == 0) {
        FUN_02165d6c(*(undefined4 *)(DAT_0216e6dc + iVar1 + 0x104));
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  iVar4 = 0;
  do {
    FUN_02165d6c(*(undefined4 *)(DAT_0216e6dc + iVar4 + 0xfc));
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  iVar4 = 0;
  do {
    FUN_02167204(*(undefined4 *)(DAT_0216e6dc + iVar4 + 0xec));
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  iVar4 = 0;
  do {
    FUN_02167204(*(undefined4 *)(DAT_0216e6dc + iVar4 + 0x30));
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x2f);
  FUN_02166b5c(&DAT_0216e6dc);
  return;
}

