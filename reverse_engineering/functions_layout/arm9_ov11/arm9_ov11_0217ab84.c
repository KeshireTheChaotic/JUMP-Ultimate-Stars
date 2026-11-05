
void FUN_0217ab84(int param_1,byte param_2)

{
  *(undefined1 *)(param_1 + 0x39) = 2;
  if ((*(uint *)(param_1 + 0x4c) & 1 << (uint)param_2) != 0) {
    param_2 = 0;
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(byte *)(param_1 + 0x3a) = param_2;
  *(undefined1 *)(param_1 + 0x105) = 2;
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x400;
  return;
}

