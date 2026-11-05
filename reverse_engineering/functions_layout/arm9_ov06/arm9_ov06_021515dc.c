
undefined4 FUN_021515dc(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a8) + 0x10);
  if ((((*(uint *)(iVar1 + 0x158) & 0xf) == 0) && ((*(uint *)(iVar1 + 0x160) & 0xf) == 0)) ||
     ((*(uint *)(iVar1 + 0x40) & 0x200000) == 0)) {
    return 0;
  }
  return 1;
}

