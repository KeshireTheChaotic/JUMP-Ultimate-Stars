
/* JUS-SDK GX_SetBankForOBJ [behavioral] every VRAMCNT write selects a OBJ mode (bank/MST per
   GBATEK) */

void GX_SetBankForOBJ(uint param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_1;
                    /* JUS-TAG hw={"VRAMCNT":5}
                       io=["04000240","04000241","04000244","04000245","04000246"] */
  DAT_020afba0 = ~uVar1 & (DAT_020afba0 | DAT_020afba4);
  DAT_020afba4 = uVar1;
  if ((int)param_1 < 0x31) {
    if (0x2f < (int)param_1) goto LAB_02065920;
    if (0x10 < (int)param_1) {
      if (param_1 != 0x20) goto switchD_020658d6_caseD_0;
LAB_02065942:
      DAT_04000245 = 0x82;
      goto switchD_020658d6_caseD_0;
    }
    if ((int)param_1 < 0x10) {
      if (param_1 < 4) {
        (*(code *)((int)&switchD_020658d6::switchdataD_020658d8 +
                  (int)(short)(&switchD_020658d6::switchdataD_020658d8)[param_1]))();
        return;
      }
      goto switchD_020658d6_caseD_0;
    }
  }
  else {
    if ((int)param_1 < 0x51) {
      if ((int)param_1 < 0x50) {
        if (param_1 == 0x40) {
          DAT_04000246 = 0x82;
        }
      }
      else {
        DAT_04000246 = 0x92;
        DAT_04000244 = 0x82;
      }
      goto switchD_020658d6_caseD_0;
    }
    if ((int)param_1 < 0x61) {
      if (param_1 != 0x60) goto switchD_020658d6_caseD_0;
      DAT_04000246 = 0x8a;
      goto LAB_02065942;
    }
    if (param_1 != 0x70) goto switchD_020658d6_caseD_0;
    DAT_04000246 = 0x9a;
LAB_02065920:
    DAT_04000245 = 0x92;
  }
  DAT_04000244 = 0x82;
switchD_020658d6_caseD_0:
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  return;
}

