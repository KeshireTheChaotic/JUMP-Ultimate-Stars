
int FUN_0214e3d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(DAT_0214bd80 + 0x4c) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 6) != '\x01') {
    return 0;
  }
  iVar2 = *(char *)(param_1 + 8) + -1;
  if (iVar2 < 0) {
    return 0;
  }
  iVar1 = (uint)*(byte *)(param_1 + 7) * 0x24 + *(int *)(DAT_0214bd80 + 0x4c);
  return *(int *)(iVar1 + iVar2 * 8 + param_2 * 4 + 0x14) + iVar1 + 0x14 + iVar2 * 8 + param_2 * 4;
}

