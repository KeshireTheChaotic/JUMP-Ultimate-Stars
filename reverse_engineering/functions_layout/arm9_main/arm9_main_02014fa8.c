
void FUN_02014fa8(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 0x1f) >> 4 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xef | (byte)((param_2 & 1) << 4);
  FUN_02014ae0();
  return;
}

