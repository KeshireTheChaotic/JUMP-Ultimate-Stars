
int FUN_0214e370(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(DAT_0214bd80 + 0x4c) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    return 0;
  }
  iVar1 = *(char *)(param_1 + 8) + -1;
  if (iVar1 < 0) {
    return 0;
  }
  param_2 = param_2 + iVar1 * 2;
  iVar1 = (uint)*(byte *)(param_1 + 7) * 0x24 + *(int *)(DAT_0214bd80 + 0x4c);
  return *(int *)(iVar1 + param_2 * 4 + 4) + iVar1 + 4 + param_2 * 4;
}

