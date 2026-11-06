
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_SetBankForOBJExtPltt [behavioral] every VRAMCNT write selects a OBJExtPltt mode
   (bank/MST per GBATEK) */

void GX_SetBankForOBJExtPltt(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_main":1,"VRAMCNT":2} io=["04000000","04000245","04000246"]
                        */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb0);
  if (param_1 == 0) {
    _DAT_04000000 = _DAT_04000000 & 0x7fffffff;
  }
  else if (param_1 == 0x20) {
    _DAT_04000000 = _DAT_04000000 | 0x80000000;
    DAT_04000245 = 0x85;
  }
  else if (param_1 == 0x40) {
    _DAT_04000000 = _DAT_04000000 | 0x80000000;
    DAT_04000246 = 0x85;
  }
  DAT_020afbb0 = (ushort)param_1;
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

