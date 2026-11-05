
void FUN_02066920(void)

{
  DAT_020afbc8 = FUN_020652d8();
  if (DAT_020afbc8 < 0x21) {
    if (DAT_020afbc8 < 0x20) {
      if (DAT_020afbc8 < 1) {
        return;
      }
      if (DAT_020afbc8 == 0x10) {
        DAT_020afbc4 = 0x6880000;
        DAT_020afbc0 = 0;
        return;
      }
      return;
    }
  }
  else {
    if (DAT_020afbc8 < 0x41) {
      if (DAT_020afbc8 == 0x40) {
        DAT_020afbc4 = 0x6894000;
        DAT_020afbc0 = 0x4000;
        return;
      }
      return;
    }
    if (DAT_020afbc8 != 0x60) {
      return;
    }
  }
  DAT_020afbc4 = 0x6890000;
  DAT_020afbc0 = 0;
  return;
}

