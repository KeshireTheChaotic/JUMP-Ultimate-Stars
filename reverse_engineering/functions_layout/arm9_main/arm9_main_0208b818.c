
undefined4 FUN_0208b818(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x2a) == '\0') {
    uVar4 = *(uint *)(DAT_0214ccec + 0x4c);
    uVar1 = FUN_0208b7ec();
    if (uVar4 <= uVar1) {
      return 0;
    }
    *(undefined1 *)(DAT_0214ccec + (uint)*(ushort *)(param_1 + 0x10) + 0x3c) = 0xfe;
  }
  else {
    iVar3 = 0;
    uVar1 = 0;
    do {
      if (*(char *)(DAT_0214ccec + uVar1 + 0x3c) != -1) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    iVar2 = FUN_0208b7ec();
    if (3 < (uint)(iVar3 - iVar2)) {
      return 0;
    }
    *(undefined1 *)(DAT_0214ccec + (uint)*(ushort *)(param_1 + 0x10) + 0x3c) = 0xfd;
  }
  return 1;
}

