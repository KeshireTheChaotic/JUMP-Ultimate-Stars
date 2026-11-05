
void FUN_020655d8(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":3} io=["04000244","04000245","04000246"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbaa);
  if (param_1 < 0x31) {
    if (0x2f < param_1) goto LAB_02065634;
    if (0x10 < param_1) {
      if (param_1 != 0x20) goto LAB_02065640;
      goto LAB_0206561e;
    }
    if (param_1 < 0x10) goto LAB_02065640;
  }
  else {
    if (param_1 < 0x61) {
      if (param_1 < 0x60) {
        if (param_1 == 0x40) {
          DAT_04000246 = 0x83;
        }
        goto LAB_02065640;
      }
      DAT_04000246 = 0x8b;
LAB_0206561e:
      DAT_04000245 = 0x83;
      goto LAB_02065640;
    }
    if (param_1 != 0x70) goto LAB_02065640;
    DAT_04000246 = 0x9b;
LAB_02065634:
    DAT_04000245 = 0x93;
  }
  DAT_04000244 = 0x83;
LAB_02065640:
  DAT_020afbaa = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}

