
undefined4 FUN_021587d8(int *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(int *)(*(int *)(*param_1 + 4) + 100) + 0x10);
  if (((char)bVar1 < '\0') && ((bVar1 & 3) >> 1 != 0)) {
    return 1;
  }
  return 0;
}

