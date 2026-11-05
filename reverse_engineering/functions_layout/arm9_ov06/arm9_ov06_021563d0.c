
undefined4 FUN_021563d0(int param_1)

{
  if (((*(uint *)(param_1 + 0x90) & 7) == 0) ||
     ((*(uint *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x40) & 0x10) == 0)) {
    return 0;
  }
  return 1;
}

