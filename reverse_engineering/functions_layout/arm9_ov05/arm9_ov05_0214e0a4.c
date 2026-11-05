
int FUN_0214e0a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(DAT_0214bd80 + 0x44) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    return 0;
  }
  iVar2 = *(char *)(param_1 + 8) + -3;
  if (iVar2 < 0) {
    return 0;
  }
  iVar1 = (uint)*(byte *)(param_1 + 7) * 0xd4 + *(int *)(DAT_0214bd80 + 0x44);
  return *(int *)(iVar1 + iVar2 * 0x10 + param_2 * 4 + 4) + iVar1 + 4 + iVar2 * 0x10 + param_2 * 4;
}

