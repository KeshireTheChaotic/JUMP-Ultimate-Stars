
undefined4 FUN_021cdffc(uint param_1)

{
  if (4 < (int)param_1) {
    return 0;
  }
  if ((DAT_021d7bf0 == 1) || (1 < param_1)) {
    DAT_021d578c = (uint)(byte)(&DAT_021d0389)[param_1 * 2] +
                   (uint)(byte)(&DAT_021d0388)[param_1 * 2] * 0x44 + 0xc;
    DAT_021d579c = param_1;
    DAT_021d5790 = 0;
    DAT_021d5792 = 0;
    return 1;
  }
  return 0;
}

