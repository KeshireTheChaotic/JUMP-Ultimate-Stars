
void FUN_020668e0(void)

{
  if (DAT_0209dd40 != -1) {
    MI_WaitDma();
  }
  GX_SetBankForBGExtPltt(DAT_020afbc8);
  DAT_020afbc8 = 0;
  DAT_020afbc4 = 0;
  DAT_020afbc0 = 0;
  return;
}

