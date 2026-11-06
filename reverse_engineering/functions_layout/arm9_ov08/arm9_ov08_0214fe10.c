
void FUN_0214fe10(short *param_1)

{
  if (param_1 != (short *)0x0) {
    if ((uint)(int)*param_1 < 8) {
      (*(code *)((int)&switchD_0214fe30::switchdataD_0214fe32 +
                (int)(short)(&switchD_0214fe30::switchdataD_0214fe32)[*param_1]))();
      return;
    }
    if (DAT_0216d11c != (code *)0x0) {
      (*DAT_0216d11c)(1,0);
    }
  }
  return;
}

