
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ebb30(short *param_1)

{
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808098"] */
  if (((*param_1 == 0) || ((**(ushort **)(param_1 + 4) & 1) == 0)) ||
     ((((uint)*(ushort **)(param_1 + 4) & 0x3fff) >> 1 | 0x8000) == (uint)_DAT_04808098)) {
    return 0;
  }
  FUN_027f1bb0();
  return 1;
}

