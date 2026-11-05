
undefined4 FUN_02014d6c(int param_1)

{
  if (((char)*(byte *)(param_1 + 0x10) < '\0') && ((*(byte *)(param_1 + 0x10) & 3) >> 1 != 0)) {
    return 1;
  }
  return 0;
}

