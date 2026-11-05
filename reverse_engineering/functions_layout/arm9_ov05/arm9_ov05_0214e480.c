
uint FUN_0214e480(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = (int)(uint)*(byte *)(param_1 + 0xb) >> 4;
    if (uVar1 == 3) {
      uVar1 = (uint)*(byte *)(*(int *)(DAT_0214bd80 + 0x40) +
                             (short)(ushort)*(byte *)(param_1 + 7) * 0x3c);
    }
    return uVar1;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    return (uint)*(byte *)((uint)*(byte *)(param_1 + 7) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
                          (*(char *)(param_1 + 8) + -1) * 8);
  }
  return 3;
}

