
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_SetBankForTex [behavioral] every VRAMCNT write selects a Tex mode (bank/MST per
   GBATEK) */

void GX_SetBankForTex(uint param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_1;
                    /* JUS-TAG hw={"VRAMCNT":4,"GX_2D_main":1}
                       io=["04000060","04000240","04000241","04000242","04000243"] */
  DAT_020afba0 = ~uVar1 & (DAT_020afba0 | DAT_020afba8);
  DAT_020afba8 = uVar1;
  if (param_1 == 0) {
    _DAT_04000060 = _DAT_04000060 & 0xcffe;
  }
  else {
    _DAT_04000060 = _DAT_04000060 & 0xcfff | 1;
    if (param_1 < 0x10) {
      (*(code *)(&DAT_020656a2 + *(short *)(&DAT_020656a2 + param_1 * 2)))();
      return;
    }
  }
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

