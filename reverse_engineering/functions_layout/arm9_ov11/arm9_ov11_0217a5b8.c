
void FUN_0217a5b8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0217a5a4(*(undefined4 *)(param_1 + 0x24));
  if (uVar1 < 0x80) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x15);
  }
  else if (*(char *)(param_1 + 0x106) == '\0') {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x16);
  }
  else {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x14);
  }
  *(short *)(param_1 + 0xf4) = *(short *)(param_1 + 0xf4) + (short)(uVar1 * 0x14 >> 8);
  return;
}

