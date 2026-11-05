
void FUN_0215ef24(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x03') {
    return;
  }
  if (0 < *(short *)(param_1 + 0x102)) {
    *(short *)(param_1 + 0x102) = *(short *)(param_1 + 0x102) + -1;
  }
  return;
}

