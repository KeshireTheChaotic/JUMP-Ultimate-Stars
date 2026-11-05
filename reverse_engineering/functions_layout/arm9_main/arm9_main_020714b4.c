
bool FUN_020714b4(uint param_1)

{
  return (*(uint *)((param_1 >> 5) * 4 + 0x20b0cdc) & 1 << (param_1 & 0x1f)) != 0;
}

