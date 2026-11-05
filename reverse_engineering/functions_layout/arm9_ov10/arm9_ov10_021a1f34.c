
undefined4 FUN_021a1f34(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_021a1f04();
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x34) != param_2)) {
    return 0;
  }
  return 1;
}

