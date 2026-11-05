
uint FUN_021938c0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0219321c();
  return uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
}

