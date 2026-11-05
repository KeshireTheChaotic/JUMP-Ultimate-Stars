
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eaa8c(uint param_1)

{
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808088","0480808e"] */
  if ((param_1 == 0) || (0xff < param_1)) {
    return 5;
  }
  *(short *)(_DAT_0380fff4 + 0x3b8) = (short)param_1;
  _DAT_0480808e = (short)param_1;
  _DAT_04808088 = 0;
  return 0;
}

