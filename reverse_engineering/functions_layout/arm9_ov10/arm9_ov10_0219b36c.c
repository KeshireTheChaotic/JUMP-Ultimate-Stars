
undefined4 FUN_0219b36c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_0214ccf8 != 0) {
    uVar2 = 0;
    for (uVar3 = 0; (int)uVar3 < 4; uVar3 = uVar3 + 1) {
      if (((uint)*(byte *)(DAT_0214ccf8 + 0xa51) & 1 << (uVar3 & 0xff)) != 0) {
        iVar1 = FUN_02176654(uVar3 & 0xff);
        if (iVar1 != 0) {
          iVar1 = FUN_0219b4f4(uVar3 & 0xff);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = FUN_021a1f98(iVar1);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      }
    }
    if (uVar2 == *(byte *)(DAT_0214ccf8 + 0xa51)) {
      return 1;
    }
  }
  return 0;
}

