
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203da68(int param_1)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["0400000a"] */
  if (param_1 == 0) {
    _DAT_0400000a = _DAT_0400000a & 0xffbf;
  }
  else {
    _DAT_0400000a = _DAT_0400000a | 0x40;
  }
  return;
}

