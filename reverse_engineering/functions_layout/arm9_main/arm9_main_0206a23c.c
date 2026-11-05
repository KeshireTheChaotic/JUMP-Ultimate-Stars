
undefined4 FUN_0206a23c(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == 0x7f) {
    return 0;
  }
  if (bVar1 == 0) {
    return 0;
  }
  if (bVar1 < 0xe0) {
    return 1;
  }
  return 0;
}

