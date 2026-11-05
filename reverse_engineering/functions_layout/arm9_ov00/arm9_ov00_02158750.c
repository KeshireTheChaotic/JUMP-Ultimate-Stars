
uint FUN_02158750(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (6 < uVar1) {
      return 0;
    }
    if (param_1 <= (byte)(&DAT_021600fc)[uVar1]) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}

