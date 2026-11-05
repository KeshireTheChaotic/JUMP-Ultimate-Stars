
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb3a0(uint param_1)

{
                    /* JUS-TAG hw={"WIRELESS":1} io=["0480802c"] */
  if (param_1 < 0x100) {
    *(short *)(_DAT_0380fff4 + 0x32a) = (short)param_1;
    _DAT_0480802c = (short)param_1;
    return 0;
  }
  return 5;
}

