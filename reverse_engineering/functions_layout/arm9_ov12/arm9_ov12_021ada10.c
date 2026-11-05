
undefined4 FUN_021ada10(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 100) + 0x10);
  if (((char)bVar1 < '\0') && ((bVar1 & 3) >> 1 != 0)) {
    return 1;
  }
  return 0;
}

