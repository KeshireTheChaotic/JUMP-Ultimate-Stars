
void FUN_02014c94(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 0xf) >> 3 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7 | (byte)((param_2 & 1) << 3);
  FUN_02014ae0();
  return;
}

