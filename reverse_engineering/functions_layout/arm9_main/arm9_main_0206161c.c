
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0206161c(int param_1,int param_2,int param_3,int param_4)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"POWCNT":1} io=["027ffc3c","04000304"] */
  if (param_1 == 0) {
    _DAT_04000304 = _DAT_04000304 & 0xfffe;
    DAT_020aebc8 = _DAT_027ffc3c;
    if (param_2 != 0) {
      if (param_4 == 0) {
        FUN_02061a18(param_2,0,0);
      }
      else {
        FUN_020619f8(param_2);
      }
    }
  }
  else if (param_1 == 1) {
    if ((param_3 == 0) && ((uint)(_DAT_027ffc3c - DAT_020aebc8) < 8)) {
      return 0;
    }
    if (param_2 != 0) {
      if (param_4 == 0) {
        FUN_02061a18(param_2,0,0);
      }
      else {
        FUN_020619f8(param_2);
      }
    }
    _DAT_04000304 = _DAT_04000304 | 1;
  }
  return 1;
}

