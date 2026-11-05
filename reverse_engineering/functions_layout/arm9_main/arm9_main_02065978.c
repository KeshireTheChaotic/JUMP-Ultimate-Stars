
void FUN_02065978(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":7}
                       io=["04000240","04000241","04000242","04000243","04000244","04000245","04000246"]
                        */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afba2);
  if (param_1 < 0x41) {
    if (0x3f < param_1) {
      DAT_04000246 = 0x81;
      goto switchD_020659aa_caseD_0;
    }
    if (0x20 < param_1) {
      if (param_1 != 0x30) goto switchD_020659aa_caseD_0;
      goto LAB_02065a96;
    }
    switch(param_1) {
    case 8:
      DAT_04000243 = 0x81;
      break;
    case 9:
      DAT_04000240 = 0x81;
      DAT_04000243 = 0x89;
      break;
    case 10:
      DAT_04000241 = 0x81;
      DAT_04000243 = 0x89;
      break;
    case 0xb:
      DAT_04000240 = 0x81;
      DAT_04000241 = 0x89;
      DAT_04000243 = 0x91;
      break;
    case 0xc:
      DAT_04000243 = 0x89;
    case 4:
      DAT_04000242 = 0x81;
      break;
    case 0xd:
      DAT_04000243 = 0x91;
    case 5:
      DAT_04000240 = 0x81;
      DAT_04000242 = 0x89;
      break;
    case 0xe:
      DAT_04000243 = 0x91;
    case 6:
      DAT_04000242 = 0x89;
    case 2:
      DAT_04000241 = 0x81;
      break;
    case 0xf:
      DAT_04000243 = 0x99;
    case 7:
      DAT_04000242 = 0x91;
    case 3:
      DAT_04000241 = 0x89;
    case 1:
      DAT_04000240 = 0x81;
      break;
    case 0x10:
      goto switchD_020659aa_caseD_10;
    case 0x20:
      goto switchD_020659aa_caseD_20;
    }
  }
  else {
    if (param_1 < 0x61) {
      if (param_1 < 0x60) {
        if (param_1 == 0x50) {
          DAT_04000246 = 0x91;
          DAT_04000244 = 0x81;
        }
        goto switchD_020659aa_caseD_0;
      }
      DAT_04000246 = 0x89;
switchD_020659aa_caseD_20:
      DAT_04000245 = 0x81;
      goto switchD_020659aa_caseD_0;
    }
    if (param_1 != 0x70) goto switchD_020659aa_caseD_0;
    DAT_04000246 = 0x99;
LAB_02065a96:
    DAT_04000245 = 0x91;
switchD_020659aa_caseD_10:
    DAT_04000244 = 0x81;
  }
switchD_020659aa_caseD_0:
  DAT_020afba2 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}

