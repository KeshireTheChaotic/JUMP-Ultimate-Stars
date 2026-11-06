
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_SetBankForBGExtPltt [behavioral] every VRAMCNT write selects a BGExtPltt mode
   (bank/MST per GBATEK) */

void GX_SetBankForBGExtPltt(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_main":1,"VRAMCNT":3}
                       io=["04000000","04000244","04000245","04000246"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbae);
  if (param_1 < 0x21) {
    if (param_1 < 0x20) {
      if (param_1 < 1) {
        if (param_1 == 0) {
          _DAT_04000000 = _DAT_04000000 & 0xbfffffff;
        }
      }
      else if (param_1 == 0x10) {
        _DAT_04000000 = _DAT_04000000 | 0x40000000;
        DAT_04000244 = 0x84;
      }
      goto LAB_02065878;
    }
  }
  else {
    if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        _DAT_04000000 = _DAT_04000000 | 0x40000000;
        DAT_04000246 = 0x8c;
      }
      goto LAB_02065878;
    }
    if (param_1 != 0x60) goto LAB_02065878;
    DAT_04000246 = 0x8c;
  }
  DAT_04000245 = 0x84;
  _DAT_04000000 = _DAT_04000000 | 0x40000000;
LAB_02065878:
  DAT_020afbae = (ushort)param_1;
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

