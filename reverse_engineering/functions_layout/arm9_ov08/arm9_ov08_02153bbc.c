
void FUN_02153bbc(short *param_1)

{
  if (param_1 != (short *)0x0) {
    if ((uint)(int)*param_1 < 10) {
      (*(code *)((int)&switchD_02153bdc::switchdataD_02153bde +
                (int)(short)(&switchD_02153bdc::switchdataD_02153bde)[*param_1]))();
      return;
    }
    if (DAT_0216d1d0 != (code *)0x0) {
      (*DAT_0216d1d0)(1,0);
    }
  }
  return;
}

