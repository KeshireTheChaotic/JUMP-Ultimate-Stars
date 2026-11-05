
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0206537c(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_sub":1,"VRAMCNT":1} io=["04000248","04001000"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb6);
  if (param_1 == 0) {
    _DAT_04001000 = _DAT_04001000 & 0xbfffffff;
  }
  else if (param_1 == 0x80) {
    _DAT_04001000 = _DAT_04001000 | 0x40000000;
    DAT_04000248 = 0x82;
  }
  DAT_020afbb6 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}

