
bool FUN_02164434(uint param_1)

{
  return (*(uint *)(&DAT_020b0d2c + (param_1 >> 5) * 4) & 1 << (param_1 & 0x1f)) != 0;
}

