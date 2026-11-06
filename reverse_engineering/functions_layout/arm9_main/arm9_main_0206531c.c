
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_SetBankForSubOBJExtPltt [behavioral] every VRAMCNT write selects a SubOBJExtPltt mode
   (bank/MST per GBATEK) */

void GX_SetBankForSubOBJExtPltt(dword param_1)

{
  code *in_lr;
  
                    /* JUS-TAG hw={"GX_2D_sub":1,"VRAMCNT":1} io=["04000249","04001000"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb8);
  if (param_1 == 0) {
    _DAT_04001000 = _DAT_04001000 & 0x7fffffff;
  }
  else if (param_1 == 0x100) {
    _DAT_04001000 = _DAT_04001000 | 0x80000000;
    DAT_04000249 = 0x83;
  }
  DAT_020afbb8 = (ushort)param_1;
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  (*in_lr)();
  return;
}

