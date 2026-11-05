
void FUN_021a1ea8(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xfb | (param_2 & 1) << 2;
  return;
}

