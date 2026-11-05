
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02064e88(void)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000000"] */
  DAT_0209dd3c = 1;
  if (DAT_020afb9c == 0) {
    _DAT_04000000 = _DAT_04000000 | 0x10000;
    return;
  }
  _DAT_04000000 = _DAT_04000000 & 0xfffcffff | (uint)DAT_020afb9c << 0x10;
  return;
}

