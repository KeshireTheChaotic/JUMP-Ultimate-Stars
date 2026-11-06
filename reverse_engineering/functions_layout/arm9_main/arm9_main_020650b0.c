
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DisableBankForSubOBJExtPltt [behavioral] tail-calls disableBankForX_ with the manager
   field 0x020afbb8, which GX_SetBankForSubOBJExtPltt updates */

void GX_DisableBankForSubOBJExtPltt(void)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["04001000"] */
  _DAT_04001000 = _DAT_04001000 & 0x7fffffff;
  disableBankForX_(&DAT_020afbb8);
  return;
}

