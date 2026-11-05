
void FUN_0205c0f8(void)

{
  if (DAT_020adffc == 0) {
    return;
  }
  DAT_020ae018 = 0;
  MIi_CpuClear32(0,DAT_020ae008,DAT_020ae010);
  MIi_CpuClear32(0,uRam020ae00c,DAT_020ae010);
  DC_FlushRange(DAT_020ae008,DAT_020ae010);
  DC_FlushRange(uRam020ae00c,DAT_020ae010);
  FUN_02056954(DAT_020ae020,DAT_020ae024);
  return;
}

