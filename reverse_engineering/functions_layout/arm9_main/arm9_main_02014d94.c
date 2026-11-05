
void FUN_02014d94(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x10) >> 7 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0x7f | (byte)((param_2 & 1) << 7);
  FUN_02014ae0();
  return;
}

