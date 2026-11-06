
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DisableBankForOBJExtPltt [behavioral] tail-calls disableBankForX_ with the manager
   field 0x020afbb0, which GX_SetBankForOBJExtPltt updates */

void GX_DisableBankForOBJExtPltt(void)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000000"] */
  _DAT_04000000 = _DAT_04000000 & 0x7fffffff;
  disableBankForX_(&DAT_020afbb0);
  return;
}

