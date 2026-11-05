
undefined4 FUN_0219cd24(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_021766fc();
  iVar1 = FUN_0219b644();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_02176714(iVar1);
  uVar3 = FUN_0219b4bc();
  if (uVar2 == uVar3) {
    return 0;
  }
  uVar2 = 0;
  uVar4 = 0;
  do {
    uVar3 = FUN_0219b4d8(uVar3);
    if (((uVar3 & 1 << uVar4) != 0) && (uVar3 = FUN_0217668c(), (uVar3 & 1 << uVar4) == 0)) {
      uVar3 = FUN_0219cb14(uVar4);
      uVar2 = uVar2 | 1 << (uVar3 & 0xff) & 0xffU;
    }
    uVar3 = uVar4 + 1;
    uVar4 = uVar3 & 0xff;
  } while (uVar4 < 4);
  if (uVar2 == 0) {
    return 0;
  }
  FUN_02088260(uVar3);
  FUN_0219a904();
  FUN_0219a8a8();
  FUN_021a2214(DAT_0214ccf8 + 0x88,DAT_0214ccf8 + 0x8e0);
  FUN_021a1e04(DAT_0214ccf8 + 0x88);
  *(char *)(DAT_0214ccf8 + 0xbf) = (char)uVar2;
  FUN_021a2c48(DAT_0214ccf8 + 0xc24,DAT_0214ccf8 + 0x88,0x50);
  *(undefined1 *)(DAT_0214ccf8 + 0xbf) = 0;
  thunk_FUN_02070414();
  return 1;
}

