
int FUN_02162dc4(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x18 + *(int *)(param_1 + 0x18);
  if (*(short *)(iVar1 + 0x10) != -1) {
    return (int)*(short *)(iVar1 + 0x10);
  }
  if (*(char *)(iVar1 + 0x14) == '\x02') {
    return (int)*(short *)(*(short *)(iVar1 + 0x16) * 0x34 + *(int *)(param_1 + 0x1c) + 0x28);
  }
  return -1;
}

