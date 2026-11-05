
undefined4 FUN_021c1408(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < DAT_021d528c) {
    do {
      if ((1 << (uVar1 & 0xff) & *(uint *)(DAT_021d5284 + (param_1 + -1) * 4 + 0x1e0)) == 0) {
        return 0;
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < DAT_021d528c);
  }
  return 1;
}

