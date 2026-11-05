
undefined4 FUN_0219b1f8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined1 auStack_58 [80];
  undefined4 uStack_8;
  
  if (DAT_0214ccf8 != 0) {
    uStack_8 = in_r3;
    iVar1 = FUN_021766fc();
    if (iVar1 == 0) {
      uVar2 = FUN_021a1f98(DAT_0214ccf8 + 0x88);
      return uVar2;
    }
    iVar1 = FUN_02176654(0);
    if (iVar1 != 0) {
      uVar2 = FUN_0219b0cc();
      FUN_0219b0e8(uVar2,0,auStack_58);
      uVar2 = FUN_021a1f98(auStack_58);
      return uVar2;
    }
  }
  return 0;
}

