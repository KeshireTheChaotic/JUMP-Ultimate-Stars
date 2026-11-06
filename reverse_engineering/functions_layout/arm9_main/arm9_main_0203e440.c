
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203e440(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["04001008"] */
  if (param_1 == 0) {
    _DAT_04001008 = _DAT_04001008 & 0xffbf;
  }
  else {
    _DAT_04001008 = _DAT_04001008 | 0x40;
  }
  return;
}

