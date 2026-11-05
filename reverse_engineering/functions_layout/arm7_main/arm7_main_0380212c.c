
void FUN_0380212c(uint param_1)

{
  if (((&DAT_03808fe8)[param_1 * 0x24] & 1) != 0) {
    FUN_038016bc(&DAT_03808fe8 + param_1 * 0x24);
    if (DAT_03808aa4 != 0) {
      *(uint *)(DAT_03808aa4 + 4) = *(uint *)(DAT_03808aa4 + 4) & ~(1 << (param_1 & 0xff));
    }
  }
  return;
}

