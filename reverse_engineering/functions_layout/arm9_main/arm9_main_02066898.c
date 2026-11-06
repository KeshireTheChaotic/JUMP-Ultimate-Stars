
void FUN_02066898(void)

{
  if (DAT_0209dd40 != -1) {
    MI_WaitDma();
  }
  GX_SetBankForSubBGExtPltt(DAT_020afbbc);
  DAT_020afbbc = 0;
  return;
}

