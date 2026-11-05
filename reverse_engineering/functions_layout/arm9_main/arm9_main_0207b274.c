
undefined4 FUN_0207b274(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x18) & 0x20) == 0) {
    return 0;
  }
  *(short *)(param_1 + 0xc) = (short)param_2;
  if ((param_2 == 0) && ((*(uint *)(DAT_0214be08 + 0x98) & *(uint *)(param_1 + 0x10)) != 0)) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0x10;
    return 1;
  }
  return 0;
}

