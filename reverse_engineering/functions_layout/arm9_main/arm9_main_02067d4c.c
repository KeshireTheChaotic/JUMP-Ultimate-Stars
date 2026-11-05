
undefined4 FUN_02067d4c(int param_1)

{
  if ((*(byte *)(param_1 + 0xd0b) & 0xf) >> 2 == 1) {
    return 0xc0000;
  }
  return 0x80000;
}

