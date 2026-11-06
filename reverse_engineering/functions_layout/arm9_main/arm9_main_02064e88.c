
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DispOn [behavioral] sets the display-on flag and restores the display mode saved by
   GX_DispOff (globals ['0x209dd3c', '0x20afb9c']) */

void GX_DispOn(void)

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

