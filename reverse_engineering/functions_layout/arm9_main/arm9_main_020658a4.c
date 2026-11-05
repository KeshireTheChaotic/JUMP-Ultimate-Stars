
void FUN_020658a4(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":5}
                       io=["04000240","04000241","04000244","04000245","04000246"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afba4);
  if (param_1 < 0x31) {
    if (0x2f < param_1) goto LAB_02065920;
    if (0x10 < param_1) {
      if (param_1 != 0x20) goto switchD_020658d6_caseD_0;
LAB_02065942:
      DAT_04000245 = 0x82;
      goto switchD_020658d6_caseD_0;
    }
    if (param_1 < 0x10) {
      switch(param_1) {
      case 2:
        DAT_04000241 = 0x82;
        break;
      case 3:
        DAT_04000241 = 0x8a;
      case 1:
        DAT_04000240 = 0x82;
      }
      goto switchD_020658d6_caseD_0;
    }
  }
  else {
    if (param_1 < 0x51) {
      if (param_1 < 0x50) {
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
    if (param_1 < 0x61) {
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
  DAT_020afba4 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}

