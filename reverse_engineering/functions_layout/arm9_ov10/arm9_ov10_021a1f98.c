
undefined4 FUN_021a1f98(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_021a1f04();
  if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x35) & 7) >> 2 == 0)) {
    return 0;
  }
  return 1;
}

