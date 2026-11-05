
void FUN_0219b2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [80];
  undefined4 uStack_8;
  
  if (DAT_0214ccf8 != 0) {
    uStack_8 = param_4;
    FUN_021a1e68(DAT_0214ccf8 + 0x88,param_1);
    FUN_021a2c48(DAT_0214ccf8 + 0xc24,DAT_0214ccf8 + 0x88,0x50);
    iVar2 = FUN_021766fc();
    if (iVar2 != 0) {
      uVar3 = FUN_0219b0cc();
      FUN_0219b0e8(uVar3,0,auStack_58);
      uVar1 = FUN_021a1de8(auStack_58);
      *(undefined1 *)(DAT_0214ccf8 + 0xa50) = uVar1;
      *(undefined1 *)(DAT_0214ccf8 + 0xa51) = *(undefined1 *)(DAT_0214ccf8 + 0xa50);
    }
  }
  return;
}

