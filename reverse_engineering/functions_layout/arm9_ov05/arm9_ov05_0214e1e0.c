
int FUN_0214e1e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_0214bd80 + 0x44) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    iVar1 = (uint)*(byte *)(param_1 + 7) * 0xd4 + *(int *)(DAT_0214bd80 + 0x44);
    return *(int *)(iVar1 + param_2 * 8 + param_3 * 4 + 0xb4) +
           iVar1 + 0xb4 + param_2 * 8 + param_3 * 4;
  }
  return 0;
}

