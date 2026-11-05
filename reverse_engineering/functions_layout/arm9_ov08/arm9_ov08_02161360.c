
int FUN_02161360(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  FUN_021612b4(1,auStack_18);
  iVar1 = FUN_02166d24(auStack_18);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = 2;
  do {
    FUN_021612b4(iVar1,auStack_18);
    iVar2 = FUN_02166d24(auStack_18);
    if (iVar2 != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_021612b4(4,auStack_18);
  iVar1 = FUN_02166d70(auStack_18);
  if (iVar1 == 0) {
    return 0;
  }
  return 4;
}

