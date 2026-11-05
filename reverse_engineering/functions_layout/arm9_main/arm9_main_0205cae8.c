
uint FUN_0205cae8(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0205eab4(*param_1,0x20);
  if (uVar1 < 0x20) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - 0x20 & 0xffffffe0;
  }
  return uVar1;
}

