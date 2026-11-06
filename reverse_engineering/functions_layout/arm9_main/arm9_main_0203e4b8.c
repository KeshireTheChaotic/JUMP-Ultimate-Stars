
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203e4b8(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["0400100e"] */
  if (param_1 == 0) {
    _DAT_0400100e = _DAT_0400100e & 0xffbf;
  }
  else {
    _DAT_0400100e = _DAT_0400100e | 0x40;
  }
  return;
}

