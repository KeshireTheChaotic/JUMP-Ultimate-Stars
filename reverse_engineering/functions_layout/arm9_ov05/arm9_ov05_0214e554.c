
int FUN_0214e554(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\x02') {
    iVar1 = (uint)*(byte *)(param_1 + 7) * 0xc + *(int *)(DAT_0214bd80 + 0x54);
    return *(int *)(iVar1 + param_2 * 4 + 4) + iVar1 + 4 + param_2 * 4;
  }
  return 0;
}

