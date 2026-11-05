
/* WARNING: Instruction at (ram,0x021554d6) overlaps instruction at (ram,0x021554d4)
    */

void FUN_021553d4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  uint uVar3;
  int iVar4;
  int *unaff_r10;
  bool bVar5;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined8 uVar6;
  
  iVar1 = FUN_02166e24(0x20);
  if (iVar1 != 0) {
    FUN_02154dbc(0);
  }
  iVar1 = FUN_02166e24(0x40);
  if (iVar1 != 0) {
    FUN_02154dbc(1);
  }
  iVar1 = FUN_02166e24(0x10);
  if (iVar1 != 0) {
    FUN_02154dbc(2);
  }
  iVar1 = FUN_02166e24(0x80);
  if (iVar1 != 0) {
    FUN_02154dbc(3);
  }
  uVar6 = FUN_02166e40(1);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    uVar2 = 0x121;
    uVar3 = (uint)*(char *)(DAT_0216e6dc + 0x121);
    if ((int)uVar3 < 0x2f) {
      if (*(char *)(DAT_0216e6dc + 0x124) == '\0') {
        FUN_02162378(9);
        return;
      }
      *(undefined *)(DAT_0216e6dc + 0x11c) =
           (&PTR_s_1234567890__qwertyuiop__asdfghjk_0216b2e4)[*(byte *)(DAT_0216e6dc + 0x11d)]
           [uVar3];
      if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
        FUN_021551b0(0);
        return;
      }
      return;
    }
    if ((int)(uVar3 - 0x2f) < 4) {
      switch(uVar3) {
      case 0x2f:
        FUN_02155730();
        return;
      case 0x30:
        FUN_02155704();
        return;
      case 0x31:
        if (*(char *)(DAT_0216e6dc + 0x124) == '\0') {
          FUN_02162378(9);
          return;
        }
        break;
      case 0x32:
        if (*(char *)(DAT_0216e6dc + 0x123) == '\0') {
          FUN_02162378(9);
          return;
        }
      }
      if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
        FUN_021551b0(0);
      }
      iVar4 = uVar3 - 0x2f;
      bVar5 = iVar4 < 0;
      uVar2 = (uint)(byte)(&DAT_0216a4bd)[uVar3];
      if (uVar3 < 0x2f) {
        coprocessor_load(0xd,in_cr11,in_r3);
      }
    }
    else {
      iVar4 = uVar3 - 0x33;
      bVar5 = iVar4 < 0;
    }
    iVar1 = DAT_0216e6dc;
    if (!bVar5) {
      coprocessor_store(8,in_cr4,uVar2 - 0x94);
      *unaff_r10 = iVar4;
    }
  }
  iVar1 = FUN_02166e24(2,iVar1);
  if (iVar1 == 0) {
    iVar1 = FUN_02166e08(2);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0216e6dc + iRam02155574) = 0;
    }
  }
  else {
    if (*(char *)(DAT_0216e6dc + 0x123) == '\0') {
      if (*(char *)(DAT_0216e6dc + iRam02155574) == '\0') {
        FUN_02162378(9);
        *(undefined1 *)(DAT_0216e6dc + iRam02155574) = 1;
        return;
      }
      return;
    }
    *(undefined1 *)(DAT_0216e6dc + 0x11c) = 0x80;
  }
  iVar1 = FUN_02166e40(uRam02155578);
  if (iVar1 != 0) {
    FUN_02155730();
  }
  iVar1 = FUN_02166e40(uRam0215557c);
  if (iVar1 != 0) {
    FUN_02155704();
  }
  return;
}

