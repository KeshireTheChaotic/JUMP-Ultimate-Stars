
void FUN_0204a460(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (param_2 & 1) << 2;
  return;
}

