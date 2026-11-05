
byte * FUN_0218e2c0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    param_1 = param_1 + 1;
    if (uVar2 == 0) {
      return param_1;
    }
    if ((uVar2 & 0xc0) == 0xc0) break;
    param_1 = param_1 + uVar2;
    bVar1 = *param_1;
  }
  return param_1 + 1;
}

