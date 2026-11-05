
bool FUN_02152708(uint param_1)

{
  return (*(uint *)((param_1 >> 5) * 4 + 0x20b0d38) & 1 << (param_1 & 0x1f)) != 0;
}

