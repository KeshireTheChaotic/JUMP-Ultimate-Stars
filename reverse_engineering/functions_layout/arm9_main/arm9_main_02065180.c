
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DisableBankForBGExtPltt [behavioral] tail-calls disableBankForX_ with the manager
   field 0x020afbae, which GX_SetBankForBGExtPltt updates */

void GX_DisableBankForBGExtPltt(void)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000000"] */
  _DAT_04000000 = _DAT_04000000 & 0xbfffffff;
  disableBankForX_(&DAT_020afbae);
  return;
}

