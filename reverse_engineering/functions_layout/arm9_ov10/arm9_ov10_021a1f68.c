
undefined4 FUN_021a1f68(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_021a1f04();
  if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x35) & 3) >> 1 == 0)) {
    return 0;
  }
  return 1;
}

