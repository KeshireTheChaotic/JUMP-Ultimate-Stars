
undefined4 FUN_02175ba8(int param_1)

{
  undefined4 extraout_r1;
  longlong lVar1;
  uint local_18;
  uint local_14;
  
  if ((DAT_021a73fc == 0 && DAT_021a73f8 == 0) && (DAT_021a7404 == 0 && DAT_021a7400 == 0)) {
    if (DAT_021a740c == 0 && DAT_021a7408 == 0) {
      FUN_020554a8(&local_18);
      lVar1 = FUN_02054b44();
      DAT_021a73fc = (uint)((ulonglong)lVar1 >> 8);
      DAT_021a73f8 = local_18 >> 0x18 | (local_14 & 0xffff) << 8 | (uint)(lVar1 << 0x18);
      DAT_021a7400 = 0x6c078965;
      DAT_021a7404 = 0x5d588b65;
      DAT_021a7408 = 0x269ec3;
      DAT_021a740c = 0;
      local_18 = DAT_021a73f8;
      local_14 = DAT_021a73fc;
    }
  }
  lVar1 = FUN_0200d10c(DAT_021a7400,DAT_021a7404,DAT_021a73f8,DAT_021a73fc);
  lVar1 = lVar1 + CONCAT44(DAT_021a740c,DAT_021a7408);
  DAT_021a73f8 = (uint)lVar1;
  DAT_021a73fc = (uint)((ulonglong)lVar1 >> 0x20);
  if (param_1 != 0) {
    FUN_0200d10c(DAT_021a73fc,0,param_1,0);
    lVar1 = CONCAT44(extraout_r1,DAT_021a73f8);
  }
  DAT_021a73f8 = (uint)lVar1;
  return (int)((ulonglong)lVar1 >> 0x20);
}

