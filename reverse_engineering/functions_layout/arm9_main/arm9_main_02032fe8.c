
undefined * FUN_02032fe8(void)

{
  uint uVar1;
  
  uVar1 = DAT_020a0e88 + 1;
  DAT_020a0e88 = uVar1 & 7;
  return &DAT_020a22a0 + (uVar1 & 7) * 0x10;
}

