
bool FUN_020715d4(uint param_1)

{
  return (*(uint *)((param_1 >> 5) * 4 + 0x20b0cf8) & 1 << (param_1 & 0x1f)) != 0;
}

