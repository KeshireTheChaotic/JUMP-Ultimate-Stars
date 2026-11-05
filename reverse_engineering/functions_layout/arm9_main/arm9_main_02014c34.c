
void FUN_02014c34(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 3) >> 1 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | (byte)((param_2 & 1) << 1);
  FUN_02014ae0();
  return;
}

