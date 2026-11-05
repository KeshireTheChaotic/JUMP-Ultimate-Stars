
void FUN_02014fd8(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 0x3f) >> 5 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf | (byte)((param_2 & 1) << 5);
  FUN_02014ae0();
  return;
}

