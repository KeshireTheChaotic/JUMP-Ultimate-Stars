
/* JUS-SDK GX_SetBankForBG [behavioral] every VRAMCNT write selects a BG mode (bank/MST per GBATEK)
    */

void GX_SetBankForBG(int param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_1;
                    /* JUS-TAG hw={"VRAMCNT":7}
                       io=["04000240","04000241","04000242","04000243","04000244","04000245","04000246"]
                        */
  DAT_020afba0 = ~uVar1 & (DAT_020afba0 | DAT_020afba2);
  DAT_020afba2 = uVar1;
  if (param_1 < 0x41) {
    if (0x3f < param_1) {
      DAT_04000246 = 0x81;
      goto switchD_020659aa_caseD_0;
    }
    if (param_1 < 0x21) {
      if (-1 < param_1) {
        (*(code *)((int)&switchD_020659aa::switchdataD_020659ac +
                  (int)(short)(&switchD_020659aa::switchdataD_020659ac)[param_1]))();
        return;
      }
      goto switchD_020659aa_caseD_0;
    }
    if (param_1 != 0x30) goto switchD_020659aa_caseD_0;
  }
  else {
    if (param_1 < 0x61) {
      if (param_1 < 0x60) {
        if (param_1 == 0x50) {
          DAT_04000246 = 0x91;
          DAT_04000244 = 0x81;
        }
      }
      else {
        DAT_04000246 = 0x89;
        DAT_04000245 = 0x81;
      }
      goto switchD_020659aa_caseD_0;
    }
    if (param_1 != 0x70) goto switchD_020659aa_caseD_0;
    DAT_04000246 = 0x99;
  }
  DAT_04000245 = 0x91;
  DAT_04000244 = 0x81;
switchD_020659aa_caseD_0:
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

