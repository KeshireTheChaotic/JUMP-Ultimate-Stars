
void FUN_02014c64(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 7) >> 2 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfb | (byte)((param_2 & 1) << 2);
  FUN_02014ae0();
  return;
}

