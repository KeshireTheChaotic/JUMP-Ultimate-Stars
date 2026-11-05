
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203bb78(short param_1,int param_2)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["0400104a"] */
  _DAT_0400104a = _DAT_0400104a & 0xc0ff | param_1 << 8;
  if (param_2 != 0) {
    _DAT_0400104a = _DAT_0400104a | 0x2000;
  }
  return;
}

