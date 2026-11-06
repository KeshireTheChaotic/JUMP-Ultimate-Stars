
void FUN_02066fac(void)

{
  if (DAT_0209dd40 != -1) {
    MI_WaitDma();
  }
  GX_SetBankForTexPltt(DAT_020afbd4);
  DAT_020afbd4 = 0;
  DAT_020afbd0 = 0;
  return;
}

