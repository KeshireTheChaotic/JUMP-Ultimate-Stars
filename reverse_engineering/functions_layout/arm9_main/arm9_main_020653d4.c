
/* JUS-SDK GX_SetBankForSubOBJ [behavioral] every VRAMCNT write selects a SubOBJ mode (bank/MST per
   GBATEK) */

void GX_SetBankForSubOBJ(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":2} io=["04000243","04000249"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb4);
  if (param_1 != 0) {
    if (param_1 == 8) {
      DAT_04000243 = 0x84;
    }
    else if (param_1 == 0x100) {
      DAT_04000249 = 0x82;
    }
  }
  DAT_020afbb4 = (ushort)param_1;
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

