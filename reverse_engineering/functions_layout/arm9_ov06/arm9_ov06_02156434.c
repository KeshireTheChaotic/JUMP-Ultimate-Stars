
undefined4 FUN_02156434(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x10);
  if ((*(uint *)(iVar1 + 0x158) & 0xf) == 0) {
    return 0;
  }
  if (((*(uint *)(iVar1 + 0x15c) & 0x20) == 0) && ((*(uint *)(iVar1 + 0x164) & 0x20) == 0)) {
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 2);
    return 1;
  }
  return 1;
}

