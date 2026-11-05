
undefined4 FUN_021733dc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10);
  if (((*(uint *)(iVar1 + 0x3c) & 0x10000000) == 0) && ((*(uint *)(iVar1 + 0x40) & 0x18000000) == 0)
     ) {
    return 0;
  }
  return 1;
}

