
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02060da4(short *param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"MATH_DIVSQRT":5}
                       io=["04000280","04000290","04000298","0400029c","040002a0"] */
  if (param_1 == (short *)0x0) {
    DAT_020aeb90 = 0;
    return;
  }
  uVar1 = OS_DisableInterrupts();
  if (param_1[2] == 0) {
    DAT_020aeb78 = 0;
    DAT_020aeb7c = 0;
    DAT_020aeb80 = 0;
  }
  else {
    _DAT_04000280 = 0;
    _DAT_04000290 = 0x10000000;
    _DAT_0400029c = 0;
    DAT_020aeb78 = (int)*param_1;
    DAT_020aeb7c = (int)param_1[2];
    DAT_020aeb80 = _DAT_040002a0;
    _DAT_04000298 = (int)param_1[2];
  }
  if (param_1[3] == 0) {
    DAT_020aeb84 = 0;
    DAT_020aeb88 = 0;
    DAT_020aeb8c = 0;
  }
  else {
    _DAT_04000280 = 0;
    _DAT_04000290 = 0x10000000;
    _DAT_0400029c = 0;
    DAT_020aeb84 = (int)param_1[1];
    DAT_020aeb88 = (int)param_1[3];
    DAT_020aeb8c = _DAT_040002a0;
    _DAT_04000298 = (int)param_1[3];
  }
  OS_RestoreInterrupts(uVar1);
  DAT_020aeb90 = 1;
  return;
}

