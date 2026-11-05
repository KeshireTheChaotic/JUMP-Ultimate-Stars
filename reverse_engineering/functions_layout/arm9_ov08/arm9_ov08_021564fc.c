
void FUN_021564fc(void)

{
  int iVar1;
  
  iVar1 = FUN_02166e24(0x20);
  if (iVar1 != 0) {
    FUN_021561e0(0);
  }
  iVar1 = FUN_02166e24(0x40);
  if (iVar1 != 0) {
    FUN_021561e0(1);
  }
  iVar1 = FUN_02166e24(0x10);
  if (iVar1 != 0) {
    FUN_021561e0(2);
  }
  iVar1 = FUN_02166e24(0x80);
  if (iVar1 != 0) {
    FUN_021561e0(3);
  }
  iVar1 = FUN_02166e40(1);
  if (iVar1 != 0) {
    iVar1 = (int)*(char *)(DAT_0216e6e0 + 99);
    if (iVar1 < 10) {
      if (*(char *)(DAT_0216e6e0 + 0x67) == '\0') {
        FUN_02162378(9);
        return;
      }
      *(char *)(DAT_0216e6e0 + 0x60) = s_7894561230_0216a7d8[iVar1];
      return;
    }
    if (iVar1 + -10 < 2) {
      if (((iVar1 == 10) && (*(char *)(DAT_0216e6e0 + 0x66) == '\0')) ||
         ((iVar1 == 0xb && (*(char *)(DAT_0216e6e0 + 0x68) == '\0')))) {
        FUN_02162378(9);
        return;
      }
      *(undefined *)(DAT_0216e6e0 + 0x60) = (&DAT_0216a78a)[iVar1];
      return;
    }
    *(undefined1 *)(DAT_0216e6e0 + 0x60) = (&DAT_0216a784)[iVar1];
  }
  iVar1 = FUN_02166e24(2);
  if (iVar1 == 0) {
    iVar1 = FUN_02166e08(2);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e6e0 + 0x69) = 0;
    }
  }
  else {
    if (*(char *)(DAT_0216e6e0 + 0x66) != '\0') {
      *(undefined1 *)(DAT_0216e6e0 + 0x60) = 0x10;
      return;
    }
    if (*(char *)(DAT_0216e6e0 + 0x69) == '\0') {
      FUN_02162378(9);
      *(undefined1 *)(DAT_0216e6e0 + 0x69) = 1;
      return;
    }
  }
  return;
}

