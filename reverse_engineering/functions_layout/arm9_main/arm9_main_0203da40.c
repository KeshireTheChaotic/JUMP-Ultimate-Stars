
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203da40(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000008"] */
  if (param_1 == 0) {
    _DAT_04000008 = _DAT_04000008 & 0xffbf;
  }
  else {
    _DAT_04000008 = _DAT_04000008 | 0x40;
  }
  return;
}

