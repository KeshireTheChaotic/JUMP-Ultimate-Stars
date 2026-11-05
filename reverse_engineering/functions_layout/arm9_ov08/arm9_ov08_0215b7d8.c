
void FUN_0215b7d8(void)

{
  int iVar1;
  
  iVar1 = FUN_02155d04();
  if (iVar1 < 0x84) {
    if (iVar1 < 0x80) {
      if (iVar1 == 0) goto LAB_0215b8ea;
    }
    else {
      if (iVar1 == 0x80) {
        if (*(char *)(DAT_0216e778 + 0x29) != '\0') {
          FUN_02162378(3);
          *(char *)(DAT_0216e778 + 0x29) = *(char *)(DAT_0216e778 + 0x29) + -1;
          *(undefined1 *)(DAT_0216e778 + (uint)*(byte *)(DAT_0216e778 + 0x29) + 8) = 0;
          if (*(char *)(DAT_0216e778 + 0x29) == '\0') {
            FUN_02155cf0();
          }
          FUN_02155cdc(1);
        }
        goto LAB_0215b8ea;
      }
      if (iVar1 == 0x82) {
        FUN_02162378(7);
        *(undefined1 *)(DAT_0216e778 + 0x2a) = 0;
        FUN_02157088(0x215b7bd);
        return;
      }
      if (iVar1 == 0x83) {
        iVar1 = FUN_0215b3c0();
        if (iVar1 == 0) {
          *(undefined1 *)(DAT_0216e778 + 0x2a) = 2;
          FUN_02162378(9);
        }
        else {
          FUN_02162378(6);
          *(undefined1 *)(DAT_0216e778 + 0x2a) = 1;
        }
        **(uint **)(DAT_0216e778 + 4) = **(uint **)(DAT_0216e778 + 4) & 0xc1fffcff | 0x200;
        FUN_02157088(0x215b7bd);
        return;
      }
    }
  }
  if (*(char *)(DAT_0216e778 + 0x29) != ' ') {
    FUN_02162378(1);
    *(char *)(DAT_0216e778 + (uint)*(byte *)(DAT_0216e778 + 0x29) + 8) = (char)iVar1;
    *(char *)(DAT_0216e778 + 0x29) = *(char *)(DAT_0216e778 + 0x29) + '\x01';
    FUN_02155cf0(1);
    if (*(char *)(DAT_0216e778 + 0x29) == ' ') {
      FUN_02155cdc(0);
    }
  }
LAB_0215b8ea:
  FUN_0215b5b0();
  FUN_0215b558();
  return;
}

