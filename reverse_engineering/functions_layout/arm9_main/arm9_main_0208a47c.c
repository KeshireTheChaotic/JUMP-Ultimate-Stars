
uint FUN_0208a47c(uint param_1)

{
  uint uVar1;
  
  DAT_0214bea0 = param_1;
  uVar1 = (uint)DAT_0214be4e;
  DAT_0214be4e = DAT_0214be4e + 1;
  return (param_1 & 3) << 0xe | uVar1 & 0x3fff;
}

