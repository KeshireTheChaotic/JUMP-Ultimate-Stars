
/* JUS-SDK GX_SetBankForARM7 [behavioral] every VRAMCNT write selects a ARM7 mode (bank/MST per
   GBATEK) */

void GX_SetBankForARM7(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":2} io=["04000242","04000243"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afba6);
  if (param_1 < 9) {
    if (param_1 < 8) {
      if ((((param_1 < 5) && (-1 < param_1)) && (param_1 != 0)) && (param_1 == 4)) {
        DAT_04000242 = 0x82;
      }
    }
    else {
      DAT_04000243 = 0x82;
    }
  }
  else if (param_1 == 0xc) {
    DAT_04000243 = 0x8a;
    DAT_04000242 = 0x82;
  }
  DAT_020afba6 = (ushort)param_1;
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

