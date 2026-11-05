
int FUN_0214e518(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\x02') {
    iVar1 = (short)(ushort)*(byte *)(param_1 + 7) * 0xc;
    return *(int *)(*(int *)(DAT_0214bd80 + 0x54) + iVar1) + *(int *)(DAT_0214bd80 + 0x54) + iVar1;
  }
  return 0;
}

