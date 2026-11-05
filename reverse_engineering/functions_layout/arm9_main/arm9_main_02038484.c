
undefined * FUN_02038484(void)

{
  uint uVar1;
  
  uVar1 = DAT_020a1014 + 1;
  DAT_020a1014 = uVar1 & 7;
  return &DAT_020a2320 + (uVar1 & 7) * 0x10;
}

