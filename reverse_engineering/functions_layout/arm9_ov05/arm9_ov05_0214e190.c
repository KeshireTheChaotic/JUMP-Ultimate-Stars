
int FUN_0214e190(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(DAT_0214bd80 + 0x44) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    iVar1 = (uint)*(byte *)(param_1 + 7) * 0xd4 + *(int *)(DAT_0214bd80 + 0x44);
    return *(int *)(iVar1 + param_2 * 4 + 0x54) + iVar1 + 0x54 + param_2 * 4;
  }
  return 0;
}

