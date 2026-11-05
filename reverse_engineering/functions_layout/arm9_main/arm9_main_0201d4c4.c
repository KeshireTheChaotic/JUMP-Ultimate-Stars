
int FUN_0201d4c4(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 1) {
    return *(int *)(param_1 + 0xc);
  }
  if (*(short *)(param_1 + 0x14) == 0) {
    return DAT_02093bf4;
  }
  return param_1 + 4;
}

