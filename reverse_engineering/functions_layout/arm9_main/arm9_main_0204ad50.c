
void FUN_0204ad50(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfd | (param_2 & 1) << 1;
  return;
}

