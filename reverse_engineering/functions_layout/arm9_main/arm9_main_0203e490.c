
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203e490(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["0400100c"] */
  if (param_1 == 0) {
    _DAT_0400100c = _DAT_0400100c & 0xffbf;
  }
  else {
    _DAT_0400100c = _DAT_0400100c | 0x40;
  }
  return;
}

