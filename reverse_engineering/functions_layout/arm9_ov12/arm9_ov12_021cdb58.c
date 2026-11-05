
undefined4 FUN_021cdb58(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_021d57a0 == 0) {
    return 1;
  }
  if (DAT_021d6688 == 0) {
    DAT_021d6688 = FUN_021cde2c();
    if ((DAT_021d6688 == 0) || (DAT_021d5798 == 0)) {
      return 1;
    }
    return 0;
  }
  uVar3 = 1;
  if (DAT_021d7bf0 == 2) {
    uVar3 = (uint)*(byte *)(DAT_021d6690 + DAT_021d6694 * 3 + 0x21d0394);
    DAT_021d6690 = DAT_021d6690 + 1;
  }
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = FUN_02050e14(DAT_021d668c);
      if (uVar1 == 0x20) {
        return 1;
      }
      DAT_021d668c = DAT_021d668c & ~(0x80000000U >> (uVar1 & 0xff));
      func_0x0217ed34(0x1f - uVar1 & 0xff,DAT_021d6688,DAT_021d578c);
      if (DAT_021d668c == 0) {
        DAT_021d6680 = DAT_021d6680 + 1;
        DAT_021d6688 = 0;
        DAT_021d668c = 0;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return 1;
}

