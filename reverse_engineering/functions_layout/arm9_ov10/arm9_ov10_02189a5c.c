
undefined4 FUN_02189a5c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((DAT_021a64cc != -1) && (DAT_021a7d34 == 5)) {
    iVar2 = thunk_FUN_02001c9c(DAT_021a64cc);
    while (iVar2 != 0) {
      if (DAT_021a7d3c - DAT_021a7d28 < 0x80) {
        if (DAT_021a7d3c < 0x100) {
          DAT_021a7d3c = 0x100;
        }
        else {
          DAT_021a7d3c = DAT_021a7d3c << 1;
        }
        DAT_021a7d2c = FUN_02175824(DAT_021a7d2c,DAT_021a7d3c + 1);
        if (DAT_021a7d2c == 0) {
          return 0;
        }
      }
      iVar2 = FUN_02001ac0(DAT_021a64cc,DAT_021a7d2c + DAT_021a7d28,DAT_021a7d3c - DAT_021a7d28,0);
      if (iVar2 < 1) {
        FUN_02189b50();
        return 0;
      }
      DAT_021a7d28 = DAT_021a7d28 + iVar2;
      *(undefined1 *)(DAT_021a7d2c + DAT_021a7d28) = 0;
      iVar2 = FUN_021895ec(DAT_021a7d2c,DAT_021a7d28);
      if (iVar2 == DAT_021a7d28) {
        DAT_021a7d28 = 0;
      }
      else {
        FUN_02002450(DAT_021a7d2c,DAT_021a7d2c + iVar2,DAT_021a7d28 - iVar2);
        DAT_021a7d28 = DAT_021a7d28 - iVar2;
      }
      iVar2 = thunk_FUN_02001c9c(DAT_021a64cc);
    }
    uVar1 = 0;
    if (DAT_021a64cc != -1) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

