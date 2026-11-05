
void FUN_02065424(int param_1)

{
                    /* JUS-TAG hw={"VRAMCNT":3} io=["04000242","04000248","04000249"] */
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb2);
  if (param_1 < 0x81) {
    if (param_1 < 0x80) {
      if ((((param_1 < 5) && (-1 < param_1)) && (param_1 != 0)) && (param_1 == 4)) {
        DAT_04000242 = 0x84;
      }
      goto LAB_0206546c;
    }
  }
  else {
    if (param_1 != 0x180) goto LAB_0206546c;
    DAT_04000249 = 0x81;
  }
  DAT_04000248 = 0x81;
LAB_0206546c:
  DAT_020afbb2 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
  return;
}

