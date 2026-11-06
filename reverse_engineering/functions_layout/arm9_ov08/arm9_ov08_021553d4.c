
/* WARNING: Instruction at (ram,0x021554d6) overlaps instruction at (ram,0x021554d4)
    */

void FUN_021553d4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_r3;
  uint uVar4;
  int iVar5;
  int *unaff_r10;
  bool bVar6;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined8 uVar7;
  
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
  uVar7 = FUN_02166e40(1);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    uVar3 = 0x121;
    uVar4 = (uint)*(char *)(DAT_0216e6dc + 0x121);
    if ((int)uVar4 < 0x2f) {
      if (*(char *)(DAT_0216e6dc + 0x124) == '\0') {
        FUN_02162378(9);
        return;
      }
      *(undefined *)(DAT_0216e6dc + 0x11c) =
           (&PTR_s_1234567890__qwertyuiop__asdfghjk_0216b2e4)[*(byte *)(DAT_0216e6dc + 0x11d)]
           [uVar4];
      if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
        FUN_021551b0(0);
        return;
      }
      return;
    }
    uVar2 = uVar4 - 0x2f;
    if ((int)uVar2 < 4) {
      if (uVar2 < 4) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar2) {
        case 0:
          FUN_02155730();
          return;
        case 1:
          FUN_02155704();
          return;
        case 2:
          if (*(char *)(DAT_0216e6dc + 0x124) == '\0') {
            FUN_02162378(9);
            return;
          }
          break;
        case 3:
          if (*(char *)(DAT_0216e6dc + 0x123) == '\0') {
            FUN_02162378(9);
            return;
          }
        }
      }
      if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
        FUN_021551b0(0);
      }
      iVar5 = uVar4 - 0x2f;
      bVar6 = iVar5 < 0;
      uVar3 = (uint)(byte)(&DAT_0216a4bd)[uVar4];
      if (uVar4 < 0x2f) {
        coprocessor_load(0xd,in_cr11,in_r3);
      }
    }
    else {
      iVar5 = uVar4 - 0x33;
      bVar6 = iVar5 < 0;
    }
    iVar1 = DAT_0216e6dc;
    if (!bVar6) {
      coprocessor_store(8,in_cr4,uVar3 - 0x94);
      *unaff_r10 = iVar5;
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

