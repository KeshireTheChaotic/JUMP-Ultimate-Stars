
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DisableBankForSubBGExtPltt [behavioral] tail-calls disableBankForX_ with the manager
   field 0x020afbb6, which GX_SetBankForSubBGExtPltt updates */

void GX_DisableBankForSubBGExtPltt(void)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["04001000"] */
  _DAT_04001000 = _DAT_04001000 & 0xbfffffff;
  disableBankForX_(&DAT_020afbb6);
  return;
}

