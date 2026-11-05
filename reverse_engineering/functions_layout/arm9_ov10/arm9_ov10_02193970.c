
undefined4 * FUN_02193970(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_021932d0();
  if (uVar1 == 0) {
    return (undefined4 *)0x0;
  }
  FUN_020517fc(&DAT_021a9e04,0,0x101);
  FUN_02057a18(&DAT_021a9e04,param_1,0x101);
  DAT_021a9dac = &DAT_021a9e04;
  DAT_021a9db0 = 0;
  DAT_021a9db4 = 2;
  DAT_021a9db6 = 4;
  DAT_021a9db8 = &DAT_021a9da4;
  DAT_021a9da4 = &DAT_021a9d98;
  DAT_021a9da8 = 0;
  DAT_021a9d98 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  return &DAT_021a9dac;
}

