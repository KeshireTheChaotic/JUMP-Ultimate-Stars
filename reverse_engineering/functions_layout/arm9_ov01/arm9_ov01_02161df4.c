
bool FUN_02161df4(uint param_1)

{
  return (*(uint *)(&DAT_020b0c94 + (param_1 >> 5) * 4) & 1 << (param_1 & 0x1f)) != 0;
}

